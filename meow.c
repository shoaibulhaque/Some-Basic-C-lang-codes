#include <stdio.h>
#include <cs50.h>

void meow(void);

int main(void)
{
    meow();
}

void meow(void)
{
    int number = get_int("Enter a number: ");
    for (int i = 0;i < number;i++)
    printf("Meow\n");
}