#include<stdio.h>
int main(){
    int num[5] = {1, 5 , 7 ,8 ,4};
    int x = 12;
    int totalpair = 0;
    for (int i = 0; i <5; i++)
    {
       for (int j = i+1; j <5; j++)
       {
        if (num[i]+num[j]==x)
        {
            totalpair++;
        }
        
       }
       
    }
    printf("%d" ,totalpair);
    return 0;
}