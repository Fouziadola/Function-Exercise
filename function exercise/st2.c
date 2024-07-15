#include<stdio.h>
void main(){
 char letter, toggle;
 scanf("%c",&letter);
 if(letter>='A' && letter<='Z' || letter>='a'&& letter<='z'){
    if(letter>='A' && letter<='Z'){
        toggle=letter+('a'-'A');
    }
    else{
        toggle=letter-('a'-'A');
    }
    printf("%c",toggle);
 }
 else{
    printf("Wrong input");
 }

}
