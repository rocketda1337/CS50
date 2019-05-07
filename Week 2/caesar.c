#include <stdio.h>

#include <cs50.h>

#include <string.h>

#include <ctype.h>

int main(int argc, string argv[])
{
    string msg = argv[2];
    if (argc <= 1)
    {
        printf("enter key value!\n");
        return 1;
    }
    if (argc == 2)
    {
        msg = get_string("message to cipher:\n");
    }
    else if (argc != 3)
    {
        printf("Usage ./caesar <key>\n");
        printf("OPTINAL: 2nd argument <message>\n");
        printf("Key must be 1 or more\n");
        return 1;
    }
    int key = atoi(argv[1]);
    printf("ciphertext: ");
    for (int i = 0, n = strlen(msg); i < n; i++)
    {
        if
            islower(msg[i])
                printf("%c", (((msg[i] + key) - 97) % 26) + 97);
        else if
            isupper(msg[i])
                printf("%c", (((msg[i] + key) - 65) % 26) + 65);
        else
            printf("%c", msg[i]);
    }
    printf("\n");
}
