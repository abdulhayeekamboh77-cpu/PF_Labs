#include <stdio.h>

int main()
{
    int Age;
    
    printf("\nEnter Age: ");
    scanf("%d", &Age);
    printf("\nAge: %d", Age);
    
    float Height;
    printf("\nEnter Your Height: ");
    scanf("%f", &Height);
    printf("\nHeight: %f", Height);
    
    char Grade[5];
    
    printf("\nEnter Your Grade: ");
    scanf("%4s", &Grade);
    printf("\nGrade: %s", Grade);
    
    
    
    return 0;
}
