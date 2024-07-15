#include<stdio.h>
void main(){
 char a[100],b[100];
 gets(a);
 gets(b);
 int count=0;
 for(int i=0;a[i]!='\0'||b[i]!='\0';i++){
    if(a[i]<b[i]){
      puts(a);
      count++;
      break;
    }
    else{
        puts(b);
        count++;
        break;
    }

 }
 if(count==0){
    printf("Equal");
 }
}
