#include <stdio.h>
void main(){
 char string[1000];
 int length=0;
 printf("Enter a string:");
 char c;
while((c=getchar())!='\n' && length<sizeof(string)-1){
    string[length++]=c;
}
string[length]='\0';
printf("%d",length);
}
