#include <stdio.h>
#include<ctype.h>
int main() {
    char a,b;
    scanf("%c",&a);
    b = toupper(a);
    if(a != b)
    {
        printf("Uppercase");
    }
    else if(a == b)
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an alphabet");
    }
    return 0;
}