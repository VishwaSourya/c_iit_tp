#include <stdio.h>

void printPascalsTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int value = 1; // The first value in each row is always 1

        // Print spaces for alignment
        for (int space = 0; space < n - i - 1; space++) {
            printf(" ");
        }

        // Print the values in the row
        for (int j = 0; j <= i; j++) {
            printf("%d ", value);
            value = value * (i - j) / (j + 1); // Calculate the next value using binomial coefficient
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Number of rows must be at least 1.\n");
        return 1;
    }

    printPascalsTriangle(n);

    return 0;
}
