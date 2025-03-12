#include <stdio.h>

int main() {
    int number, n, result;
    scanf("%d%d", &number, &n);
    
    result = number ^ (1 << n);  // No (n - 1), using 0-based bit position
    printf("%d\n", result);

    return 0;
}
