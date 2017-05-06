/*Name: Joseph Barton
*Date Submitted: 4/10/2107
*Lab Section: 4
* Assignment: Lab 11
*/
#include <iostream>
#include <string>
#include <queue>          // priority_queue
#include <vector>        
#include <functional>     // greater
#include <set>            // multiset            
using namespace std;

//Sorts v in ascending order.
// This fuction must use a priority_queue that uses a min heap.
void heapSortAscending(vector<int> &v);

//Sorts v in descending order.
// This function must use a priority_queue that uses a max heap.
void heapSortDescending(vector<int> &v);

//Sorts v in ascending order.
// This fuction must use a multiset, which is a balanced binary search tree
// that allows duplicates.
void treeSortAscending(vector<int> &v);

//Sorts v in descending order.
// This fuction must use a multiset, which is a balanced binary search tree
// that allows duplicates.
void treeSortDescending(vector<int> &v);

//Print v's values and v's label to stdout.
//  Function already implemented (do not modify this function).
void printVector(const vector<int> &v, const string label){
  cout << label;
  for(int i : v) cout << i << " ";
  cout << endl;
}

//Run the sort functions using command line arguments as inputs
int main(int argc, char * argv[]){

  vector<int> v1, v2, v3, v4;
  for(int i = 1; i < argc; i++){
    v1.push_back(atoi(argv[i]));
    v2.push_back(atoi(argv[i]));
    v3.push_back(atoi(argv[i]));
    v4.push_back(atoi(argv[i]));
  }

  heapSortAscending(v1);
  printVector(v1, "Heap sort  (ascending) = ");

  treeSortAscending(v2);
  printVector(v2, "Tree sort  (ascending) = ");

  heapSortDescending(v3);
  printVector(v3, "Heap sort (descending) = ");

  treeSortDescending(v4);
  printVector(v4, "Tree sort (descending) = ");

  return 0;
}

//Implement all the functions below

//Sorts v in ascending order.
// This fuction must use a priority_queue that uses a min heap.
void heapSortAscending(vector<int> &v){
  priority_queue<int, vector<int>,greater<int>>minHeap;
  //inserting into heap
  for(size_t i = 0; i < v.size(); i++){
	  minHeap.push(v[i]);
  }
  //sorting into heap smallest first
  for(size_t i = 0; i < v.size(); i++){
	  v[i] = minHeap.top();
	  minHeap.pop();
  }
}

//Sorts v in descending order.
// This function must use a priority_queue that uses a max heap.
void heapSortDescending(vector<int> &v){
  priority_queue<int> maxHeap;
  //inserting into heap
    for(size_t i = 0; i < v.size(); i++){
	  maxHeap.push(v[i]);
  }
  //sorting into heap largest first
  for(size_t i = 0; i < v.size(); i++){
	  v[i] = maxHeap.top();
	  maxHeap.pop();
  }


}

//Sorts v in ascending order.
// This fuction must use a multiset, which is a balanced binary search tree
// that allows duplicates.
void treeSortAscending(vector<int> &v){
	multiset <int> myset;
	multiset <int>::iterator it;
  int b = 0;
 //inserting into multiset
	for(size_t i = 0; i < v.size(); i++){
		myset.insert(v[i]);
	}
 //sorting into vector smallest first
	for(it = myset.begin(); it != myset.end(); ++it){
		v[b] = *it;
		b++;
	}

}

//Sorts v in descending order.
// This fuction must use a multiset, which is a balanced binary search tree
// that allows duplicates.
void treeSortDescending(vector<int> &v){
	multiset <int> myset;
	multiset <int>::iterator it;
 //inserting into multiset
	for(size_t i = 0; i < v.size(); i++){
		myset.insert(v[i]);
	}
	size_t b =v.size()-1;
 //sorting into vector largest first
	for(it = myset.begin(); it != myset.end(); ++it){
		v[b] = *it;
		b--;
	}
}


