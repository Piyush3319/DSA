/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: piyushsaha
 *
 * Created on 22 October 2019, 12:03
 */

#include <stdio.h>
#include <stdlib.h>
long int factorial(int n);

/*
 * 
 */
int main(int argc, char** argv) {

    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the factorial of %d:%ld",n,factorial(n));
    return 0;
}
long int factorial(int n){
    if (n >= 1)
            return n * factorial(n-1);
    else
    {
        return  1;
}
}
