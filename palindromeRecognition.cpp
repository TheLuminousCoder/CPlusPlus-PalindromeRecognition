/******************************************************************************/
/*  NAME: TheLuminousCoder                                                    */
/*  FILE: PalindromeRecognition.cpp                                           */
/*  DATE: Dec 22nd 2019                                                       */
/*  GOAL: Determine if a number entered as input is a Palindrome or not.      */
/******************************************************************************/

//Preprocessor directives
#include <iostream>
using namespace std;

//Function Prototypes
int getData();
int calculateReversedValue(int);
void printResults(int, int);

//Main function
int main()
{
    //Variable Declaration
    int num, digit, rev = 0;

    //Input
    num = getData();

    //Process
    rev = calculateReversedValue(num);

    //Output
    printResults(num, rev);
    
    return 0;
}

//User-defined functions
int getData()
{
    int value = 0;
    do {
        cout << "Enter a positive value" << endl;
        cin >> value;
    } while (value < 0);
    return value;
}
int calculateReversedValue(int num)
{
    int rev = 0;
    int digit;
    while (num > 0){
        digit = num % 10;
        num /= 10;
        rev = (10 * rev) + digit;
    }
    return rev;
}
void printResults(int num, int rev)
{
    if(num == rev)
        cout << "This is a Palindrome" << endl;
    else
        cout << "This is not a Palindrome" << endl;
}
