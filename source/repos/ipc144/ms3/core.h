#pragma once


// SAFE-GUARD: 
// It is good practice to apply safe-guards to header files
// Safe-guard's ensures only 1 copy of the header file is used in the project build
// The macro name should be mirroring the file name with _ for spaces, dots, etc.

// !!! DO NOT DELETE THE BELOW 2 LINES !!!
#ifndef CORE_H
#define CORE_H

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// 
// Copy your work done from Milestone #1 (core.h) into this file
// 
// NOTE:
// - Organize your functions into the below categories
// - Make sure the core.c file also lists these functions in the same order!
// - Be sure to provide a BRIEF comment for each function prototype
// - The comment should also be copied to the core.c function definition
//
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


//////////////////////////////////////
// USER INTERFACE FUNCTIONS
//////////////////////////////////////

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

// This function is same as inputCString but is only for numbers
void inputCStringNumbers(char* str, int minChar, int maxChar);

// The purpose of this function is to display an array of 10-character digits as a formatted phone number.
void displayFormattedPhone(const char* str);

// !!! DO NOT DELETE THE BELOW LINE !!!
#endif // !CORE_H


