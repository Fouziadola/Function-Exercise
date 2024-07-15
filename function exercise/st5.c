#include<stdio.h>
void main(){
 char a[100],b[100];
 gets(a);

 for(int i=0;a[i]!='\0';i++){
    if(a[i]>='A'&& a[i]<='Z'){
        b[i]=a[i]+('a'-'A');
    }
    else
    {
        b[i]=a[i];
    }
 }
 printf("%s",b);

}
