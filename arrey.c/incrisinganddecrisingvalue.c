#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of arrey : " );
    scanf("%d" ,&n);
    int num[n];

    for (int i = 0; i <n ; i++)
    {
        printf("Enter the %d number " ,i+1);
        scanf("%d" ,&num[i]);

    }
    for (int i = 0; i <n ; i++)
    {
        if (i%2!=0)
        {
            num[i] = num[i]*2;
        }
        else
        num[i] = num[i] + 10;
        printf("%d  " ,num[i]);
    }
    
}