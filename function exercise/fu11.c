#include<stdio.h>
void isprime(int n){
 int ohey=0;
 for(int i=2;i<=n/2;i++){
    if(n%i==0){
        ohey=1;
    }
 }
 if(ohey==1){
    printf("prime");
 }
 else{
    printf("not prime");
 }
}
void main(){
 int x;
 printf("Enter a number:");
 scanf("%d",&x);
 isprime(x);
}
