#include "NumClass.h"
#include <stdio.h>

/* will return 1 if number is Armstrong
*/
int isArmstrong1(int num){
    int len = numLength(num);
    return (isArmstrongRecursive(num, len, 0) == num);
}


int isArmstrongRecursive(int num, int len, int sum){
    if (num == 0){
        return sum;
    }
    sum += power(num%10, len);
    return isArmstrongRecursive(num/10,len,sum);
}

int power(int a, int b){
    if(b==0){
        return 1;
    }
    return a*power(a, b-1);
}


/* will return 1 if number is Palindrome
*/

int isPalindrome1(int num){
    int len = numLength(num);
    if(len == 0 || len == 1){
        return 1;
    }
    int lsd = num%10;
    int msd = num/(power(10, len-1));
    if(lsd == msd){
        return 0;
    }
    num -= msd*(power(10,len-1));
    num /=10;
    return 1*isPalindrome1(num);
}