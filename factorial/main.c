/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: piyushsaha
 *
 * Created on 22 October 2019, 11:46
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
     int factorial=1;
    printf("enter the number:");
    scanf("%d",&n);
    if(n < 1)
    {
        printf(" it is not possible");
        
    }
    else
    {
        for(int i=1;i<=n;i++){
            
        
            factorial=factorial*i;
        }
         printf("the factorial of %d:%d",n,factorial);
    }
    return (EXIT_SUCCESS);
}

