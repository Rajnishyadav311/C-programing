#include<stdio.h>
int factorial(int x){
    if(x==0)
    return 1;
    else
    return x*factorial(x-1);
}
int main(){
    int n;
    printf("Ente rhe number : ");
    scanf("%d" ,&n);
     int fact = factorial(n);
    printf("%d" ,fact );
}