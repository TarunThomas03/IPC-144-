/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
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
    // You will need this when converting from grams to pounds (lbs)
        const double GRAMS_IN_LBS = 453.5924;
        char type1, type2, type3, creamchoice1, creamchoice2, creamchoice3;
        int bagweight1, bagweight2, bagweight3,dailyserves;
        
        
        printf("Take a Break - Coffee Shop\n");
        printf("==========================\n\n");
        printf("Enter the coffee product information being sold today...\n\n");
        printf("COFFEE-1...\n");
        printf("\nType ([L]ight,[M]edium,[R]ich): ");
        scanf("%c", &type1);
        printf("\nBag weight (g): ");
        scanf("%d", &bagweight1);
        printf("\nBest served with cream ([Y]es,[N]o): ");
        scanf("%c", &creamchoice1);
        printf("\n\nCOFFEE-2...");
        printf("\nType ([L]ight,[M]edium,[R]ich): ");
        scanf("%c", &type2);
        printf("\nBag weight (g): ");
        scanf("%d", &bagweight2);
        printf("\nBest served with cream ([Y]es,[N]o): ");
        scanf("%c", &creamchoice2);
        printf("\n\nCOFFEE-3...");
        printf("\nType ([L]ight,[M]edium,[R]ich): ");
        scanf("%c", &type3);
        printf("\nBag weight (g): ");
        scanf("%d", &bagweight3);
        printf("\nBest served with cream ([Y]es,[N]o): ");
        scanf("%c", &creamchoice3);

        printf("\n---+------------------------+---------------+-------+");
        printf("\n   |    Coffee              |    Packaged   | Best  |");
        printf("\n   |    Type                |    Bag Weight | Served|");
        printf("\n   +------------------------+---------------+ With  |");
        printf("\nID | Light | Medium | Rich  | (G)  |  Lbs   | Cream |");
        printf("\n---+------------------------+---------------+-------|");
        printf("\n 1 |   %d  |   %d   |  %d   |  %4d | %.3lf  |  %d   |", type1 == 'L' || type1 == 'l', type1 == 'M' || type1 == 'm', type1 == 'R' || type1 == 'r',bagweight1, bagweight1 / GRAMS_IN_LBS, creamchoice1 == 'Y' || creamchoice1 == 'y');
        printf("\n 2 |   %d  |   %d   |  %d   |  %4d | %.3lf  |  %d   |", type2 == 'L' || type2 == 'l', type2 == 'M' || type2 == 'm', type2 == 'R' || type2 == 'r', bagweight2, bagweight2 / GRAMS_IN_LBS, creamchoice2 == 'Y' || creamchoice2 == 'y');
        printf("\n 3 |   %d  |   %d   |  %d   |  %4d | %.3lf  |  %d   |", type3 == 'L' || type3 == 'l', type3 == 'M' || type3 == 'm', type3 == 'R' || type3 == 'r', bagweight3, bagweight3 / GRAMS_IN_LBS, creamchoice3 == 'Y' || creamchoice3 == 'y');

        printf("\n\nEnter how you like your coffee...");
        printf("\n\nCoffee strength ([L]ight, [M]edium, [R]ich): ");
        scanf(" %c", &type1);
        printf("\nDo you like your coffee with cream ([Y]es,[N]o): ");
        scanf("%c", &creamchoice1);
        printf("\nTypical number of daily servings: ");
        scanf("%d", &dailyserves);

        printf("The below table shows how your preferences align to the available products:\n\n");

        printf("--------------------+-------------+-------+\n");
        printf("  |     Coffee      |  Packaged   | With  |\n");
        printf("ID|      Type       | Bag Weight  | Cream |\n");
        printf("--+-----------------+-------------+-------+\n");
        printf(" 1|      % d         |     % d      |  % d   |\n", type1 == 'l' || type1 == 'L', dailyserves <= 4, creamchoice1 == 'y' || creamchoice1 == 'Y');
        printf(" 2|      % d         |     % d      |  % d   |\n", type2 == 'l' || type2 == 'L', dailyserves >= 5 && dailyserves <= 9, creamchoice2 == 'Y' || creamchoice2 == 'y');
        printf(" 3|      % d         |     % d      |  % d   |\n\n", type3 == 'l' || type3 == 'L', dailyserves > 10, creamchoice3 == 'y' || creamchoice3 == 'Y');

        printf("Enter how you like your coffee...\n\n");

        printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
        scanf(" %c", &type3);
        printf("Do you like your coffee with cream ([Y]es,[N]o): ");
        scanf(" %c", &creamchoice3);
        printf("Typical number of daily servings: ");
        scanf(" %d", &dailyserves);

        printf("The below table shows how your preferences align to the available products:\n\n");

        printf("--------------------+-------------+-------+\n");
        printf("  |     Coffee      |  Packaged   | With  |\n");
        printf("ID|      Type       | Bag Weight  | Cream |\n");
        printf("--+-----------------+-------------+-------+\n");
        printf(" 1|      % d         |     % d      |  % d   |\n", type1 == 'm' || type1 == 'M', dailyserves <= 4, creamchoice1 == 'n' || creamchoice1 == 'N');
        printf(" 2|      % d         |     % d      |  % d   |\n", type2 == 'm' || type2 == 'M', dailyserves >= 5 && dailyserves <= 9, creamchoice2 == 'n' || creamchoice2 == 'N');
        printf(" 3|      % d         |     % d      |  % d   |\n\n", type3 == 'm' || type3 == 'M', dailyserves > 10, creamchoice3 == 'n' || creamchoice3 == 'N');

        printf("Hope you found a product that suits your likes!\n");


    return 0;
}


