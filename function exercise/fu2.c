#include<stdio.h>
void function(char x){
printf("value receive from main:%c\n",x);

 }
int main(){
 char input1='3';
 char input2='A';
 function(input1);
 function(input2);
 return 0;
}
