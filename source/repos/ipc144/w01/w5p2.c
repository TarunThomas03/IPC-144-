/*****************************************************************************
<assessment name example : Workshop - #5 (Part - 1)>
Full Name   : Tarun Thomas
Student ID# : 113605224
    Email   : tthomas60@myseneca.ca
    Section : NFF
    Authenticity Declaration :
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider.This submitted
piece of work is entirely of my own creation.
* ****************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MIN_YEAR 2012 
#define MAX_YEAR 2022
#define LOG_DAYS 3

int main(void)
{
    int JAN = 1, DEC = 12, year = 1, month = 1, loop = 1;                         //Variables declaration
    double morningRating, eveningRating, morningTotal = 0, eveningtotal = 0;
    int num = 0;
    double overall = morningTotal + eveningtotal, avgEvening = (eveningtotal / 3), avgMorning = (morningTotal / 3), avgOverall = (avgMorning + avgEvening) / 2;


    printf("General Well-being Log\n======================\n");
    while (loop == 1)

    {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);


        if ((month >= 1 && month <= 12) && (year < 2012 || year> 2022))
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        }
        else if ((month <= 0 || month > 12) && (year >= 2012 && year <= 2022))
        {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }
        else if ((month <= 0 || month > 12) && (month < 2012 || year > 2022))
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n   ERROR: Jan.(1) - Dec.(12)\n");

        }
        else if (month >= JAN && month <= DEC && year >= MIN_YEAR && year <= MAX_YEAR)
        {
            printf("\n*** Log date set! ***\n");
            loop = 0;
        }
    }

    //-------------------------------------------------------------------
    for (num = 1; num <= LOG_DAYS; num++)
    {
        printf("\n%d-FEB-0%d", year, num);
        while (1)
        {

            printf("\n   Morning rating (0.0-5.0): ");
            scanf("%lf", &morningRating);

            if (!(morningRating >= 0 && morningRating <= 5))
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!");
            }
            else
            {
                break;
            }
        }
        while (1)
        {

            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eveningRating);

            if (!(eveningRating >= 0 && eveningRating <= 5))
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }
            else
            {
                break;
            }
        }
        morningTotal += morningRating;
        eveningtotal += eveningRating;
    }
    //-------------------------------------------------------

    printf("\nSummary\n=======");
    printf("\nMorning total rating: %.3lf", morningTotal);
    printf("\nEvening total rating:  %.3lf", eveningtotal);
    printf("\n----------------------------");
    printf("\nOverall total rating: %.3lf", overall);
    printf("\n\nAverage morning rating:  %.1lf", avgMorning);
    printf("\nAverage evening rating:  %.1lf", avgEvening);
    printf("\n----------------------------");
    printf("\nAverage overall rating:  %.1lf\n", avgOverall);



    return 0;
}