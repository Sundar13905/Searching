# Experiment 21 Searching algorithms 

## Aim :-
Execute and run linear and binary search algortihms in C++

## Theory :-

### Linear Search Algorithm
The linear search algorithm is defined as a sequential search algorithm that starts at one end and goes through each element of a list until the desired element is found.
Otherwise, the search continues till the end of the dataset. 
In this experiment, we will learn about the basics of the linear search algorithm, its applications, advantages, disadvantages, and more to provide a deep understanding of linear search.

### Algorithm for Linear Search Algorithm:
The algorithm for linear search can be broken down into the following steps:

1. Start: Begin at the first element of the collection of elements.
2. Compare: Compare the current element with the desired element.
3. Found: If the current element is equal to the desired element, return true or index to the current element.
4. Move: Otherwise, move to the next element in the collection.
5. Repeat: Repeat steps 2-4 until we have reached the end of collection.
6. Not found: If the end of the collection is reached without finding the desired element, return that the desired element is not in the array.

### Applications of Linear Search Algorithm:
Unsorted Lists: When we have an unsorted array or list, linear search is most commonly used to find any element in the collection.
Small Data Sets: Linear Search is preferred over binary search when we have small data sets with
Searching Linked Lists: In linked list implementations, linear search is commonly used to find elements within the list. Each node is checked sequentially until the desired element is found.
Simple Implementation: Linear Search is much easier to understand and implement as compared to Binary Search or Ternary Search.

### Advantages of Linear Search Algorithm:
Linear search can be used irrespective of whether the array is sorted or not. It can be used on arrays of any data type.
Does not require any additional memory.

### Disadvantages of Linear Search Algorithm:
Linear search has a time complexity of O(N), which in turn makes it slow for large datasets.
Not suitable for large arrary

### Binary Search Algorithm 

Binary search is a search algorithm used to find the position of a target value within a sorted array. 
It works by repeatedly dividing the search interval in half until the target value is found or the interval is empty. 
The search interval is halved by comparing the target element with the middle value of the search space

### Binary Search Algorithm

START
1. Divide the search space into two halves by finding the middle index.
2. Compare the middle element of the search space with the key. 
3. If the key is found at middle element, the process is terminated.
4. If the key is not found at middle element, choose which half will be used as the next search space.
5. If the key is smaller than the middle element, then the left side is used for next search.
6. If the key is larger than the middle element, then the right side is used for next search.
END

### Applications of Binary Search Algorithm
Binary search can be used as a building block for more complex algorithms used in machine learning, such as algorithms for training neural networks or finding the optimal hyperparameters for a model.
It can be used for searching in computer graphics such as algorithms for ray tracing or texture mapping.
It can be used for searching a database.

### Advantages of Binary Search
Binary search is faster than linear search, especially for large arrays.
More efficient than other searching algorithms with a similar time complexity, such as interpolation search or exponential search.
Binary search is well-suited for searching large datasets that are stored in external memory, such as on a hard drive or in the cloud.

### Disadvantages of Binary Search
The array should be sorted.
Binary search requires that the data structure being searched be stored in contiguous memory locations. 
Binary search requires that the elements of the array be comparable, meaning that they must be able to be ordered.

## Code
### Linear Search
~~~
#include <iostream>
using namespace std;

int search(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

// Driver code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    for(int i = 0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    int x;
    cout<<"The element u want to find: "<<endl;
    cin>>x;
    int N = sizeof(arr) / sizeof(arr[0]);
    // Function call
    int result = search(arr, N, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}

~~~
### Binary Search 
~~~
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

~~~
## Code Output

1. Linear Search
![](https://github.com/Sundar13905/Searching/blob/main/Screenshot%202024-10-21%20150910.png)

2. Binary Search
![](https://github.com/Sundar13905/Searching/blob/main/Screenshot%202024-10-21%20151327.png)

## Conclusion
In this experiment we learnt how to search an element using different searching algorithms like linear serach and binary search 
