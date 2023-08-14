/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P2)
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
    int numApples, numOranges, numPears, numTomatoes, numCabbages, shopping = 1;   //Variable declaration
    int applesPicked = 0, orangesPicked = 0, pearsPicked = 0, tomatoesPicked = 0, cabbagesPicked = 0;

    while (shopping == 1)
    {
        //------------------------------------
        printf("Grocery Shopping\n");
        printf("================\n");

        //------------apples------------------------
        printf("How many APPLES do you need? : ");
        scanf("%d", &numApples);

        //Loops of input is less than zero
        while (numApples < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many APPLES do you need? : ");
            scanf("%d", &numApples);
        }
        printf("\n");

        //-----------oranges----------------------
        printf("How many ORANGES do you need? : ");
        scanf("%d", &numOranges);

        //Loops if input is less than zero
        while (numOranges < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many ORANGES do you need? : ");
            scanf("%d", &numOranges);
        }
        printf("\n");

        //----------------Pears---------------------
        printf("How many PEARS do you need? : ");
        scanf("%d", &numPears);

        //Loops if input is less than zero
        while (numPears < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many PEARS do you need? : ");
            scanf("%d", &numPears);
        }
        printf("\n");

        //------------------Tomatoes------------------
        printf("How many TOMATOES do you need? : ");
        scanf("%d", &numTomatoes);

        //Loops if input is less than zero
        while (numTomatoes < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &numTomatoes);
        }
        printf("\n");

        //----------------Cabbages-------------------
        printf("How many CABBAGES do you need? : ");
        scanf("%d", &numCabbages);

        //Loops if input is less than zero
        while (numCabbages < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &numCabbages);
        }
        printf("\n");

        //-----------------Time to pick products--------
        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n");
        printf("\n");

        //More Variables
        int leftapples = numApples, leftoranges = numOranges, leftpears = numPears, lefttomatoes = numTomatoes, leftcabbages = numCabbages;
        //Apples--------------------------
        while (numApples > 0)
        {
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d", &applesPicked);

            if (applesPicked > leftapples)
            {
                printf("You picked too many... only %d more APPLE(S) are needed.\n", leftapples);
            }

            else if (applesPicked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }

            else if ((applesPicked < leftapples) && (applesPicked > 0))
            {
                printf("Looks like we still need some APPLES...\n");
                leftapples = leftapples - applesPicked;
            }

            else if (applesPicked == leftapples)
            {
                printf("Great, that's the apples done!\n\n");
                break;
            }
        }

        //Oranges---------------------------------

        while (numOranges > 0)
        {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &orangesPicked);

            if (orangesPicked > leftoranges)
            {
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", leftoranges);
            }

            else if (orangesPicked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }

            else if ((orangesPicked < leftoranges) && (orangesPicked > 0))
            {
                printf("Looks like we still need some ORANGES...\n");
                leftoranges = leftoranges - orangesPicked;
            }

            else if (orangesPicked == leftoranges)
            {
                printf("Great, that's the oranges done!\n\n");
                break;
            }
        }

        //Pears----------------------------------------------
        while (numPears > 0)
        {
            printf("Pick some PEARS... how many did you pick? : ");
            scanf("%d", &pearsPicked);

            if (pearsPicked > leftpears)
            {
                printf("You picked too many... only %d more PEAR(S) are needed.\n", leftpears);
            }

            else if (pearsPicked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }

            else if ((pearsPicked < leftpears) && (pearsPicked > 0))
            {
                printf("Looks like we still need some PEARS...\n");
                leftpears = leftpears - pearsPicked;
            }

            else if (pearsPicked == leftpears)
            {
                printf("Great, that's the pears done!\n\n");
                break;
            }
        }

        // Tomatoes---------------------------------------------
        while (numTomatoes > 0)
        {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &tomatoesPicked);

            if (tomatoesPicked > lefttomatoes)
            {
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n", lefttomatoes);
            }

            else if (tomatoesPicked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }

            else if ((tomatoesPicked < lefttomatoes) && (tomatoesPicked > 0))
            {
                printf("Looks like we still need some TOMATOES...\n");
                lefttomatoes = lefttomatoes - tomatoesPicked;
            }

            else if (tomatoesPicked == lefttomatoes)
            {
                printf("Great, that's the tomatoes done!\n\n");
                break;
            }
        }

        // Cabbages-------------------------------------
        while (numCabbages > 0)
        {
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d", &cabbagesPicked);

            if (cabbagesPicked > leftcabbages)
            {
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", leftcabbages);
            }

            else if (cabbagesPicked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }

            else if ((cabbagesPicked < leftcabbages) && (cabbagesPicked > 0))
            {
                printf("Looks like we still need some CABBAGES...\n");
                leftcabbages = leftcabbages - cabbagesPicked;
            }

            else if (cabbagesPicked == leftcabbages)
            {
                printf("Great, that's the cabbages done!\n\n");
                break;
            }
        }

        printf("All the items are picked!\n\n");

        // Ask for loop
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &shopping);
        printf("\n");

    }

    printf("Your tasks are done for today - enjoy your free time!\n");

    return 0;
}
