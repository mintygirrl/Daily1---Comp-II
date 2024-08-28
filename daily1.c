#include <stdio.h>
#include <string.h>
char* reverse(char* string);

int main(int argc, char* argv[])
{
    char word[] = "Happy Birthday!";

    printf("%s\n", word);
    reverse(word);
    printf("%s\n", word);
    printf("%s\n", reverse(word));
    printf("%s\n", word);
    return 0;
}

char* reverse(char* string)
{
    int length = 0;
    while (string[length] != '\0')
    {
        ++length;
    }

    for (int i = 0; i < length / 2; i++)
    {
        char temp = string[i];
        string[i] = string[length - i - 1];
        string[length - i - 1] = temp;
    }
    return string;
}