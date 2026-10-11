#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array ");
    scanf("%d" ,&n);
    int num[n];
    int evensum , oddsum;
    for (int i = 0; i <=n; i++)
    {
        printf("Enter %d number : " ,i+1);
        scanf("%d" ,&num[i]);

    }
    for (int i = 0; i <=n; i++)
    {
        if (i%2!=0)
        {
            evensum = num[i];
        }
        else
        oddsum = num[i];
    }
    
    printf("%d" ,(evensum-oddsum));
}