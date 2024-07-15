#include<stdio.h>
void main(){
 char a[100],b[100];
 gets(a);
 int length=0;
 for(int i=0;a[i]!='\0';i++){
    length++;
 }
 for(int i=0;i<length;i++){
    b[i]=a[i];
 }
 puts(b);
}
