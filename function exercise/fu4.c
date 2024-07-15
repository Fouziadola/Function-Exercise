#include<stdio.h>
int  function(int x,int b[x]){
 int sum=0;
 for(int i=0;i<x;i++){
    sum+=b[i];
 }
 printf("sum in function:%d",sum);
return sum;
}int main(){
 int n;
 printf("Enter a number:");
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++){
 scanf("%d",&a[i]);}
 int d=function(n,a);
 printf("\nsum in main:%d",d);
}
