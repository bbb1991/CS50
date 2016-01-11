#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include "mario.h"
/**
 * mario.c
 *
 * Bagdat Bimaganbetov
 * bagdat.bimaganbetov@gmail.com
 *
 * Program prints pyramid like in a game "Super Mario Bros".
 */
 
int main()
{
    int height = GetHeight();
    PrintPyramid(height);
}

// Getting height from user.
int GetHeight()
{
    // Max and min accept height
    const int MAX_HEIGHT = 23;
    const int MIN_HEIGHT = 0;
    
    int height = -1;
    printf("Height: ");
    
    while(true)
    {
        height = GetInt();
        if (height >= MIN_HEIGHT && height <= MAX_HEIGHT)
        {
            break;
        }
        printf("Retry: ");
    }
    
    return height;
}

// Printing pyramid to console.
void PrintPyramid(int height)
{
    int block = 2;
    char* line = (char *)malloc(height+2);
    
    for (int i = 0; i < height; i++)
    {
        strcpy(line, "");
        for (int j = 0; j < (height - block) + 1; j++)
        {
            strcat(line, " ");
        }
        
        for (int j = 0; j < block; j++)
        {
            strcat(line, "#");
        }
        printf("%s\n", line);
        block++;
    }
}
