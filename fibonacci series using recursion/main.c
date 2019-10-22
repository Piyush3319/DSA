/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: piyushsaha
 *
 * Created on 22 October 2019, 12:34
 */

#include <stdio.h>
#include <stdlib.h>
long int fibbonaci(int n);
/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    printf("enter the integer:");
    scanf("%d",&n);
    printf("the fibo of the %d is:%ld",n,fibbonaci(n));
    return (EXIT_SUCCESS);
}
long int fibbonaci(int n){
    if (n==2 ||  n==1)
        return (n-1);
    else if(n<1)
        return 0;
    else
       return fibbonaci(n-1) + fibbonaci(n-2);
        
}
