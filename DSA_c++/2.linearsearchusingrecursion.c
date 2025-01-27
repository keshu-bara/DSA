// C Program to implement linear search using recursion
#include <stdio.h>

int linearSearch(int* arr, int n, int key) {
  
    // Base Case: if there are no elements, return -1
    if (n == 0)
        return -1;

    // If the element at (n - 1) index is equal to key,
    // return (n - 1)
    if (arr[n - 1] == key) {
        return n - 1;
    }

    // If element is not at n - 1, call linear search for
    // same array arr but reducing the size by a single
    // element
    return linearSearch(arr, n - 1, key);
}

int main() {
    int arr[] = { 10, 50, 30, 70, 80, 60, 20, 90, 40 };
    int n = sizeof(arr) / sizeof(int);
    int key = 30;

    // Calling linearSearch function
    int i = linearSearch(arr, n, key);

    if (i == -1)
        printf("Key Not Found");
    else
        printf("Key Found at Index: %d", i);

    return 0;
}