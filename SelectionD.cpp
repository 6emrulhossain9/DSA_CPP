#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int max_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[max_idx])
                max_idx = j;
        }

        if (max_idx != i)
            swap(arr[max_idx], arr[i]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    selectionSort(arr, n);
    
    cout << "Sorted array in descending order: \n";
    printArray(arr, n);

    return 0;
}
