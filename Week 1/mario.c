#include <cs50.h>
#include <stdio.h>

void build(int);
void checkHeight(int);

int main(void)
{
    int height = get_int("Height of pyramid?\n");
    checkHeight(height);
}
void checkHeight(num)
{
    if (num < 1 || num > 8)
    {
        printf("Enter value between 1-8!\n");
        main();
    }
    else
    {
        build(num);
    }
}

void build(int hashes)
{
    for (int i = 0; i < hashes; i++)
    {
        for (int k = hashes; k > (i + 1); k--)
        {
            printf(" ");
        }
        for (int j = 0; j < (i + 1); j++)
        {
            printf("#");
        }
        printf("  ");
        for (int space = 0; space < (i + 1); space++)
        {
            printf("#");
        }
        printf("\n");
    }
}