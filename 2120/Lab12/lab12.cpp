/* Name: Joseph Barton
*Date Submitted: 4/21/2017
*Lab Section: 4
*Assignment: Lab 12
*/
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <math.h>

using namespace std;

void quickSort(vector <int> &x, int start, int end);
void mergeSort(vector <int> &x,int start, int end);
void merge(vector <int> &x, int start, int end);

int main( int argc, char * argv[]){
	vector <int> container, temp;
	
	for(int i = 1; i < argc; i++){
		container.push_back(atoi(argv[i]));
		temp.push_back(atoi(argv[i]));
	}
  int s = container.size() - 1;
	quickSort(container,0, s );
	cout << "Quick Sort = ";
	for(int i = 0; i < int(container.size());i++){
		cout << container[i] << " " ;
	}
	int a = temp.size() -1 ;
	mergeSort(temp,0,a);
	cout << endl << "Merge Sort = ";
	for(int i = 0; i < int(temp.size());i++){
		cout << temp[i] << " " ;
	}
	
	cout << endl;
	return 0;
}

void quickSort(vector <int> &x, int start, int end){
    int i = start;
    int j = end - 1;
    int size = end - start;
    if(size > 1){
       int pivot = x[rand() % size + 1];
        
        while ( i < j){
            while (x[j] > pivot && j > 1)
            j--;
            while (x[i] <pivot && i <= j)
            i++;
            if(i < j){
            swap(x[i], x[j]);
            i++;
            }
        }
        quickSort(x, start, i);
        quickSort(x, j, end);
    }	
}
void mergeSort(vector <int> &x,int start, int end){
  if(start < end){
      int mid = floor((start + end ) / 2);
      mergeSort(x, start, mid);
      mergeSort(x, mid+1,end);
      merge(x,start,end);
  }
}

void merge(vector <int> &x, int start, int end){
  vector <int> temp( end - start + 1);
  int mid = floor(( start + end) / 2);
  int i,j,k;
  i = 0;
  j = start;
  k = mid +1;
  
  while(j <= mid && k <= end){
      if(x[j] < x[k])
        temp[i++] = x[j++];
      else
        temp[i++] = x[k++];
  }
  
  while(j<=mid)
  temp[i++] = x[j++];
  
  while(k<=end)
  temp[i++] = x[k++];
  
  for(int i = start; i <=end; i++)
  x[i] = temp[i - start];

}
