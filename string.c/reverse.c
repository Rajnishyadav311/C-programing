#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    printf("Enter the string : ");
    scanf("%s" ,ch);
    int len ;
    len = strlen(ch);

    for (int i =len-1; i>=0; i--)
    {
        printf("%c" ,ch[i]);
    }
    
}