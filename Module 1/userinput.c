#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two integers: ");
    printf(("\n")); // add a newline for better formatting
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("The sum is %d\n", sum);
    return 0;
}