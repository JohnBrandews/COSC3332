#include <iostream>
#include <algorithm> // For sorting
using namespace std;

// Iterative Binary Search
int binarySearchIterative(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Element not found
}

// Recursive Binary Search
int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, right, target);
    else
        return binarySearchRecursive(arr, left, mid - 1, target);
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function
int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements (sorted order recommended for binary search): ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    // Optional: Sort the array to ensure it's sorted
    sort(arr, arr + size);

    cout << "Sorted Array: ";
    printArray(arr, size);

    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    // Iterative search
    int resultIterative = binarySearchIterative(arr, size, target);
    if (resultIterative != -1)
        cout << "Element found at index (Iterative): " << resultIterative << endl;
    else
        cout << "Element not found (Iterative)" << endl;

    // Recursive search
    int resultRecursive = binarySearchRecursive(arr, 0, size - 1, target);
    if (resultRecursive != -1)
        cout << "Element found at index (Recursive): " << resultRecursive << endl;
    else
        cout << "Element not found (Recursive)" << endl;

    return 0;
};