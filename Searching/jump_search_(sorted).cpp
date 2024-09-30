#include <iostream>
#include <cmath>
using namespace std;

int jumpSearch(int arr[], int size, int key)
{
    int step = sqrt(size);
    int prev = 0;

    while (arr[min(step, size) - 1] < key)
    {
        prev = step;
        step += sqrt(size);
        if (prev >= size)
            return -1;
    }

    for (int i = prev; i < min(step, size); i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int n, key;

    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int result = jumpSearch(arr, n, key);
    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
