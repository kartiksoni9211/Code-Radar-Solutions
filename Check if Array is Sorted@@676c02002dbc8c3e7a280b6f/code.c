#include <stdio.h>

int main() {
    int arr[] = {2, 3, 9, 7,2};
    int i; 

    for (i = 0; i < sizeof(arr) / sizeof(arr[0])-1; i++) {  
        if(arr[i] <= arr[i+1]){
            printf("sorreted\n");
            // printf("%d ",sizeof(arr) / sizeof(arr[0]));
        }
        else{
            printf("not sorreted\n");
        }
    }
    return 0;
}