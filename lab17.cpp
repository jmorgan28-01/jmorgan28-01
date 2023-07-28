// Jonathan Morgan
// CS 1337
// lab 17

#include <iostream>
#include <climits>

// Function initializeDigits initializes each of the elements in the
// n-element boolean array digits to value
void initializeDigits(bool digits[], int n, bool value)
{
    for (int i = 0; i < n; ++i)
    digits[i] = value;
}   

// Function determineDigits receives as arguments an n-element boolean
// array digits and a five digit number abcde.  The function sets
// digits[i], 0 <= i <= 9, to true if i occurs in the decimal
// representation of abcde.
void determineDigits(bool digits[], int n, int abcde)
{
    for (int i = 0; i < n; ++i)
    {
        int a = abcde / 10000; 
        int b = abcde / 1000 % 10;
        int c = abcde / 100 % 10;
        int d = abcde / 10 % 10;
        int e = abcde % 10;

        digits[a] = true;
        digits[b] = true;
        digits[c] = true;
        digits[d] = true;
        digits[e] = true;
    }
}

// Function checkDigits returns true if each of the elements in the
// n-element boolean array digits is true and false otherwise

bool checkDigits(const bool digits[], int n)
{
    int k = 0;
    for(int i = 0; i < n; ++i)
    {
    if (digits[i] == true)
    ++k;
    }
    if (k == 10)
    return true;
    
    else
    return false;
}