#include<stdio.h>
void reference(int *x,int *y){
 int temp=*x;
 *x=*y;
 *y=temp;
 printf("Value in function:%d,%d",*x,*y);
}
void main(){
 int a,b;
 scanf("%d %d",&a,&b);
 reference(&a,&b);
 printf("\nValue in main:%d,%d",a,b);
}
