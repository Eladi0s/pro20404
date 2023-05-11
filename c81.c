#include<stdio.h>
int main(){
    char text;
    text= getchar();
    printf("Input1 : %c\n", text);
    while(getchar()!='\n');
    text= getchar();
    printf("Input2 : %c\n", text);
    return 0;
}