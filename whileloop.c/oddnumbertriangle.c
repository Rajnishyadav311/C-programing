#include<stdio.h>
int main (){
    int n ;
    printf("Enter the number ");
    scanf("%d" ,&n);
    //int a = n; 
    for(int i = 1; i <=n; i++){
       for(int j = 1;  j<=2*n-1; j=j+2)
    {
        printf("%d" ,j);
    }
   // a--;
   printf("\n") ;
}
}