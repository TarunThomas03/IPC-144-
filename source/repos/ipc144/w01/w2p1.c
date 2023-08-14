 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float pS, pM, pL, Total, Taxes, amount;                                //price of size
	int nS;                                                            //tshirt size//

	const double TAX = 0.13;
	const char patSize = 'S';
	//--------------------------------------------------------

	printf("Set Shirt Prices\n================\n");
	printf("Enter the price for a SMALL shirt: $");
	scanf("%f", &pS);
	printf("Enter the price for a MEDIUM shirt: $");
	scanf("%f", &pM);
	printf("Enter the price for a LARGE shirt: $");
	scanf("%f", &pL);
	//-------------------------------------------------------
	printf("\nShirt Store Price List\n======================");         //inputing price
	printf("\nSMALL  : $%.2f\n", pS);
	printf("MEDIUM : $%.2f\n", pM);
	printf("LARGE  : $%.2f\n", pL);
	printf("\nPatty's shirt size is "); printf("'");
	printf("%c", patSize);  printf("'");                                          //Patty shirt size is const S
	printf("\nNumber of shirts Patty is buying: ");                   //number of shirts bought
	scanf("%d", &nS);
	//--------------------------------------------------------
	printf("\nPatty's shopping cart...\n");                           //final bill with taxes
	printf("Contains : %d shirts", nS);
	amount = pS * nS;
	printf("\nSub-total: $%.4f\n", amount);
	Taxes = amount * TAX;
	printf("Taxes    : $ %.2f00\n", Taxes);
	Total = amount + Taxes;
	printf("Total    : $%.2f00\n", Total);
	printf("\n");

	return 0;
}