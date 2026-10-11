#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d" ,&n);
    int digit = 0;
    int sum = 0;
    while(n>0)
    {
        digit = n%10;
        if(digit%2==0){
            sum = sum + digit;
        }
        n = n/10;
    }
    printf("The sum of given even number %d" ,sum);
    
}