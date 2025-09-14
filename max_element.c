#include <stdio.h>  // Include standard input/output header

int main() {
    // Define and initialize the array
    int arr[] = {12, 45, 8, 21, 33};

    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Assume the first element is the maximum
    int max = arr[0];

    // Loop through the rest of the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if current element is greater
        }
    }

    // Print the maximum element
    printf("Maximum element is: %d\n", max);

    return 0;  // End of program
}