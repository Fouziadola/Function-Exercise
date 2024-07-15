#include<stdio.h>
void main(){
 int num;
 scanf("%d",&num);
 generateprime(num);

}
void generateprime(int a){
for(int i=0;i<a;i++){
    isprime(i);
}
}
void isprime(int n){
int ohey=0;
 for(int i=2;i<n;i++){
    if(n%i==0){
        ohey=1;
    }
 }
 if(ohey==1){
    printf("%d",n);
 }

}
