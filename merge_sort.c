#include<stdio.h>

int main() {
    int arr[] = {6,5,12,10,9,1,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    merge_sort(arr, 0, size-1);

    for(int i=0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void merge_sort(int arr[], int left, int right) {
    if(left < right) {
        // mid
        int mid = left + (right-left) / 2;
        // calling the merge sort for first half
        merge_sort(arr, left, mid);
        // calling the merge sort for second half
        merge_sort(arr, mid+1, right);

        // calling the merge function
        merge(arr, left, mid, right);
    }
}

void merge(int arr[], int left, int mid, int right) {
    int i,j,k;
    int s1 = mid - left + 1;
    int s2 = right - mid;

    // crate temporary arrays

    int left_array[s1], right_array[s2];

    for(i=0; i<s1; i++) {
        left_array[i] = arr[left+i];
    }

    for(j=0; j<s2; j++) {
        right_array[j] = arr[mid+1+j];
    }

    i = 0;
    j = 0;
    k = left;

    while(i < s1 && j < s2) {
        if(left_array[i] <= right_array[j]) {
            arr[k] = left_array[i];
            i++;
        }else{
            arr[k] = right_array[j];
            j++;
        }
        k++;
    }

    while(i < s1) {
        arr[k] = left_array[i];
        i++;
        k++;
    }

    while(j < s2) {
        arr[k] = right_array[j];
        j++;
        k++;
    }
 }
