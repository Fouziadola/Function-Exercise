#include<stdio.h>
int function(int x){
 int sum=0;
 int num;
 for(int i=0;i<x;i++){
    scanf("%d",&num);
    sum+=num;
 }
 printf("Sum in function:%d\n",sum);
 return sum;
}
int main(){
 int n;
 printf("Enter n number:");
 scanf("%d",&n);
 int sum= function(n);
 printf("Sum in main:%d",sum);
 return 0;
}
