#include <stdio.h>

int main() {
    int number, n, result;
    scanf("%d", &number);
    scanf("%d", &n);
    result = number ^ (1 << (n - 1));
    printf("%d\n", result);

    return 0;
}
