#include <stdio.h>

int main() {
    int arr[4][2];   // 4 rows, 2 columns (roll , marks)

    printf("Enter Roll Number and Marks of 4 students:\n");

    for (int i = 0; i < 4; i++) {
        printf("Student %d Roll: ", i + 1);
        scanf("%d", &arr[i][0]);

        printf("Student %d Marks: ", i + 1);
        scanf("%d", &arr[i][1]);

        printf("\n");
    }

    printf("\nStored Matrix (Roll   Marks):\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\t%d\n", arr[i][0], arr[i][1]);
    }

    return 0;
}