#include <stdio.h>

// Function to compute and print factors of a given number
void printFactors(int number) {
    printf("Factors of %d are: ", number);

    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int num;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function to compute and print factors
    printFactors(num);

    return 0;
}