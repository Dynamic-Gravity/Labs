/*************************
 CPSC 1021 - Computer Science II Laboratory
 
 File: Linked_List.c
 Purpose: Debugging file for Lab 01
 
 ************************/

#include <stdio.h>
#include <malloc.h>

// define the node struct
typedef struct node_type {
    int val;
    struct node_type * next;
} node;


int main() {

    //declare variables
    node *head;
    unsigned int i;
    
   //Created a linked list
    for(i=1;i<=10;i++) {
        
        node* curr;
	curr = malloc(sizeof(node)); // allocate memory for new node
     
	// set the data members of the newly created node
	// and update the head node to the newly created node
        curr->val = i;
        curr->next = head;
        head = curr;
    }
 
  //Print out the values
    while(head!=NULL) {
        printf("value = %i\n", head->val);
        head = head->next ;
    }
    
    puts("\nFinished running program.");

   return 0;
}


