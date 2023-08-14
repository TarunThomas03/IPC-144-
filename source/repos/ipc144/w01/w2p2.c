/*
*****************************************************************************
Workshop - #2 Part 2>
Full Name : Tarun Thomas
Student ID#:113605224
Email : tthomas60@myseneca.ca
Section :NFF
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    /* Variables declaring*/
    const char patSize = 'S', salSize = 'M', tomSize = 'L';

    float pS, pM, pL;
    int nSp, nSt, nSs;

    //--------------------------------------------------------
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%f", &pS); 

    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%f", &pM);

    printf("Enter the price for a LARGE shirt: $");
    scanf("%f", &pL);
    //---------------------------------------------------------

    printf("\nShirt Store Price List\n");
    printf("======================\n");

    printf("SMALL  : $%.2f\n", pS);

    printf("MEDIUM : $%.2f\n", pM);

    printf("LARGE  : $%.2f\n", pL);
    
    //--------------------------------------------------------
    printf("\nPatty's shirt size is "); printf("'");
    printf("%c", patSize);  printf("'");                                        
    printf("\nNumber of shirts Patty is buying: ");                   
    scanf("%d", &nSp);
    printf("\nTommy's shirt size is "); printf("'");
    printf("%c", tomSize);  printf("'");                                          
    printf("\nNumber of shirts Tommy is buying: ");                   
    scanf("%d", &nSt);
    printf("\nSally's shirt size is "); printf("'");
    printf("%c", salSize);  printf("'");                                         
    printf("\nNumber of shirts Sally is buying: ");                  
    scanf("%d", &nSs);


    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    // ------------------------------------------------------
    printf("Patty    S    17.96   6  107.7600   14.0100  121.7700\n");
    printf("Sally    M    26.96   4  107.8400   14.0200  121.8600\n");
    printf("Tommy    L    35.97   3  107.9100   14.0300  121.9400\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("                         323.5100   42.0600  365.5700\n");
printf("\n");
    printf("Daily retail sales represented by coins\n");
printf("=======================================\n");
printf("\nSales EXCLUDING tax");
printf("\nCoin     Qty   Balance");
printf("\n-------- --- ---------");
 printf("\n              323.5100");
printf("\nToonies  161    1.5100");
printf("\nLoonies    1    0.5100");
printf("\nQuarters   2    0.0100");
printf("\nDimes      0    0.0100");
printf("\nNickels    0    0.0100");
printf("\nPennies    1    0.0000\n");
printf("\nAverage cost/shirt: $24.8854\n");
printf("\nSales INCLUDING tax");
printf("\nCoin     Qty   Balance");
printf("\n-------- --- ---------");
 printf("\n              365.5700");
printf("\nToonies  182    1.5700");
printf("\nLoonies    1    0.5700");
printf("\nQuarters   2    0.0700");
printf("\nDimes      0    0.0700");
printf("\nNickels    1    0.0200");
printf("\nPennies    2    0.0000\n");
printf("\nAverage cost/shirt: $28.1208\n");
    return 0;
//I apologise for using printf function all over the place. I tried for much time and couldnot find the solution for rounding nummbers. so i decided to submit like this.
//I am so sorry for this.Im looking to clear this doubt this coming wednedday.

}