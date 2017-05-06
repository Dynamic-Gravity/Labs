/*************************
Name: Joseph Barton
Date Submitted: 2/22/2017
Lab Section: 4
Assignment Name: Lab 5
*************************/

/***********************
The program runs in O(log n) because of the 
number is being divided by the base each interator of the loop.
***********************/

#include <iostream>
#include <stack>
using namespace std;

void convert(int a, int b);

int main(int argc, char * argv[]){
	int number = atoi(argv[1]);
	int base = atoi(argv[3]);
  cout << "Converting from " << number << " base 10 " <<  "to base " << base << " is: " ;
	convert(number, base);
}

void convert(int num, int b){
	stack <int> form;
	int temp = 1;
	while(num > 0){
		temp =  num % b;
    num /= b;
		form.push(temp);
	}
	while(!form.empty()){

		if(form.top() < 10)
       cout << form.top();
    else
        cout << char(form.top()+ 55);
		form.pop();
	}
  cout << endl;
}