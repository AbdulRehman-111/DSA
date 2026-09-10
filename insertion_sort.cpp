#include <iostream>
using namespace std;

int main()
{
    int arr[] = {170, 45, 75, 90, 802,2,25,66};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Insertion Sort
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        // Shift larger elements to the right
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key at its correct position
        arr[j + 1] = key;
        
        cout<<"\nArray after "<<i<<" pass(es)\n";
         for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    }
cout<<"\n";
    // Display sorted array
    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}