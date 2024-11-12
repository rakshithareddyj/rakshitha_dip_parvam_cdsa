#include<stdio.h>
int main(){
char str[]="ROCKY BHAI,ROCKING STAR:";
int i=0;

while ( str[i] !='\0'){
    if(str[i] >='A' && str[i] <='Z'){
        str[i] = str[i] -'A' + 'a';
    }
    i++;
}
printf("Lowercase string0 :%s\n", str);
return 0;



}