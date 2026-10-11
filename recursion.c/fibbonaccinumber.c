#include<stdio.h>
int fibbo(int n){
    int ans1 = fibbo(n-1);
    int ans2 = fibbo(n-2);
    int ans = ans1+ans2;
    return ans;
}
int main(){
    int n ;
    printf("Enter the number : ");
    scanf("%d" ,&n);
    printf("%d" ,fibbo(n));
    return 0;
}