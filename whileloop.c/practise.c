#include<stdio.h>
int main(){
    int a;
    printf("Enter the first digit : ");
    scanf("%d" ,&a);
    int b;
    printf("Enter the second digit : ");
    scanf("%d" ,&b);
    int c;
    printf("Enter the third digit : ");
    scanf("%d" ,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("A is greatest of them : ");
        }
        else
        {
            printf("C is greatest of them : ");
        }
        
        
    }
    else
    {
        if (b>c)
        {
            printf("B is greatest of them : ");
        }
        else
        {
            printf("C is gratest of them : ");
        }
        
    }
    return 0;
}