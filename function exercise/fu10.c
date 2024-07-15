#include<stdio.h>
void sort(int a,int x[]){
for(int i=0;i<a-1;i++){
    for(int j=i+1;j<a;j++){
        if(x[i]>x[j]){
           int  temp=x[i];
           x[i]=x[j];
           x[j]=temp;
        }
    }
}
for(int i=0;i<a;i++){
printf("%d ",x[i]);
 }

}

void main(){
    int n;
    scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
 }
 sort(n,a);
 return 0;
}

