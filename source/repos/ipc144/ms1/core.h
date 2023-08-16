#pragma once


#include <stdio.h>

// Clear the standard input buffer 
void clearInputBuffer(void);

// Wait for user to input the "enter" key to continue 
void suspend(void);

// If an invalid value is entered, error message would be displayed.
int inputInt(void);

// Guarantees a positive integer value is entered and returned. If a zero or a negative value in entered, an error message would be displayed.
int inputIntPositive(void);

// This function guarantees that an integer value is entered within the range and returned. 
int inputIntRange(int lowerRange, int upperRange);

// This function guarantees a single character value is entered.
char inputCharOption(char str[]);

// The purpose of this function is to obtain user input for a C string value with a length (number of characters) in the character range specified by the 2nd and 3rd arguments received(inclusive).
void inputCString(char* str, int minChar, int maxChar);

// The purpose of this function is to display an array of 10-character digits as a formatted phone number.
void displayFormattedPhone(char str[]);
