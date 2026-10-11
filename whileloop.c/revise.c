#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d"  ,&n);
    int r ;
    r = 0;
    while (n>0)
    {

        r = r*10;
        r = r+(r%10);
         n = n/10;
       
    }
    printf("The rivise number %d" ,r);
    
}