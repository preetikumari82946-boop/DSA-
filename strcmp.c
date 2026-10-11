#include<stdio.h>
#include<string.h>

int main(){
    char st[6]="RAM";
    printf("%s",st);

    char st1[6]="KUMAR";
    int c;
    c=strcmp(st,st1);
    printf("%d",c);

    //if(c==0)
    //printf("same");

    //else if(c>0)
    //printf("st1");

    //else
    //printf("st");


return 0;
}