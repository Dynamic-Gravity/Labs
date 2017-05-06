/*
* Name:Joseph Barton
* Date Submitted: 3/6/2017
* Lab Section: 4
* Assignment Name: Lab 7
*/


#include <iostream>
#include <list>
using namespace std;

template <class T>
class Queue{
private:
  list<T> * queue;

public:

  Queue();
  ~Queue();
  int size();
  bool empty();
  void push(T value);
  void enqueue(T value);
  void pop();
  void dequeue();
  T & front();
};

template <class T>
Queue<T>::Queue(){

	queue = new list <T>();

}
template <class T>
Queue<T>::~Queue(){

	delete queue;
}
template <class T>
int Queue<T>::size(){

	return queue->size();
}
template <class T>
bool Queue<T>:: empty(){

	return queue->empty();
}
template <class T>
void Queue<T>::push(T value){
	queue->push_back(value);

}
template <class T>
void Queue<T>::pop(){
	queue->pop_front();

}

template <class T>
void Queue<T>::enqueue(T value){
	push(value);

}

template <class T>
void Queue<T>::dequeue(){
	pop();
}
template <class T>
T & Queue<T>::front(){
	return queue->front();
}
