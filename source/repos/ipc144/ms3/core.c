

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Clear the standard input buffer
void clearInputBuffer(void)
{
    while (getchar() != '\n')
    {
        ; // Nothing
    }
}

void suspend(void)
{
    printf("<ENTER> to continue...");
    clearInputBuffer();
    putchar('\n');
}

// If an invalid value is entered, an error message would be displayed.
int inputInt(void)
{
    char character = ' ';
    int value;

    do {
        scanf("%d%c", &value, &character);

        if (character != '\n')
        {
            clearInputBuffer();
            printf("Error! Input a whole number: ");
        }
    } while (character != '\n');

    return value;
}

// Guarantees a positive integer value is entered and returned. If a zero or a negative value in entered, an error message would be displayed.
int inputIntPositive(void)
{
    char character = ' ';
    int value;

    do {
        scanf("%d%c", &value, &character);

        if (character != '\n')
        {
            clearInputBuffer();
            printf("Error! Input a number: ");
        }

        if (value <= 0)
        {
            printf("ERROR! Value must be > 0: ");
        }
    } while (value <= 0);

    return value;
}

// This function guarantees that an integer value is entered within the range and returned.
int inputIntRange(int lowerRange, int upperRange)
{
    char character = ' ';
    int value;

    do {
        scanf("%d%c", &value, &character);

        if (character != '\n')
        {
            clearInputBuffer();
            printf("Error! Input a whole number: ");
        }

        else if (!(value <= upperRange && value >= lowerRange))
        {
            printf("ERROR! Value must be between 1 and 28 inclusive: ");
        }
    } while (!(value <= upperRange && value >= lowerRange));

    return value;
}

// This function guarantees a single character value is entered.
char inputCharOption(char str[])
{
    int i, count = 0;
    char input;

    do {
        scanf(" %c", &input);

        for (i = 0; str[i] != '\0'; i++)
        {
            if (input == str[i])
            {
                count++;
            }
        }

        if (count == 0)
        {
            printf("ERROR: Character must be one of [%s]: ", str);
        }
    } while (count == 0);
    clearInputBuffer();

    return input;
}

// The purpose of this function is to obtain user input for a C string value with a length (number of characters) in the character range specified by the 2nd and 3rd arguments received(inclusive).

void inputCString(char* str, int minChar, int maxChar)
{
    int flag = 1;
    char ch = 'a';

    while (flag)
    {
        int length = 0;

        while (ch != '\n' && length <= maxChar)
        {
            ch = getchar();
            str[length] = ch;
            length++;
        };

        if (ch == '\n' && length <= (maxChar + 1))
        {
            length--;
            str[length] = '\0';
        }
        else {
            str[maxChar] = '\0';
            clearInputBuffer();
        }

        if (minChar == maxChar && length != minChar)
        {
            printf("ERROR: String length must be exactly %d chars: ", minChar);
            ch = 'a';
        }
        else if (length < minChar || length > maxChar)
        {
            if (length > maxChar)
            {
                printf("ERROR: String length must be no more than %d chars: ", maxChar);
                ch = 'a';
            }
            else if (length < minChar)
            {
                printf("ERROR: String length must be between %d and %d chars: ", minChar, maxChar);
                ch = 'a';
            }
        }
        else
        {
            flag = 0;
        }
    }
}

// This function is the same as inputCString but is exclusively for numbers
void inputCStringNumbers(char* str, int minChar, int maxChar) {
    int flag = 1;
    char ch = 'a';

    while (flag) {
        int len = 0;
        
        while (ch != '\n' && len <= maxChar) {
            ch = getchar();
            str[len] = ch;
            len++;
        };

        
        if (ch == '\n' && len <= (maxChar + 1)) {
            len--;
            str[len] = '\0';
        }
        
        else {
            str[maxChar] = '\0';
            clearInputBuffer();
        }

        if (minChar == maxChar && len != minChar) {
            printf("Invalid 10-digit number! Number: ");
            ch = 'a';
        }
        else {
            flag = 0;
        }
    }
}


// The purpose of this function is to display an array of 10-character digits as a formatted phone number.
void displayFormattedPhone(const char* str)
{
    int i, length = 0;

    while (str != NULL && str[length] && isdigit(str[length]))
    {
        length++;
    }
    if (length == 10)
    {
        i = 0;
        printf("(");
        while (i < 3)
        {
            printf("%c", str[i]);
            i++;
        }
        printf(")");
        while (i < 6)
        {
            printf("%c", str[i]);
            i++;
        }
        printf("-");
        while (i < 10)
        {
            printf("%c", str[i]);
            i++;
        }
    }
    else
    {
        printf("(___)___-____");
    }
    if (str != 0)
    {
        for (i = 0;str[i] != '\0';i++)
            length++;
    }
}
