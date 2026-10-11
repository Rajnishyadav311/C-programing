#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of row : ");
    scanf("%d" ,&n);
    int m;
    printf("Enter the number of column : ");
    scanf("%d" ,&m);
    int arr[n][m];
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m ; j++)
        {
            scanf("%d" ,&arr[i][j]);
        }
        
    }
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            printf("%d" ,arr[i][j]);
        }
        
    }
    int sum = 0;
    for (int i = 0; i <n; i++)
    {
        for (int  j = 0; j <m; j++)
        {
            sum = arr[i][j]+sum;
        }
        
    }
    printf("The sum of number : %d" ,sum);
}