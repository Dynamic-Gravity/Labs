/*
 * Name: Joseph Barton
 * Date Submitted: 2/17/17
 * Lab Section:	4
 * Assignment Name: Lab 4
 */

#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <string>
#include "Node.h"
using namespace std;

//This class represents a linked list of node objects
//that are sorted in descending order.
//Do not modify anything in the class interface
template <class T>
class List{

 private:
  Node<T> * start; //pointer to the first node in this list
  Node<T> * end;   //pointer to the last node in this list
  int mySize;  //size (or length) of this list

 public:
  List();
  ~List();
  int size();
  bool empty();
  void insert(T);
  bool contains(T);
  //Print the name and this list's size and values to stdout
  //This function is already implemented (no need to change it)
  void print(string name){
    cout << name << ": ";
    cout << "size = " << size();
    cout << ", values = ";
    Node<T> * iterator = start;
    while(iterator != NULL){
      cout << iterator->value << ' ';
      iterator = iterator->next;
    }
    cout << endl;
  }

}; //end of class interface (you may modify the code below)

//Implement all of the functions below

//Construct an empty list by initializig this list's instance variables
template <class T>
List<T>::List(){
	mySize = 0;
	start = NULL;
	end = NULL;
}

//Destroy all nodes in this list to prevent memory leaks
template <class T>
List<T>::~List(){
	Node <T> *loc = start;
 //Delete each node in list
	while(loc->next != NULL){
   Node<T> * temp = loc->next;
   delete loc;
   loc = temp;
	}
}

//Return the size of this list
template <class T>
int List<T>::size(){
	return mySize;

}

//Return true if this list is empty
//Otherwise, return false
template <class T>
bool List<T>::empty(){
	if(mySize == 0)
		return true;
	else
		return false;

}

//Create a new node with value, and insert that new node
//into this list in its correct position such that
//the values of the nodes in this list are sorted in descending order
template <class T>
// insert while keeping descending order
void List<T>::insert(T value){
	Node <T> *temp = new Node <T> (value);
 //insertion into empty list
	if(empty())
	{
		start = temp;
		end = temp;
	}
 //insertion at the beginning of list
	else if( value > start->value){
		temp->next = start;
		start = temp;
	}
 //insertion at end of list
	else if(value < end->value){
    //loop to end of list
     while(temp->next != NULL){
       temp = temp->next;
     }
     //set value and pointers
     end->next = temp;
     temp->next = NULL;
     end = temp;

	}
 //insertion between two objects
	else{
		Node<T>* cur = start;
    //loop through list
		while(cur->next != NULL){
      // insertion between two elements checking the value of the current node and the next node
			if(cur->value > value && value >= cur->next->value){
				temp->next = cur->next;
				cur->next = temp;
			}
			cur = cur->next;
		}
   }
	mySize++;
}


//Return true if this list contains a node whose value is equal to the key
//Otherwise, return false
template <class T>
bool List<T>::contains(T key){

    Node<T> * temp = start;

    while(temp->next != NULL)
    {
        if(temp->value == key)
        {
            return true;
        }
          temp = temp->next;
          }
        return false;
    }

#endif
