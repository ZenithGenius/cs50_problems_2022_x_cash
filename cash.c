#include <cs50.h>
#include <stdio.h>

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

int get_cents()
{
    // Prompt the user for a number of cents that is not negative and returns it
    int number;
    do
    {
        number = get_int("Enter the number of cents: ");
    }
    while (number < -1);
    return number;
}

int calculate_quarters(int cents)
{
    // Gives the number of quaters present
    int counter = 0;
    while (cents >= 25)
    {
        cents -= 25;
        counter++;
    }
    return counter;
}

int calculate_dimes(int cents)
{
    // Gives the number of dimes present
    int counter = 0;
    while (cents >= 10)
    {
        cents -= 10;
        counter++;
    }
    return counter;
}

int calculate_nickels(int cents)
{
    // Gives the number of nickel present
    int counter = 0;
    while (cents >= 5)
    {
        cents -= 5;
        counter++;
    }
    return counter;
}

int calculate_pennies(int cents)
{
    // Gives the number of pennies
    int counter = 0;
    while (cents >= 1)
    {
        cents -= 1;
        counter++;
    }
    return counter;
}
