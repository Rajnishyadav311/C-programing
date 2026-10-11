#include<stdio.h>
int leapyear(int x){
    if (x%400==0 || x%4==0 && x%100!=0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}
int main(){
    int n;
    printf("Enter the year : ");
    scanf("%d" ,&n);
    int result = leapyear(n);
    if (result==0)
    {
        printf("This is the leap year ");
    }
    else
    {
        printf("this is not leap year : ");
    }
    
    
}