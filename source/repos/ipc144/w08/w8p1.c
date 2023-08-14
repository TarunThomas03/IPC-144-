/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #8 (P1)
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
#include "w8p1.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* intPtr) {
	int input, flag = 1;

	do {
		scanf("%d", &input);
		if (input <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag);

	if (intPtr != NULL)
	{
		*intPtr = input;
	}
	return input;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* doublePtr) {
	double input;
	int flag = 1;

	do {
		scanf("%lf", &input);
		if (input <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag);

	if (doublePtr != NULL)
	{
		*doublePtr = input;
	}
	return input;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(int number) {

	printf("Cat Food Cost Analysis\n");
	printf("======================\n\n");

	printf("Enter the details for %d dry food bags of product data for analysis.\n", MAXPRODUCTS);
	printf("NOTE: A 'serving' is %dg\n\n", GRAMSNUMBER);
}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(int number) {
	struct CatFoodInfo cFi;
	int flag;
	printf("Cat Food Product #%d\n", number + 1);
	printf("--------------------\n");
	flag = 1;

	printf("SKU           : ");
	flag = 1;
	do {
		scanf("%d", &cFi.skuNum);
		if (cFi.skuNum <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag);

	//-----------------

	printf("PRICE         : $");
	flag = 1;
	do {
		scanf("%lf", &cFi.priceProducts);
		if (cFi.priceProducts <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag);


	printf("WEIGHT (LBS)  : ");
	flag = 1;
	do {
		scanf("%lf", &cFi.weightProducts);
		if (cFi.weightProducts <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag);

	printf("CALORIES/SERV.: ");
	flag = 1;
	do {
		scanf("%d", &cFi.calories);
		if (cFi.calories <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag);

	printf("\n");

	return cFi;

}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(int skuNum, double* priceProducts, int calorie, double* productWeight)
{
	printf("%07d %10.2lf %10.1lf %8d\n", skuNum, *priceProducts, *productWeight, calorie);
}

// 7. Logic entry point
void start(void)
{
	int i;
	struct CatFoodInfo cFi[MAXPRODUCTS] = { {0} };
	openingMessage(MAXPRODUCTS);

	for (i = 0; i < MAXPRODUCTS; i++) {
		cFi[i] = getCatFoodInfo(i);
	}

	displayCatFoodHeader();

	for (i = 0; i < MAXPRODUCTS; i++) {
		displayCatFoodData(cFi[i].skuNum, &cFi[i].priceProducts, cFi[i].calories, &cFi[i].weightProducts);
	}

}