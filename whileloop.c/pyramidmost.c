#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d" ,&n);
    int nsp = 1;
    int nst = 3;
    for (int i = 1; i <=2*n+1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i <=n; i++)
    {
        for (int k = 1; k <=nst; k++)
        {
            printf("*");
        }
        for (int j = 1; j <=nsp; j++)
        {
            printf(" ");
        }
        for (int l = 1; l <=nst; l++)
        {
            printf("*");
        }
        nsp = nsp+2;
        nst--;
        printf("\n");
    }
    
}