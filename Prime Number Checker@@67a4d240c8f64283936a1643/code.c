#include<stdio.h>
int isPrime()
{
    int num,x=0;
    for(int i = 2;i<num;i++)
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