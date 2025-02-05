#include <stdio.h>
int main() {
    int y;
    scanf("%d",&y);
    if(n % 4 == 0 && n % 100 != 0)
    {
        printf("Leap Year");
    }
    else if(n % 4 == 0 && n % 400 == 0)
    {
        printf("Not a Leap Year");
    }
    else
    {
        printf("Not a leap Year");
    }
    return 0;
}