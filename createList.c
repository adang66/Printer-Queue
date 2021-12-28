//Arpit Dang
//adang8
//250960263
//Assignment 5 CS2211
//December 1st, 2021

#include "definitions.h" //So it is sent to the main.c
#include <stdio.h>
#include <stdlib.h>

LIST* createList (void) { //Creates a printer queue
    LIST* list;
    list = (LIST*) malloc (sizeof (LIST)); //Sets aside list
    
    
        list->head = NULL; //Head is null
        list->count = 0; //Starts with 0 items
    
    
    return list; //Returns it
}
