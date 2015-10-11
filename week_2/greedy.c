#include <stdio.h>
#include <math.h>
#include <cs50.h>

/**
 * greedy.c
 *
 * Bagdat Bimaganbetov
 * bagdat.bimaganbetov@gmail.com
 *
 * I have a little problem with English. Sorry.
 */

float GetInput(void);

int GetCoeff(int *value, int c);

int main(void)
{
    // Getting amount for change
    float amount = GetInput();

    int cents = round(amount * 100);
    int total = 0;

    total += GetCoeff(&cents, 25);
    total += GetCoeff(&cents, 10);
    total += GetCoeff(&cents, 5);
    
    // Left cents and pennies
    total += cents;

    printf("%d\n", total);

    return 0;
}

// Getting float value from user.
float GetInput(void)
{
    const float MIN_VALUE = 0.0;
    float amount;

    printf("O hai! How much change is owed?\n");

    while(true) {
        amount = GetFloat();
        if (amount >= MIN_VALUE)
        {
            break;
        }
        else if(amount < MIN_VALUE)
        {
            printf("How much change is owed?\n");
        }
        else
        {
            printf("Retry: ");
        }
    }
    return amount;
}

int GetCoeff(int *value, int c)
{
    int result;

    result = (*value) / c;
    (*value) = (*value) % c;

    return result;
}
