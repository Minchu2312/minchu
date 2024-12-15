#include <stdio.h>

int main() {
    int arr[] = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    int counts[9] = {0}; // Array to store counts for 1 to 9
    
    int length = sizeof(arr) / sizeof(arr[0]);

    // Count how many numbers are divisible by 1 to 9
    for (int i = 0; i < length; i++) {
        for (int j = 1; j <= 9; j++) {
            if (arr[i] % j == 0) {
                counts[j - 1]++; // Increment the count for j
            }
        }
    }

    // Output the counts in the format
    printf("{");
    for (int i = 0; i < 9; i++) {
        printf("%d: %d", i + 1, counts[i]);
        if (i < 8) {
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}
