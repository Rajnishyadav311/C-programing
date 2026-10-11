#include<stdio.h>
int main(){
    int arr[8]={1,2,3,2,3,4,3,2,};
    int x = 5;
    int totalpair = 0;
    for (int i = 0; i <8; i++)
    {
        for (int j = i+1; j <8; j++)
        {
            for (int k = j+1; k <8; k++)
            {
                if (arr[i]+arr[j]+arr[k] == x)
                {
                    totalpair++;
                }
                
            }
            
        }
        
    }
    printf("%d" ,totalpair);
}