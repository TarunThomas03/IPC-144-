/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #8 (P2)
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


// System Libraries
#include <stdio.h>

// User Libraries
#include "w8p2.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* intPtr) {
	int input,flag = 1;

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
void openingMessage(const int number) {

	printf("Cat Food Cost Analysis\n");
	printf("======================\n");
	printf("\n");

	printf("Enter the details for %d dry food bags of product data for analysis.\n", MAXPRODUCTS);
	printf("NOTE: A 'serving' is %dg\n", GRAMSNUMBER);
	printf("\n");
}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int number) {
	struct CatFoodInfo cFi;
	int flag;
	printf("Cat Food Product #%d\n", number + 1);
	printf("--------------------\n");
	flag = 1;

	// SKU--------------------
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
void displayCatFoodData(int skuNum, double* priceProducts, int calories, double* weightProducts)
{
	printf("%07d %10.2lf %10.1lf %8d\n", skuNum, *priceProducts, *weightProducts, calories);
}
// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(const double* pounds, double* conversionToKg) {

	double poundsToKg = (*pounds) / POUNDCONV;

	if (conversionToKg != NULL)
	{
		*conversionToKg = poundsToKg;
	}

	return poundsToKg;
}

// 9. convert lbs: g (call convertKG, then * 1000)
int convertLbsG(const double* pounds, int* conversionToG) {

	int poundsToG = ((*pounds) / POUNDCONV) * 1000;

	if (conversionToG != NULL)
	{
		*conversionToG = poundsToG;
	}

	return poundsToG;
}

// 10. convert lbs: kg and g
void convertLbs(const double* pounds, double* conversionToKg, int* conversionToG) {

	double poundsToKg = (*pounds) / POUNDCONV;
	int poundsToG = ((*pounds) / POUNDCONV) * 1000;

	if (conversionToG != NULL && conversionToKg != NULL)
	{
		*conversionToG = poundsToG;
		*conversionToKg = poundsToKg;
	}
}

// 11. calculate: servings based on gPerServ
double calculateServings(const int servingSizeGrams, const int totalGrams, double* numOfServings) {

	double servings = ((double)totalGrams) / servingSizeGrams;

	if (numOfServings != NULL)
	{
		*numOfServings = servings;
	}

	return servings;
}

// 12. calculate: cost per serving
double calculateCostPerServing(const double* price, const double* numOfServings, double* result) {

	double costPerServing = (*price) / (*numOfServings);

	if (result != NULL)
	{
		*result = costPerServing;
	}

	return costPerServing;
}


// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const double* totalCalories, double* result) {

	double costPerCalorie = (*price) / (*totalCalories);

	if (result != NULL)
	{
		*result = costPerCalorie;
	}

	return costPerCalorie;
}

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo cFi) {

	struct ReportData rD;

	// Assigning Values------------------------
	rD.skuNum = cFi.skuNum;
	rD.priceProducts = cFi.priceProducts;
	rD.weightProductsPounds = cFi.weightProducts;
	rD.calories = cFi.calories;

	rD.weightProductsKilos = convertLbsKg(&rD.weightProductsPounds, &rD.weightProductsKilos);
	rD.weightProductstGrams = convertLbsG(&rD.weightProductsPounds, &rD.weightProductstGrams);
	rD.servings = calculateServings(GRAMSNUMBER, rD.weightProductstGrams, &rD.servings);

	double totalCalories = rD.calories * rD.servings;

	rD.costPerServing = calculateCostPerServing(&rD.priceProducts, &rD.servings, &rD.costPerServing);
	rD.costCaloriesPerServing = calculateCostPerCal(&rD.priceProducts, &totalCalories, &rD.costCaloriesPerServing);


	return rD;
}

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("Analysis Report (Note: Serving = %dg)\n", GRAMSNUMBER);
	printf("---------------\n");
	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
	printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData rD, const int cheapestProduct) {

	printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf", rD.skuNum, rD.priceProducts, rD.weightProductsPounds, rD.weightProductsKilos, rD.weightProductstGrams, rD.calories, rD.servings, rD.costPerServing, rD.costCaloriesPerServing);
}

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo cFi) {
	printf("Final Analysis\n");
	printf("--------------\n");
	printf("Based on the comparison data, the PURRR-fect economical option is:\n");
	printf("SKU:%07d Price: $%5.2lf\n", cFi.skuNum, cFi.priceProducts);
	printf("\n");

	printf("Happy shopping!\n");
	printf("\n");
}

// ----------------------------------------------------------------------------

// 7. Logic entry point
void start(void)
{
	// Struct Arrays---------------------
	struct ReportData rD[MAXPRODUCTS] = { {0} };
	struct CatFoodInfo cFi[MAXPRODUCTS] = { {0} };

	int i, cheapestIndex = 0;

	openingMessage(MAXPRODUCTS);

	for (i = 0; i < MAXPRODUCTS; i++) {
		cFi[i] = getCatFoodInfo(i);
		rD[i] = calculateReportData(cFi[i]);
	}

	// Catfoodheader-------------------
	displayCatFoodHeader();

	for (i = 0; i < MAXPRODUCTS; i++) {
		displayCatFoodData(cFi[i].skuNum, &cFi[i].priceProducts, cFi[i].calories, &cFi[i].weightProducts);
	}

	double cheapestProductPrice = rD[0].costPerServing;
	for (i = 0; i < MAXPRODUCTS; i++)
	{
		if (rD[i].costPerServing <= cheapestProductPrice)
		{
			cheapestProductPrice = rD[i].costPerServing;
			cheapestIndex = i;
		}
	}
	printf("\n");

	//--------------------------------
	displayReportHeader();

	for (i = 0; i < MAXPRODUCTS; i++)
	{
		displayReportData(rD[i], cheapestIndex);

		if (cheapestIndex == i)
		{
			printf(" ***\n");
		}
		else
		{
			printf("\n");
		}
	}
	printf("\n");

	for (i = 0; i < MAXPRODUCTS; i++)
	{
		if (i == cheapestIndex)
		{
			displayFinalAnalysis(cFi[i]);
		}
	}
}