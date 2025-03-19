#include<stdio.h>
int isPrime(int num)
{
    int x=0;
    if(num == 1 || num == 0)
    {
        return 0;
    }
    else
    {
    for(int i = 2;i<=num / 2;i++)
    {
        if(num%i==0)
        {
            x+=1;
        }
    }
    if(x==0){
        return 1;
    }
    else{
        return 0;
    }
    }
}