/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P1)
Full Name  : Tarun Thomas
Student ID#: 113605224
Email      : tthomas60@myseneca.ca
Section    : NFF
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX_ITEMS 10

int main(void)
{
    double monthlyNetIncome;     //Variables declaration
    int wishListItems;
    const double mincost = 100.00;

    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n");
    printf("\n");
    //-------------------------------------
    do {
        printf("Enter your monthly NET income: $");
        scanf("%lf", &monthlyNetIncome);

        if (monthlyNetIncome < 500.00)
        {
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n");
        }

        if (monthlyNetIncome > 400000.00)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n");
        }

        printf("\n");
    } while (!(monthlyNetIncome >= 500.00 && monthlyNetIncome <= 400000.00));

    do {
        printf("How many wish list items do you want to forecast?: ");
        scanf("%d", &wishListItems);

        if (!(wishListItems > 0 && wishListItems <= MAX_ITEMS))
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
        }

        printf("\n");
    } while (!(wishListItems > 0 && wishListItems <= MAX_ITEMS));

    double cost[wishListItems];  //Array Declaration
    int priority[wishListItems];
    char finance[wishListItems];

    int i;
    for (i = 1; i <= wishListItems; i++)
    {
        printf("Item-%d Details:\n", i);

        do {
            printf("   Item cost: $");
            scanf("%lf", &cost[i - 1]);

            if (cost[i - 1] < mincost)
            {
                printf("      ERROR: Cost must be at least $100.00\n");
            }
        } while (cost[i - 1] < mincost);

        do {
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &priority[i - 1]);

            if ((priority[i - 1] < 1) || (priority[i - 1] > 3))
            {
                printf("      ERROR: Value must be between 1 and 3\n");
            }
        } while ((priority[i - 1] < 1) || (priority[i - 1] > 3));

        do {
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c", &finance[i - 1]);

            if (!(finance[i - 1] == 'n' || finance[i - 1] == 'y'))
            {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            }
        } while (!(finance[i - 1] == 'n' || finance[i - 1] == 'y'));

        printf("\n");
    }

    //-----------------------------------
    printf("Item Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");

    int j;
    double totalcost = 0;
    for (j = 1; j <= wishListItems; j++)
    {
        printf("  %d      %d        %c     %10.2lf\n", j, priority[j - 1], finance[j - 1], cost[j - 1]);
        totalcost += cost[j - 1];
    }

    printf("---- -------- -------- -----------\n");
    printf("                      $ %.2lf\n", totalcost);
    printf("\n");

    printf("Best of luck in all your future endeavours!\n");

    return 0;
}