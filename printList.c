//Arpit Dang
//adang8
//250960263
//Assignment 5 CS2211
//December 1st, 2021

#include "definitions.h" //So it is sent to the main.c
#include <stdio.h>
#include <stdlib.h>

void printList (LIST* list) { //prints the list
    
    NODE *np;

    printf ("\n Current Printer Queue Size: %d", list->count);
    
    if (list->head = NULL) { //If the list has a NULL head, indicates that the list is empty, and prints this
        printf ("\nEMPTY QUEUE - no print jobs currently in queue");
    }
    
    for (np = list->head; np != NULL; np = np-> next) { //Goes through all the items in the list until it is the end
        
        DOCU* temp;
        temp = np->dataPtr;
        
        printf ("\n Current Printer Queue : %d   NumofPages: %d  PriorirtyLevel: %d   NumOfCycles: %d ", temp->docuNum, temp->pageNum, temp->pri, temp->cycle);
        //Prints it
    }
    
    printf ("...\n");
    printf ("END OF LIST\n"); //End of the List statement
}
