//Arpit Dang
//adang8
//250960263
//Assignment 5 CS2211
//December 1st, 2021

#include "definitions.h" //So it is sent to the main.c
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAXPAGES 200  //Pages will be between 1 to 200

int pagesNum (void) { //Generates a page number between 1 and 200
    
    srand(time(NULL));
    
    int r;
    
    r = rand() % MAXPAGES; //Gives a random number between 0 to 199
    r++; //Adds it by 1
    
    return r;
}
