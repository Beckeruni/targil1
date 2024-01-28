#include <stdio.h>
#include "NumClass.h"


/* main function. prints fitting numbers and their special features
*/
int main(){
    int first, second;
    scanf("%d %d", &first, &second);
    
    int minNum = min(first, second);
    int maxNum = max(first, second);

  
    printf("The Armstrong numbers are:  ");

    for (int i=minNum; i<= maxNum; i++){
         if(isArmstrong(i)){
            printf("%d ", i);
        }
    }
    printf("\n");


    printf("The Palindromes are: ");
    for (int i=minNum; i<= maxNum; i++){
        if(isPalindrome(i)){
            printf("%d ", i);
        }
    }
    printf("\n");



    printf("The Prime numbers are: ");
    for (int i=minNum; i<= maxNum; i++){
         if(isPrime(i)){
            printf("%d ", i);
        }
    }
    printf("\n");


    printf("The Strong numbers are: ");
    for (int i=minNum; i<= maxNum; i++){
         if(isStrong(i)){
            printf("%d ", i);
        }
    }
    printf("\n");


    return 0;
}
