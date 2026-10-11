#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d" ,&n);
    int sum;
    sum = 0;
    int lastdigit ;
    lastdigit = 0;
    while(n!=0)
    {
        lastdigit = n%10;
        sum = sum + lastdigit;
        n = n/10;
    }
    if(n%2==0){
        printf("The digit of number : %d" ,sum);
    }
}