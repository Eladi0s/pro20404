#include<stdio.h>
int main(){
    char string[30];
    fgets(string,30,stdin);
    printf("input1:cprograming\n",string);
    gets(string);
    printf("input2:is exciting",string);

return 0;
}
