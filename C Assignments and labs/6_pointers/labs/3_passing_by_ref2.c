#include <stdio.h>

void add(int *ptr1, int *ptr2)
{
    printf("The result of summation is: %d\n", (*ptr1 + *ptr2));
    return;
}

void sub(int *ptr1, int *ptr2)
{
    printf("The result of subtraction is: %d\n", (*ptr1 - *ptr2));
    return;
}

int main(void)
{
    int x;
    int y;

    printf("Please enter value 1: ");
    scanf("%d", &x);

    printf("Please enter value 2: ");
    scanf("%d", &y);

    add(&x, &y);
    sub(&x, &y);
    
    return 0;
}