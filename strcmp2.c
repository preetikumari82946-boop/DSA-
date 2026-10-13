#include<stdio.h>
#include<string.h>

int main(){
    char st[6]="RAM";
    printf("%s",st);

    char st1[6]="KUMAR";
    
    strcmp(st1,st);
    printf("%s",st1);

    return 0;
}