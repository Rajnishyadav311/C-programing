#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of arrey : ");
    scanf("%d" ,&n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d" ,&arr[i]);

    }
    int low , high , mid , flags = 0;
    low = 0;
    high = n-1;
    int k;
    printf("Enter the searching element in the arrey : ");
    scanf("%d" ,&k);
    while (low<=high)
    {
        mid = (low + high)/2;
        if (k==arr[mid])
        {
            flags = 1;
            break;
        }
        else if (k<arr[mid])
        {
            
        }
        
    }
    
}