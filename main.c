//Arpit Dang
//adang8
//250960263
//Assignment 5 CS2211
//December 1st, 2021

#include "headers.h"
#include <stdio.h>
#define ITERATIONS 1000

int main (void) {
    
    LIST* sList;
    sList = createList();
    
int counter = 0; //counter for Iterations
    
    while (counter < ITERATIONS) { //User will continue to go through the while loop until 1000 times
        
        printf ("Please enter any number to continue (Enter 0 to quit)");
        scanf ("%d", &enter);
        
        int newJob;
        newJob = newPrintJob(); //10% chance a new print job will be created via this function
        
        if (newJob == 1) { //If it returns 1 (10% chance), then a new print job can be created
            
            DOCU* newDocu; //Assins a pointer to a new doc
            
            int pageNumb;
            pageNumb = pagesNum(); //Gets a random page # from 1 to 9
            newDocu->pageNum = pageNumb; //Enters the page number
   
            
            int prior;
            prior = priorityGen(); //Gets a random priority based on the percentages 
            newDocu->pri = prior; //Assigns the document the priority
            
            newDocu->docuNum = (sList->count) + 1; //Sets the document number 1 on top of the current count
            
            newDocu->cycle = 2; //Sets the cycle to 2 (I skipped this part as mentioned in the announcements)
            
            insertList (sList, newDocu); //Insets the document into the list
            
        }
        
        
        printList (sList); //Prints the list
        
        printJob (sList); //Does the prinitng Job
        
        
        printf ("Number of printer jobs left in queue: %d", sList->count); //Tells how many printing items left in the queue
        
       counter++; //Counter increases by 1 each time
 
    } //If the entered numbewr wasn't 0, it will continue
    
    printf ("End of Program - * ARPIT DANG  *"); //end of the program
    
    
    return 0;
    
}

