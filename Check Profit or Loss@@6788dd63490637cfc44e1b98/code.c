#include <stdio.h>
int main() {
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    if(cp == sp)
    {
        printf("No Profit No Loss");
    }
    else if((sp > cp))
    {
        printf("Profit");
    }
    else{
        printf("Loss");
    }
    return 0;
}