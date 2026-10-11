#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d" ,&n);
    int num[n];
    int min = INT_MAX;
    for (int i = 0; i <n; i++)
    {
        printf("Enter the %d number " ,i+1);
        scanf("%d" ,&num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (min>num[i])
        {
            min = num[i];
        }
        
    }
    printf("%d" ,min);
}