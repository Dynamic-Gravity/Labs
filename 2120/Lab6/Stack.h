/*
* Name:Joseph Barton
* Date Submitted: 2/27/2017
* Lab Section: 4
* Assignment Name: Lab 6
*/


#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Stack{
private:
  vector<T> * stax;

public:

  Stack();
  ~Stack();
  int size();
  bool empty();
  void push(T value);
  void pop();
  T & top();
};

template <class T>
Stack<T>::Stack(){

	stax = new vector <T>();

}
template <class T>
Stack<T>::~Stack(){

	delete stax;
}
template <class T>
int Stack<T>::size(){

	return stax->size();
}
template <class T>
bool Stack<T>:: empty(){

	return stax->empty();
}
template <class T>
void Stack<T>::push(T value){
	stax->push_back(value);

}
template <class T>
void Stack<T>::pop(){
	stax->pop_back();

}
template <class T>
T & Stack<T>::top(){
	return stax->back();

}

