#include <stdio.h>
#include "NumClass.h"

/* will return 1 if a number is Armstrong number
*/

int isArmstrong(int num){
    int check = num;
    int sum = 0;
    int lsd;
    int len = numLength(num);
    while( check!=0 && sum<=num){
        lsd = check%10;
        sum += power(lsd, len);
        check /=10;
    }
    return sum == num;
}

/* will return 1 if a number is Palindrome
*/
int isPalindrome(int num){
    int len = numLength(num);
    int msd;
    int lsd;

    for(int i=1; i<= len+1; i++){
        msd = num/(power(10,len-1));
        lsd = num % 10;

         if( msd != lsd){
             return 0;
          }
        num = num - (msd*(power(10, len-1)));
        num = num/10;
        len = len -2;
    }

    return 1;
}



