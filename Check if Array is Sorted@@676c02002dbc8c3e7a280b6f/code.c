#include <stdio.h>

int main() {
    int n, i;
    
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sorted = 1; 
    for(i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            sorted = 0;  
            break;
        }
    }
    if(sorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }
    return 0;
}

