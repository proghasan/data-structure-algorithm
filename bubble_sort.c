#include<stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6};
    int i,j, size = 6;
    int swap;

    for(i = 0; i < size - 1; i++) {
        swap = 0;
        for(j = 0; j < size - 1 - i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
            }
        }
        if(swap == 0) {
            break;
        }
    }

    for(i = 0; i < size; i++) {
       printf("%d ", arr[i]);
    }

    return 0;
}
