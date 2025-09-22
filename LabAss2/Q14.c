#include <stdio.h>

int main() {
    int num, n;
    printf("Enter number and position n: ");
    scanf("%d %d", &num, &n);

    num = num < 0 ? -num : num;
    int digit = 0;

    for(int i = 1; i <= n; i++) {
        digit = num % 10;
        num /= 10;
    }

    printf("The %d-th digit is: %d\n", n, digit);
    return 0;
}
