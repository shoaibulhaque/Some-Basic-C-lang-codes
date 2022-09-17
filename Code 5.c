#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float amount = get_float("Enter float: ");
    int pennies = round(amount * 100);
    printf("Pennies: %i\n",pennies);
}