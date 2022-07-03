#include<stdio.h>
int main() {
    int A; int B;
    printf("Enter A's age \n");
    scanf("%d", &A);
    printf("Enter B's age \n");
    scanf("%d", &B);
    if (A > B) {
        printf("A is greater than B \n");
    }
    else
    {
        printf("B is greater than A \n");
    }
    return 0;

}