#include<stdio.h>
int main(){
    int marks[10] = {80,30,85,92,63,82,54,87,51,32};
    for (int i = 0; i <10; i++)
    {
        if (marks[i]<35)
        {
        printf("  %d" ,marks[i]);
        }         
        
        
    }
    return 0;
}