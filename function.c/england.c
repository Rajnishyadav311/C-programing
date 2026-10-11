#include<stdio.h>
void england(){
    printf("You are in england \n");
    return;
}
void austrelia(){
    printf("You are in austrelia \n");
    england();
    return;
}
void india (){
    printf("You are in india\n ");
    austrelia();
    return;
}
int main (){
    india();
    return 0;
}