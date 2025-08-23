#include <stdio.h>

int main()
{
    int a, b, c;

    // assigning the integers their names
    printf("the first number is: ");
    scanf("%d", &a);
    printf("the second number is: ");
    scanf("%d", &b);
    // scanf takes input and &var assigns data to that specific var
    c = a + b;
    // c outputs the total
    printf("\nsummation of the given two number is %d",c);
}