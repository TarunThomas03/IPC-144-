#pragma once
#define MAXPRODUCTS 3
#define GRAMSNUMBER 64
#define POUNDCONV 2.20462

// ----------------------------------------------------------------------------
// structures
struct CatFoodInfo {
    int skuNum;
    double priceProducts;
    int calories;
    double weightProducts;
};

struct ReportData
{
    int skuNum;
    double priceProducts;
    int calories;
    double weightProductsPounds;
    double weightProductsKilos;
    int weightProductstGrams;
    double servings;
    double costPerServing;
    double costCaloriesPerServing;
};


// ----------------------------------------------------------------------------
// function prototypes

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int*);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double*);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(int);

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(int);

// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(int, double*, int, double*);

// 7. Logic entry point
void start(void);


// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg
double convertLbsKg(const double* pounds, double* conversionToKg);

// 9. convert lbs: g
int convertLbsG(const double* pounds, int* conversionToG);

// 10. convert lbs: kg / g
void convertLbs(const double* pounds, double* conversionToKg, int* conversionToG);

// 11. calculate: servings based on gPerServ
double calculateServings(const int servingSizeGrams, const int totalGrams, double* numOfServings);

// 12. calculate: cost per serving
double calculateCostPerServing(const double* price, const double* numOfServings, double* result);

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const double* calories, double* result);

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo cFi);

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData rD, const int cheapestProduct);

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo cFi);

// ----------------------------------------------------------------------------

// 7. Logic entry point 
void start(void);
