#include<stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int search = 6;

    int result = binary_search(arr, search, 0, n-1);

    if(result == -1) {
        printf("Element not found");
    }else {
        printf("Element is found at index: %d", result);
    }

    return 0;
}

int binary_search(int arr[], int search, int start, int end) {
    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == search) {
            return mid;
        }else if(arr[mid] < search) {
            start = mid + 1;
        }else {
            end = mid - 1;
        }
    }

    return -1;
}


