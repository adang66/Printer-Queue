//Arpit Dang
//adang8
//250960263
//Assignment 5 CS2211
//December 1st, 2021

#include "definitions.h" //So it is sent to the main.c
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int priorityGen (void) { //Will generate what priority to give to a file
    
    srand(time(NULL));
    
    int r; //Defines the 'r' variable
    
    r = rand() % 10; //Generates a number between 0 to 9
    
    if (r == 0) { //10% chance it is high priority
        return 1;
    }
    
    else if (r == 1 || r == 2) { //20% chance it is low priority
        return 3;
    }
    
    else {  //80% chance it is average priority 
        return 2;
    }
}
