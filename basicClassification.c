#include <stdio.h>
#include "NumClass.h"

/* will return 1 if number is prime*/
int isPrime(int num){
    if (num < 2){
        return 0;
    }
    for (int i=2; i*i <= num; i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}


/* will return 1 if number is strong*/
int isStrong(int num){
    int originalNum = num;
    int len = numLength(num);
    int sum = 0;
    int lsd;
    for (int i=1; i<=len; i++){
        lsd = num%10;
        sum = sum + factorial(lsd);
        num = num/10;
    }
    return (originalNum == sum);
}


int numLength(int num){
    int i=0;
    while (num !=0){
        i++;
        num /= 10;
    }
    return i;
}

int factorial(int digit){
    if(digit < 0){
        return -1;
    }
    int sum = 1;
    for(int i=1; i<= digit; i++){
        sum = sum *i;
    }
    return sum;
}


int min(int a, int b){
    if(a < b){
        return a;
    }
    return b;
}

int max(int a, int b){
    if (a>=b){
        return a; 
    }
    return b;
}
