#include <stdio.h>

int fact_loop(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int fact_rec(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * fact_rec(n - 1);
}
int main() {
    int num;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial doesn't exist for negative numbers.\n");
    } else {
        printf("Without recursion: %d\n", fact_loop(num));
        printf("With recursion: %d\n", fact_rec(num));
    }

    return 0;
}

