//Arpit Dang
//adang8
//250960263
//Assignment 5 CS2211
//December 1st, 2021

#include "definitions.h" //So it is sent to the main.c
#include <stdio.h>
#include <stdlib.h>
#define PAGEPERMINUTE 1
#define MAXCYCLES 200

void printJob (LIST* list) {
    
    DOCU* tempDoc; //Creates a new document variable 
    NODE* tempNod; //Creates a new node variable
    
    
    tempNod = list->head; //Adds the first document in the list to the temp variable
    tempDoc = tempNod->dataPtr;
    
     while (tempDoc->pageNum > 0) { //Prints 1 pages per min, and therefore subtracts 1 pages each time until it reaches 0
         ("\nPRINTIING - DOCUMENT: %d   PAGE:  %d   PRIORITY:  %d", tempDoc->docuNum,tempDoc->pageNum, tempDoc->pri);
        //DEBUG statment
         tempDoc->pageNum = tempDoc->pageNum - PAGEPERMINUTE;
   
     }
    
    list->head = tempNod->next;
    (list->count)--;
    
    printf ("\nPrint Job Completed - Document Number: %d - Cycle count: %d", tempDoc->docuNum,tempDoc->cycle); //Printing job completed
    
    NODE* np;
    int counter;
    counter = 0;
   
    for (np = list->head; np != NULL; np = np-> next) { //For all the documents, increases the cycle by 1
        
        counter++; //How many times have we moved next counter
        
        DOCU* temp;
        temp = np->dataPtr;
        
        (temp->cycle)++;
        
        printf ("\nIncrement Cycle - Document:  %d   NumofPages: %d  PriorirtyLevel: %d   NumOfCycles: %d ", temp->docuNum, temp->pageNum, temp->pri, temp->cycle);
        //prints that the cycle was increased by 1
        
        if (temp->cycle >= MAXCYCLES) { //Code for the BONUS instructions
            
            printf ("\nEXCEEDED CYCLE COUNT - Document:  %d   NumofPages: %d  PriorirtyLevel: %d   NumOfCycles: %d ", temp->docuNum, temp->pageNum, temp->pri, temp->cycle);
            //prints that a certaiin document exceeded the cycle max
            NODE* npp;
            
            npp = list->head;
            
            while (npp->dataPtr->cycle == MAXCYCLES) { //Ensures that it will move onto the next node if the head already has a MAXCYCLE node
                npp = npp->next;
            }
            
            NODE* delete; //Deletes the node once it has been moved to the front, want to change the 'next' of the previous node
            
            delete = list->head;
            
            for (int i = 0; i < counter - 1; i++) { //Since we want to the change the 'next' of the previous node, we move to the next node 1 less than the counter
                
                delete = delete->next;
                
            }
            
            delete->next = np->next; //Skipping the np since it will be in the front
            
            NODE* temp; //Creates a temporary node 
            
            temp = npp->next;
            npp->next = np;
            np->next = temp;
            
            
        }
    }
    
}
