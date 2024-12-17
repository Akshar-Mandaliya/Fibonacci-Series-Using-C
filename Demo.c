#include <stdio.h>

int main() {
    int terms, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= terms; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
