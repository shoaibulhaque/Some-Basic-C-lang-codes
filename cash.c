#include <cs50.h>
#include <stdio.h>

// Using functions on top for order requirement
int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}
//Function to get cents
int get_cents(void)
{
    // Using loop for prompting
    while (true)
    {
        int user_input = get_int("Change owed: ");

        // Checking if the number is positive or not
        if (user_input > 0)
        {
            //Returning user_input
            return user_input;
            break;
        }
    }

}
//Function to calculate quarters
int calculate_quarters(int cents)
{
    // Initializing number of quarters
    int no_of_quarters = 0;

    //using while loop
    while (cents >= 25)
    {
        cents = cents - 25;
        no_of_quarters++;
    }
    return no_of_quarters;
}
//Function to calculate dimes
int calculate_dimes(int cents)
{
    // Initializing number of dimes
    int no_of_dimes = 0;

    //using while loop
    while (cents >= 10)
    {
        cents = cents - 10;
        no_of_dimes++;
    }
    return no_of_dimes;

}
//Function to calculate nickels
int calculate_nickels(int cents)
{
    // Initializing number of nickels
    int no_of_nickels = 0;

    //using while loop
    while (cents >= 5)
    {
        cents = cents - 5;
        no_of_nickels++;
    }
    return no_of_nickels;

}
//Function to calculate pennies
int calculate_pennies(int cents)
{
    // Initializing number of pennies
    int no_of_pennies = 0;

    //using while loop
    while (cents >= 1)
    {
        cents = cents - 1;
        no_of_pennies++;
    }
    return no_of_pennies;
}
