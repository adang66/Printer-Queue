//Arpit Dang
//adang8
//250960263
//Assignment 5 CS2211
//December 1st, 2021

#ifndef definitions 
#define definitions

//Structures defined here that can be used throughout the program
typedef struct document {
        int docuNum;
        int pri;
        int pageNum;
        int cycle;
    } DOCU;

typedef struct node {
        DOCU*   dataPtr;
        struct node* next;
    } NODE;


typedef struct list {
        NODE* head;
        int count;
    } LIST;
    
//function prototypes
    int priorityGen (void);
    int pagesNum (void);
    int newPrintJob (void);
    LIST* createList (void);
    void insertList (LIST*, DOCU*);
    void printList (LIST*);
    void printJob (LIST*);

#endif  //definitions
