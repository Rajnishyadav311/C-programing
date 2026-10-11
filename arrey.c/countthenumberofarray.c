#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d" ,&n);
    int num[n];
    int x = 12;
    int count = 0;
    for (int i = 0; i <n; i++)
    {
        printf("Enter %d number : ", i+1);
        scanf("%d" ,&num[i]);
    }
    for (int i = 0; i <n; i++)
    {
        if (num[i]>x)
        {
            count = (count + 1);
        }
        
    }
    printf("%d" ,count);
}