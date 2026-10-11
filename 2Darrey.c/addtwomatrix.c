#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of row  : ");
    scanf("%d" ,&n);
    int m;
    printf("enter the number of column :  ");
    scanf("%d" ,&m);
    int arr[n][m];
    int brr[n][m];
    int res[n][m];
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            scanf("%d  " ,&arr[i][j]);
        }
        
    }
    printf("\n");
     for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            scanf("%d  " ,&brr[i][j]);
        }
      printf("\n");  
    } 
     for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
          res[i][j] = arr[i][j]+brr[i][j];
          printf("%d " ,res[i][j]);
          printf("\n");
        }
        printf("\n");
    }
}