#include <stdio.h>

int main() {
    int arr[] = {-1, 1, 2, 100, 5, 7, 15, 13, -2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min,max;
    
    min_max(arr, 0, size - 1, &min, &max);
    
    printf("Min number is: %d \n", min);
    printf("Max number is: %d", max);

    return 0;
}

int min_max(int arr[], int low, int high, int *min, int *max) {
    if(low == high) {
        *min = *max = arr[low];
        return;
    }
    
    int mid = (low + high) / 2;
    int left_min, left_max, right_min,right_max;
    min_max(arr, low, mid, &left_min, &left_max);
    min_max(arr, mid + 1, high, &right_min, &right_max);
    
    *min = (left_min < right_min) ? left_min : right_min;
    *max = (left_max > right_max) ? left_max : right_max;
}
