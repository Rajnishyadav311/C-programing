#include<stdio.h>
#include<string.h>
int main(){
    typedef struct criketer{
        char name [20];
        int age ;
        int noOFmatch;
        float avg;
    } criketer;
    criketer arr[2];
    for (int i = 0; i <2; i++)
    {
        printf("Enter the player name: ");
        scanf("%s" ,arr[i].name);
        printf("Enter the age of player : ");
        scanf ("%d" ,&arr[i].age);
        printf("Enter the play number of match by player ");
        scanf("%d" ,&arr[i].noOFmatch);
        printf("Enter the average of player : ");
        scanf("%f" ,&arr[i].avg);
        printf("Start second player details :\n");
        printf("\n");
    }   
    
    for (int i = 0; i <2; i++)
    {
        printf("NAME : %s\n" ,arr[i].name);
        printf(" AGE : %d\n" ,arr[i].age);
        printf(" NOoFMATCHES :%d\n" ,arr[i].noOFmatch);
        printf("AVERAGE :%f\n" ,arr[i].avg);
        printf("Now Satart second player detail \n");
        printf("\n");
    }
    
}