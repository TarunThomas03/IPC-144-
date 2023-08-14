/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
Full Name  :Tarun Thomas
Student ID#:113605224
Email      :tthomas60@myseneca.ca
Section    :NFF
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{

    char type;
    int iteratNum;
    int loop= 0;

    printf("+----------------------+\nLoop application STARTED\n+----------------------+");

    while (1)
    {
        printf("\n\nD = do/while | W = while | F = for | Q = quit\nEnter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &type, &iteratNum);
        if (iteratNum >= 3 && iteratNum <= 20)
        {


            if (type == 'D')                     //Using DO-WHILE
            {
                printf("DO-WHILE: ");
                do
                {
                    printf("D");
                    iteratNum--;
                } while (iteratNum != 0);
            }
            else if (type == 'W')                //Using WHILE
            {

                printf("WHILE   : ");
                while (iteratNum != 0)
                {
                    printf("W");
                    iteratNum--;
                }
            }
            else if (type == 'F')                  //Using FOR
            {

                printf("FOR     : ");
                for (loop = 0; loop < iteratNum; loop++)
                {
                    printf("F");
                }

            }
            else
            {
                printf("ERROR: Invalid entered value(s)!");
            }

        }
        else if (type == 'Q' && iteratNum != 0)                  //To exit,condition value must be 0
        {
            printf("ERROR: To quit, the number of iterations should be 0!");
            continue;
        }
        else if (type == 'd' && iteratNum == 0)
        {
            printf("ERROR: Invalid entered value(s)!");
        }
        else if (type == 'w' && iteratNum == 0)
        {
            printf("ERROR: Invalid entered value(s)!");
        }
        else if (type == 'f' && iteratNum == 0)
        {
            printf("ERROR: Invalid entered value(s)!");
        }
        else if (type == 'Q' && iteratNum == 0)
        {
            printf("\n+--------------------+\nLoop application ENDED\n+--------------------+\n");
            break;
        }
        else
        {
            printf("ERROR: The number of iterations must be between 3-20 inclusive!");
        }
    }



    return 0;
}
