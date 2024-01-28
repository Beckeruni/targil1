#ifndef _NUMCLASS_H_
#define _NUMCLASS_H_


/* will return 1 if number is Armstorng loop
*/

    int isArmstrong(int num);

/* will return 1 if number is Armstrong number recursively
*/

    int isArmstrong1(int num);

/* will help previous funcion: 
*/

    int isArmstrongRecursive(int num, int len, int sum);

/* will return 1 if number is palindrome
*/

    int isPalindrome(int num);

/* will return 1 if number is palindrome recursively 
*/

    int isPalindrome1(int);

/* will return 1 if number is strong
*/

    int isStrong(int num);



/* will return 1 if number is prime
*/
    int isPrime(int num);


/* will return length of number
*/

    int numLength(int num);

/* will return factorial of number
*/
    int factorial(int digit);


/* will return power function of a as base
*/

    int power(int a, int b);

/* will return smaller number of 2
*/
    int min(int a, int b);

/* will return larger number of 2
*/
    int max(int a, int b);


    #endif

