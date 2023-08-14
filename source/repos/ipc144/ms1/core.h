#pragma once
/*
*****************************************************************************
                        Assignment 1 - Milestone 1
Full Name  : Tarun Thomas
Student ID#: 113605224
Email      : tthomas60@myseneca.ca
Section    : NFF
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

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
