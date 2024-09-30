#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int exponentialSearch(int arr[], int size, int key)
{
    if (arr[0] == key)
        return 0;

    int i = 1;
    while (i < size && arr[i] <= key)
    {
        i *= 2;
    }

    return binarySearch(arr, i / 2, min(i, size - 1), key);
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

    int result = exponentialSearch(arr, n, key);
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
