#include<stdio.h>
int main(){
char a[100];
printf("enter a string:");
gets(a);

int lenth=0;

for(int i=0;a[i]!='\0';i++){
    lenth++;
}

int palindrom=1;
for(int i=0;i<lenth/2;i++){

    if(a[i]!=a[lenth-i-1]){
        palindrom=0;
        break;
    }
}
if(palindrom==1){
    printf("palindrom");
} if (palindrom==0)
{
    printf("not palindrom");}
}
