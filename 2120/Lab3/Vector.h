/*
 * Name: Joseph Barton
 * Date Submitted: 2/10/2017
 * Lab Section: 4
 * Assignment Name: Lab 3
 *
 */

#ifndef VECTOR_H
#define VECTOR_H

#include <algorithm>
#include <iostream>
using namespace std;

template <class Object>
class Vector{

 static const int SPARE_CAPACITY = 1;

 private:

  int theSize;
  int theCapacity;
  Object * objects;

 public:

  typedef Object * iterator;
  typedef const Object * const_iterator;

  explicit Vector( int initSize = 0 ) : theSize( initSize ),
    theCapacity( initSize + SPARE_CAPACITY ){
      objects = new Object[ theCapacity ];
  }

  Vector( const Vector & rhs ) : theSize( rhs.theSize ),
    theCapacity( rhs.theCapacity ), objects( nullptr ){
      objects = new Object[ theCapacity ];
      for( int k = 0; k < theSize; ++k )
        objects[ k ] = rhs.objects[ k ];
  }

  //Implement all of the functions below
  //Do not modify any function prototypes below

  Vector & operator= ( const Vector & rhs ){
    Vector copy = rhs;
    swap(*this, copy);
    return *this;
  }

  ~Vector(){
    delete [] objects;

  }

  Vector( Vector && rhs ) : theSize( rhs.theSize ),
    theCapacity( rhs.theCapacity ), objects( rhs.objects ){
      rhs.objects = nullptr;
      rhs.theSize = 0;
      rhs.theCapacity = 0;

  }

  Vector & operator= ( Vector && rhs ){
    swap(theSize,rhs.theSize);
    swap(theCapacity,rhs.theCapacity);
    swap(objects, rhs.objects);

  }

  void resize( int newSize ){
    if(newSize > theCapacity)
      reserve(newSize * 2);
    theSize = newSize;

  }

  void reserve( int newCapacity ){
    if(newCapacity < theSize)
      return;

   Object *newArray = new Object[newCapacity];
   for(int k = 0; k < theSize; ++k)
      newArray[k] = move(objects[k]);

   theCapacity = newCapacity;
   swap(objects, newArray);
   delete [] newArray;

  }

  Object & operator[]( int index ){
    return objects[index];
  }

  const Object & operator[]( int index ) const{
    return objects[index];
  }

  bool empty( ) const{
    return size() == 0;
  }

  int size( ) const{
    return theSize;
  }

  int capacity( ) const{
    return theCapacity;
  }

  void push_back( const Object & x ){
    if(theSize == theCapacity)
      reserve(2 * theCapacity);
    objects[theSize++] = x;
  }

  void push_back( Object && x ){
    if(theSize == theCapacity )
      reserve(2 * theCapacity);
    objects[theSize++] = move(x);
  }

  void pop_back( ){
    --theSize;
  }

  const Object & back ( ) const{
    return objects[theSize -1];
  }

  iterator begin( ){
    return &objects[0];
  }

  const_iterator begin( ) const{
    return &objects[0];
  }

  iterator end( ){
    return &objects[size()];
  }

  const_iterator end( ) const{
    return &objects[size()];
  }

  void insert(const_iterator position, const Object & val){
    // check to see if vector is empty
    if(empty())
		  push_back(val);
	else
	  {
		long loc = end() - position;
    //check to see if met capacity, if so reserve more
		if(theSize == theCapacity)
			reserve(theCapacity * 2);
      //increase the size
		theSize++;
    // set interator to the next to last element
		iterator i = end() -1;
		if(theSize > 0)
		{
      //loop to the position of insert
			for(long a = 1; a <=loc; a++)
				{
					iter_swap(i, i-1);
					i--;
				}
        //insert value into the position
				*i = val;
		}
	  }
  }

  void insert(const_iterator position, int n, const Object & val){
	for(int i = 0; i < n; i++)
	{
		insert(position + i, val);
	}
  }

  void erase(const_iterator position){
	iterator i = (iterator) position;
  // empty vector cant erase
	if(empty())
	{
		return;
	}
	else
	{
    //set loc to the position to be erased
		long loc = end()-position;
		theSize--;
// check to see that you are at position of deletion
	if(theSize > 0)
	{
    //loop through switching out the values with the one to be erased
		for(long b = 1; b <=loc; b++)
		{
			iter_swap(i, i+1);
			i++;
		}
	}
	}
  }

  void erase(const_iterator first, const_iterator last){
	for(long c = 0; c < last - first; c++)
	{
		erase(first);
	}

  }

};//end of Vector class

#endif
