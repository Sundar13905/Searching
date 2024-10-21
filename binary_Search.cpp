#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

// Driver code
int main(void)
{
    int arr[] = { 8,9, 10, 13 ,15 };
    for(int i = 0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    int x;
    cout<<"Enter the element to find the position of: "<<endl;
    cin>>x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result;
    return 0;
}
