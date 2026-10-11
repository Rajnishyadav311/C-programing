#include<stdio.h>
int main (){
    int n ;
    printf("Enter the number ");
    scanf("%d" ,&n); 
    int m ;
    printf("Enter the number of comlumn ");
    scanf("%d" ,&m);
    for(int i = 1; i <=n; i++){
       for(int j = 1;  j<=i; j++)
    {
        printf("*");
    }
   printf("\n") ;
}
}