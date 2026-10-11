#include<stdio.h>
int main (){
    int arr [5] = {1,4,2,8,19,5,12};
    int max = -1;
    for (int i=0; i <=4; i++)
    {
        if (max<arr[i] )
        {
            max = arr[i];
        }

        
    }
    printf("%d" ,max);
}