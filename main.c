#include <stdio.h>

int countSequences(int n) {
    if (n == 1) {
        return 2; // дві можливі послідовності: 0 і 1
    }
    if (n == 2) {
        return 3; // три можливі послідовності: 00, 01, 10
    }
    if (n == 3) {
        return 5; // п'ять можливих послідовностей: 000, 001, 010, 100, 101
    }


    return countSequences(n - 1) + countSequences(n - 2) + countSequences(n - 3);
}

int main() {
    int n;

    printf("Enter the length of sequences (n): ");
    scanf("%d", &n);

    int sequenceCount = countSequences(n) % 12345;

    printf("Number of sequences: %d\n", sequenceCount);

    return 0;
}
