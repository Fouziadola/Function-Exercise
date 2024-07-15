#include<stdio.h>
void even(int n){
int a[n];

for(int i=0;i<n;i++){
 scanf("%d",&a[i]);
 if(a[i]%2==0){
    printf("%d ",a[i]);
 }
}
}
void main(){
 int x;
 scanf("%d",&x);
 even(x);
}
