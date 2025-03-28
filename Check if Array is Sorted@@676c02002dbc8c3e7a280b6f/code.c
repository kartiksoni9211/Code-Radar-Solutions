#include <stdio.h>

int main() {
    int n, i;
    
    scanf("%d", &n);
    int arr[n];


    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is sorted
    int sorted = 1;  // Assume the array is sorted initially
    for(i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            sorted = 0;  // The array is not sorted
            break;
        }
    }

    // Output whether the array is sorted or not
    if(sorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}

