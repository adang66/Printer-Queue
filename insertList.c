//Arpit Dang
//adang8
//250960263
//Assignment 5 CS2211
//December 1st, 2021

#include "definitions.h" //So it is sent to the main.c
#include <stdio.h>
#include <stdlib.h>

void insertList (LIST* list, DOCU* itemPtr) { //Inserts a document into the list 
    
    NODE* newPtr; //Sets 2 nodes aside 
    NODE* finder; //Second node
    
    if (list->head == NULL) { //If the list is empty, then the document will just become the head itself
        
        list->head = newPtr; //Head is the new Node
        newPtr->dataPtr = itemPtr; //The new node points to the document
        
        (list->count)++; //Count is increased by 1
        
        printf ("Adding to Queue - Doc:  %d  NoPages:  %d  Priority:  %d", itemPtr->docuNum, itemPtr->pageNum, itemPtr->pri);
        //DEBUG statement
        
        return;
    }
    
    else { //If the list is not empty, then we want it to be inserted based on priority and page #
        
        for (finder = list->head; finder != NULL; finder = finder->next) { //Finder goes through all the items in the list
        
        if (*(int*)finder->dataPtr->pri >= itemPtr->pri) { //It will keep going the document's pri is less than the priority of the finder's priority
            
            while (itemPtr->pri <= *(int*)finder->dataPtr->pri) { //While the priority of item remains greater or equal to the priority of the finder
                
                if (*(int*)finder->dataPtr->pageNum >= itemPtr->pageNum) { //Check the page number is the least
                    
                    NODE* tempPtr; //If so, then enter that docuement into that specific position in the queue
                    tempPtr = finder->next;
                    finder->next = tempPtr;
                    tempPtr->dataPtr = itemPtr;
                    
                     (list->count)++;
                     
                     printf ("Adding to Queue - Doc:  %d  NoPages:  %d  Priority:  %d", itemPtr->docuNum, itemPtr->pageNum, itemPtr->pri);
                    //DEBUT statement that it has been added
                    return; //returns it
                }
                
                finder = finder->next; //If the page number is not the least, then move to the next finder
            }
        }
    }
        
    }
    
}
