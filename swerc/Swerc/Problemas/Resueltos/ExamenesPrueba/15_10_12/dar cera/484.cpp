#include<map>
#include <vector>
#include <iostream>
//#include <pair>
using namespace std;

map<int,long long int> mapa = map<int,long long int>();
vector<int> numOrd = vector<int>();

int main() {
    int number;
    while(cin >> number)
    {
        map<int, long long int>::iterator it=mapa.find(number);
        if(it==mapa.end()){ //no está
            //insertamos en el map
            mapa.insert(pair<int,long long int>(number,1));
            //insertamos en el vector
            numOrd.push_back(number);
        } 
        else { //esta
            mapa.at(number)++;
        }
    }
      
    for(vector<int>::iterator it=numOrd.begin(); it!=numOrd.end(); it++){
        cout << *it << " " << mapa.at(*it) << endl;
    }
    return 0;
}

