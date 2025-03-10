#include<stdio.h>
int isPrime(){
    int a,x=0;
    for(int i = 2;i<a;i++){
        if(a%i==0){
            x+=1;
        }
    }
    if(x==0){
        printf("1");
    }
    else{
        printf("0");
    }
}