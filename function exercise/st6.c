#include<stdio.h>
void main(){
char ch[100],ch2[100];
gets(ch);
for(int i=0;ch[i]!='\0';i++){
    if(ch[i]>='A'&& ch[i]<='Z'){
        ch2[i]=ch[i]+32;
    }
    else if(ch[i]>='a'&& ch[i]<='z') {
        ch2[i]=ch[i]-32;
    }
    else{
        ch2[i]=ch[i];
    }
}

puts(ch2);

}
