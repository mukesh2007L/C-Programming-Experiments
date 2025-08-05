#include<stdio.h>
int main()
{
 int N;
 printf("Enter the number:");
 scanf("%d",&N);
 int sum=0;
 while(N!=0){
 sum=sum+N%10;
 N=N/10;
 }
printf("Sum is :%d",sum);
 return 0;
}