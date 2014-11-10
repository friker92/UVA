#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

vector<string> &split(const string &s, char delim, vector<string> &elems) {
    stringstream ss(s);
    string item;
    while(getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}


vector<string> split(const string &s, char delim) {
   vector<string> elems;
    return split(s, delim, elems);
}

int main(){
	vector<string> words;
	string str;
	while(getline(cin,str)){
		words = split(str,' ');
		for (int i = 0; i < words.size(); i++){
			if(i) cout << " ";
			for(int j = 0; j < words[i].size(); j++){
				cout << words[i][words[i].size()-1-j];
			}
		}
		cout << endl;
	}

	return 0;
}