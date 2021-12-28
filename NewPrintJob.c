//Arpit Dang
//adang8
//250960263
//Assignment 5 CS2211
//December 1st, 2021

#include "definitions.h" //So it is sent to the main.c
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int newPrintJob (void) { //10% chance that a new print job will be created
    
    srand(time(NULL));
    
    int r;
    
    r = rand() % 10; //Gives a random number between 0 and 9
    
    if (r == 0) { //If it is 0 (10% chance), then it will return 1 and it can create a new newPrintJob
        return 1;
    }
    
    else { //Else it returns 0 and nothing happens
        return 0;
    }
    
}
