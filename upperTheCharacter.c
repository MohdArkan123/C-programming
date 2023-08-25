#include<stdio.h>
#include<string.h>
int main(){
    printf("enter the string");
    char s[1000];
    int n;
    gets(s);
    printf("enter the position");
    scanf("%d",&n);
    s[n-1]=s[n-1]-32;
    puts(s);
    return 0;
}   