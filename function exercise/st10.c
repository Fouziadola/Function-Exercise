#include<stdio.h>
int main(){

char a[100];
char b[100];

printf("enter string 1: ");
gets(a);

printf("enter string 2: ");
gets(b);

int lenth1=0;

while(a[lenth1]!='\0'){

    lenth1++;
}
int i,j;

for(i=lenth1,j=0;b[j]!='\0';i++,j++){

    a[i]=b[j];
}

a[i]='\0';

printf("Final string: %s",a);


}
