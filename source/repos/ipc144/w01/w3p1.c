/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
Full Name  :Tarun Thomas
Student ID#:113605224
Email      :tthomas60@myseneca.ca
Section    :NFF
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;
    const int prodid1 = 111, prodid2 = 222, prodid3 = 111;
    const double prodprice1 = 111.49, prodprice2 = 222.99, prodprice3 = 334.49;
    const char taxed1 = 'Y', taxed2 = 'N', taxed3 = 'N';
    double average = (prodprice1+prodprice2+prodprice3)/3;                                                  //Declaration
    printf("Product Information\n"                                             //Output display starts
        "===================\n");
    printf("Product-1 (ID:%d)",prodid1);
    printf("\n  Taxed: %c",taxed1);
    printf("\n  Price: $%.4f",prodprice1);
    printf("\n\nProduct-2 (ID:%d)", prodid2);
    printf("\n  Taxed: %c", taxed2);
    printf("\n  Price: $%.4f", prodprice2);
    printf("\n\nProduct-3 (ID:%d)", prodid3);
    printf("\n  Taxed: %c", taxed3);
    printf("\n  Price: $%.4f", prodprice3);
    printf("\n\nThe average of all prices is: $%.4f", average);                                             
    printf("\n\nAbout Relational and Logical Expressions!\n"                   //info about expressions
        "========================================\n"
        "1. These expressions evaluate to TRUE or FALSE\n"
        "2. FALSE: is always represented by integer value 0\n"
        "3. TRUE : is represented by any integer value other than 0\n");
    printf("\nSome Data Analysis..."                                         //questions
        "\n=====================");
    printf("\n1. Is product 1 taxable? -> %d", taxed1 == 'Y');
    printf("\n\n2. Are products 2 and 3 both NOT taxable (N)? -> %d", taxed2 == 'N' && taxed3 == 'N');
    printf("\n\n3. Is product 3 less than testValue ($%.2lf", testValue);
    printf(")? -> "); printf("%d", prodprice3 < testValue);                                           
    printf("\n\n4. Is the price of product 3 more than both product 1 and 2 combined? -> %d", prodprice3 > prodprice2 + prodprice1);
    printf("\n\n5. Is the price of product 1 equal to or more than the price difference\n"
        "   of product 3 LESS product 2? ->  %d", prodprice1>=prodprice3-prodprice2);                   
    printf(" (price difference: $%.2lf)",prodprice3-prodprice2);
    printf("\n\n6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", prodprice2 >= average);
    printf("7. Based on product ID, product 1 is unique -> %d\n\n", prodid1 != prodid2 && prodid1 != prodid3);
    printf("8. Based on product ID, product 2 is unique -> %d\n\n", prodid2 != prodid1 && prodid2 != prodid3);
    printf("9. Based on product ID, product 3 is unique -> %d\n\n", prodid3 != prodid2 && prodid3 != prodid1);


    return 0;
}