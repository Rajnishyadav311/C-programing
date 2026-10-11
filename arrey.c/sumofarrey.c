#include<stdio.h>
int main(){
    int a[3] ;
    int  sum = 0;
    for (int i = 0; i <=2; i++)
    {
        printf("\nEnter the number %d " ,i+1);
        scanf(" %d" ,&a[i]);
    }
    for (int  i = 0; i <=2; i++)
    {
        sum = sum + a[i];
    }
    printf("%d " ,sum );
    return 0;
    
}