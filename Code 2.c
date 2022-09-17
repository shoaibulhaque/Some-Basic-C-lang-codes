#include <stdio.h>
#include <cs50.h>

float regular(float price,int percenttage);

int main(void)
{
    float price = get_float("Enter price: ");
    int percentoff = get_int("Enter percent: ");
    float sale = regular(price,percentoff);
    printf("Sale price: %.2f\n",sale);
}

float regular(float price,int percenttage)
{
    return price * (100-percenttage)/100;
}