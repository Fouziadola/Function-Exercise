#include<stdio.h>
void swap(int a,int b){
 int temp=a;
 a=b;
 b=temp;
 printf("value in function:%d,%d",a,b);
}
void main(){
 int x,y;
 printf("Enter two number:");
 scanf("%d %d",&x,&y);
 swap(x,y);
 printf("\nValue in main:%d,%d",x,y);
}
