#include <stdio.h>

// Function to find the first and last peak
void findPeaks(int arr[], int n) {
    // Checking for first peak
    if (arr[0] > arr[1]) {
        printf("%d\n", arr[0]);
    }

    // Checking for last peak
    if (arr[n - 1] > arr[n - 2]) {
        printf("%d\n", arr[n - 1]);
    }

    // Check for any peaks in the middle of the array
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d\n", arr[i]);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);  // Reading the size of the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Reading the elements of the array
    }

    findPeaks(arr, n);  // Find and print the peaks

    return 0;
}
