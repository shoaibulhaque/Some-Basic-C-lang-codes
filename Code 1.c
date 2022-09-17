#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt for value x
    float x = get_float("X: ");
    // Prompt for value y
    float y = get_float("Y: ");
    // Perform division
    float z = x/y;
    printf("division is: %.2f\n",z);
}