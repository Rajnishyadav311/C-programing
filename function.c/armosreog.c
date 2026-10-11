#include<stdio.h>
int reverse(int x){
    int rem , sum = 0;
    while (x>0)
    {
        rem = x%10;
        sum = sum + (rem*rem*rem );
        x = x/10;
    }
    return sum ;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d" ,&n);
    int result = reverse(n);
    if (result==n)
    {
        printf("%d number is armostrong number : " ,n);

    }
    else{
        printf("%d number is not armostrong number : " ,n);
    }

}