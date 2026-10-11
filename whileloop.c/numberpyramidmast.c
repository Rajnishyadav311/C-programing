#include<stdio.h>
int main(){
    int n ; 
    printf("Enter the number ");
    scanf("%d" ,&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n-1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=i; k++)
        {
            printf("%d" ,k);
        }
        int a = i-1;
        for (int r = 1; r <=i-1; r++)
        {
            printf("%d" ,a);
            a--;
        }
        printf("\n");
        
    }
    
}