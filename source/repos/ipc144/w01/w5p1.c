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

int main(void)
{
    int JAN = 1, DEC = 12, year = 1, month = 1,loop = 1;

    printf("General Well-being Log\n======================\n");
    while(loop == 1)
    
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
            printf("\n*** Log date set! ***\n\n");
            printf("Log starting date: %d-FEB-01", year);
            printf("\n");
            loop = 0;
        }
    }
    return 0;
}