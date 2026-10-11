#include<stdio.h>
void greeting(int n){
    for (int  i = 0; i <=n; i++)
    {
        printf("Good morning \n");
    }
    return ;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d" ,&n);
    greeting(n);
    return 0;
}