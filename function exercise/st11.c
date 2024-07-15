#include<stdio.h>
void main(){
 char a[100],b[100];
 gets(a);
 gets(b);
 int length1=0;                           
 for(int i=0;a[i]!='\0';i++){
    length1++;
 }
 int length2=0;
 for(int i=0;b[i]!='\0';i++){
    length2++;
 }
 int count=0;
 for(int i=0;i<=length1-length2;i++){
    for(int j=0;j<length2;j++){
        if(a[i+j]!=b[j]){
            break;
        }
        if(j==length2-1){                          
            count=1;
        }
    }
 }
 if(count == 1){
    printf("Substring");
 }
 else{
    printf("Not substring");
 }
}
