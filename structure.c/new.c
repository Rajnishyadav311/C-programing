#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer
    {
        char name[100];
        int age;
        int noOfmatches;
        int avg;

      }cricketer;
      cricketer arr[2];
      for (int i = 1; i <=2; i++)
      {
        printf("Enter the name of cricketer : ");
        scanf("%s" ,arr[i].name);
        printf("Enter the age of player : ");
        scanf("%d" ,&arr[i].age);
        printf("Enter noOfmatches played by the player : ");
        scanf("%d" ,&arr[i].noOfmatches);
        printf("Enter the avg of player : ");
        scanf("%d" ,&arr[i].avg);
        printf("\n");
        printf("NoW START THE SECOND PLAYER DETAILS : \n");
        printf("\n");
      }
      for (int i = 1; i <=2; i++)
      {
        printf("NAME : %s" ,arr[i].name);
        printf("AGE : %d" ,arr[i].age);
        printf("NOOFMATHCES : %d" ,arr[i].noOfmatches);
        printf("AVERAGE : %d" ,arr[i].avg);
        printf("\n");
        printf("NoW START THE SECOND PLAYER DETAILS : \n");
        printf("\n");

      }
      
    
    
}