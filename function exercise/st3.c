#include<stdio.h>
void main(){
char x;
scanf("%c",&x);
if(x>='0'&& '9'>=x){
    int  numericalrepresentation= x-'0';
    printf("%d",numericalrepresentation);
}
else{
    printf("Wrong input");
}
}
