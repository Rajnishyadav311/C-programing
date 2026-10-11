#include<stdio.h>
int reverse(int x){
     int rev = 0;
     while (x>0)
     {
          int ld = x%10;
          rev = rev+(ld*ld *ld);
          x = x/10;

     }
     return rev ;
}
int main(){
     int n;
     printf("Enter the number : ");
     scanf("%d" ,&n);
     int r = reverse(n);
     printf("%d\n" ,r);
    