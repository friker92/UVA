/**
   \author Pablo Cabeza García
   \brief double queue with "priority input" when '[' is found until ']' 
*/

#include <deque>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main(){
    string line;
    stringstream sstream;
    deque<char> text;
    int index,size;

    while(getline(cin,line)){
	sstream.str(string());
	text.clear();
	size=line.size();
	index=-1;

	for(int i=0;i<size;i++){
	    if(line[i]==']'){
		if(index!=-1){
		    for(int j=i-1;j>index;j--) text.push_front(line[j]); 
		    index=-1;
		}
	    }
	    else if(line[i]=='['){
		if(index!=-1)
		    for(int j=i-1;j>index;j--) text.push_front(line[j]); 
		index=i;
	    }
	    else if(index==-1) text.push_back(line[i]);
	}
	if(index!=-1) 
	    for(int j=size-1;j>index;j--) text.push_front(line[j]);
    

	deque<char>::iterator end=text.end();
	for(deque<char>::iterator it=text.begin();it!=end;it++)
	    sstream << *it;
	
	cout << sstream.rdbuf() << "\n";
    }
    cout << flush;
    return 0;
}
