#include<stdio.h>
int main(){
    char str[]="HELLO THIS IS NIKHIL";
    for (int i = 0; i < sizeof(str); i++)
    {
        /* code */
        printf("%c",2-str[i]);
    }
    

}