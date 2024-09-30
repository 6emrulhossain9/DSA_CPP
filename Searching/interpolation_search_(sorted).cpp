#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int size, int key)
{
    int low = 0, high = size - 1;

    while (low <= high && key >= arr[low] && key <= arr[high])
    {
        if (low == high)
        {
            if (arr[low] == key)
                return low;
            return -1;
        }

        int pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (key - arr[low]));

        if (arr[pos] == key)
        {
            return pos;
        }
        else if (arr[pos] < key)
        {
            low = pos + 1;
        }
        else
        {
            high = pos - 1;
        }
    }

    return -1; // Element not found
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

    int result = interpolationSearch(arr, n, key);
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
