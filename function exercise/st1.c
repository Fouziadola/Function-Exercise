#include<stdio.h>
void  main(){
    char upper,lower;
    printf("Enter an uppercase letter:");
    scanf("%c",&upper);
    if(upper>='A' && upper<='Z'){
        lower= upper+('a'-'A');
        printf("%c",lower);
    }
    else{
      printf("Wrong input");
    }
}
