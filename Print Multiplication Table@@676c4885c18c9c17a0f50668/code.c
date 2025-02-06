#include<stdio.h>
int main(){
   int a,t=1;
   scanf("%d",&a);
   for(int i = 1;i <= 10;i++)
   {
    t = a*i;
    printf("%d x %d = %d\n",a,i,t);
   }
    return (0);
}