#include<stdio.h>
void multiplies(int x){
 int a[x];
 printf("Enter %d number:",x);
 for(int i=0;i<x;i++){
    scanf("%d",&a[i]);
 }

 for(int i=0;i<x;i++){
    printf("%d ",2*a[i]);
 }
}
void main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
multiplies(n);

}
