/*
* Name:Joseph Barton
* Date Submitted: 3/17/2017
* Lab Section: 4
* Assignment Name: Lab 8
*/
#include<iostream>
#include <string>
#include <sstream>
#include <stack>
#include <list>

using namespace std;

//This program will print tokens in argv[1] to stdout
//if each token is separated by a single space
int main(int argc, char * argv[]){
  string token;
  string infix = argv[1];
  stringstream ss(infix);
  stack<string> stax; 
  list<string> output;
  list<string>::iterator it;
  while(getline(ss,token,' ')){
	  stringstream convert(token);
	  double p;
	  convert>>p;
	  if(p > 0)
	      stax.push(token);
	  else if(token == "(")
	      stax.push(token);
	  else if(token == ")"){
	       while(stax.top() != "("){
                  string temp = stax.top(); 
                  output.push_front(temp);
                  stax.pop();
                }     
                stax.pop();
          }
          else if(token == "*"|| "/"|| "+" || "-" ){
	    stax.push(token);
	      if(stax.top()== "*" || "/"){
	        stax.pop();
	        output.push_back(token);	    
	      }
	  }
   }
     while(!stax.empty()){
       if(stax.top() == "*" || "/" || "-" || "+" ){
        output.push_back(stax.top());
        stax.pop();
        }
        else{
	  output.push_back(stax.top());
	  stax.pop();
	   }
     }
     cout<< "Postfix Expression: ";
   for(it = output.begin(); it!=output.end();it++){
     cout << *it << " ";
  }
   cout << endl;
  return 0;
}
