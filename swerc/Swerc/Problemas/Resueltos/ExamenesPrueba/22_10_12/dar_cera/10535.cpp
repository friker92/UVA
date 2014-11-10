#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <algorithm>
#define PI atan(1.0f)*4.0f

bool operator < (const pair<long double,bool> &a1,const pair <long double,bool> &a2){
    if(a1.first<a2.first)
        return true;
    else if(a1.first==a2.first)
        return a1.second;
    else
        return false;
}

vector< pair<pair<long double,long double> , pair<long double, long double> > > prepuntos;

void guardarPuntos();
bool cruzaOX(long double a1,long double a2,long double b1,long double b2);
bool read();
vector< pair<long double, bool> > walls;
int n0;

int main(){
    
    while(read()){
        //ordeno
        sort ( walls.begin(), walls.end());
        
        int maxParedes=n0;
        int paredes=n0;
        for(int i=0; i<walls.size(); i++){
            if(walls[i].second)
                paredes++;
            else
                paredes--;
            
            if(maxParedes<paredes)
                maxParedes=paredes;
        }
        
        cout << maxParedes << endl;
   }
    return 0;
}

bool read(){
    n0=0;
    prepuntos=vector< pair<pair<long double,long double> , pair<long double, long double> > > ();
    
    int numCasos;
    cin >> numCasos;
    
    if(numCasos==0)
        return false;
    
    walls = vector< pair<long double,bool> >();
    
    for(int i=0; i<numCasos; i++){
        int a1,a2,b1,b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        pair<long double,long double> k1,k2;
        
        k1 = pair<long double,long double> (a1,a2);
        k2 = pair<long double,long double> (b1,b2);
        pair<pair<long double,long double> , pair<long double, long double> > aux =pair<pair<long double,long double> , pair<long double, long double> >(k1,k2);
        prepuntos.push_back(aux);
    }
    
    int m,n;
    cin >> m >> n;
    for(int i=0; i<prepuntos.size(); i++){
        pair<pair<long double,long double> , pair<long double, long double> > aux = prepuntos[i];
        aux.first.first=aux.first.first-m;
        aux.first.second=aux.first.second-n;
        
        aux.second.first=aux.second.first-m;
        aux.second.second=aux.second.second-n;
        
        prepuntos[i]=aux;
    }
    
    guardarPuntos();
}

void guardarPuntos(){
    
    for(int i=0; i<prepuntos.size(); i++){
        pair<long double,bool> punto1,punto2;
        punto1 = pair<long double, bool> (atan2(prepuntos[i].first.first,prepuntos[i].first.second)+PI,true);
        punto2 = pair<long double, bool> (atan2(prepuntos[i].second.first,prepuntos[i].second.second)+PI,true);

	if(punto1.first==2*PI) punto1.first=0;
	if(punto2.first==2*PI) punto2.first=0;

        if(punto1>punto2)
            swap(punto1,punto2);

        if(!cruzaOX(prepuntos[i].first.first,prepuntos[i].first.second,prepuntos[i].second.first,prepuntos[i].second.second)){
            punto1.second=true;
            punto2.second=false;
        }
        else{       
            n0++;
            punto1.second=false;
            punto2.second=true;
        }

        walls.push_back(punto1);
        walls.push_back(punto2);
    }
    
    prepuntos=vector< pair<pair<long double,long double> , pair<long double, long double> > > ();
}

bool cruzaOX(long double a1,long double a2,long double b1,long double b2){
   if((b2>=0 && a2<=0) || (b2<0 && a2>=0)){
       if((((0-a2)/(b2-a2))*(b1-a1))+a1<0)
           return false;
       else
           return true;
   }
   else
       return false;
}
