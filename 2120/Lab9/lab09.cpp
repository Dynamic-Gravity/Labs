/*
* Name:Joseph Barton
* Date Submitted: 3/31/2017
* Lab Section: 4
* Assignment Name: Lab 9
*/
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

//map.insert returns pair
//pair first iterator pointing to new item
//pair second bool (true if inserted, false if found)

//map.erase returns # items erased

//map.find returns iterator pointing to found item

//mypair (mypair.first)

int main(int argc, char * argv[]){
	map <string, string> m;
	pair<map<string,string>::iterator,bool> ret;
	string token, user, pw;
	ifstream in(argv[1]);
	 while(in >> token){
		if(token == "insert"){
			in >> user;
			in >> pw;
			ret = m.insert(pair<string,string>(user,pw));
			if(ret.second == true)
				cout  << "insert " << user << " successful" << endl;
     else
        cout << "insert " << user << " unsuccessful because it is a duplicate" << endl;        
		}
		if(token == "select"){
			in >> user;
			in >> pw;
			auto it = m.find(user);
          if(it == m.end())
					  cout << "select " << user << " unsuccessful because it is not in the database" << endl;
			    else if(it->second == pw)
					  cout << "select " << user << " and its password successful" << endl;
					else if(it->second !=pw)
					  cout << "select " << user << " unsuccessful because its password was incorrect" << endl;

		}
		if(token == "delete"){
			in >> user;
			auto it = m.erase(user);
			if(it > 0)
				cout << "delete " << user << " successful" << endl;	
				else
				cout << "delete " << user << " unsuccessful because it is not in the database" << endl;
		}
	 }
  return 0;
}
