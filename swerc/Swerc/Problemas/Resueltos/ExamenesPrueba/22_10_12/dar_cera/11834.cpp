#include <iostream>
using namespace std;

bool read();

int a,b,r,s;

int main(){
    
    while(read()){
        unsigned int resultado1,resultado2;
        resultado1=(r+s)*(r+s);
        resultado2=((b-r-s)*(b-r-s))+((a-r-s)*(a-r-s));
        
        if(a<2*r||a<2*s||b<2*r||b<2*s||(b-r-s)<0 || (a-r-s)<0)
            cout << "N" << endl;
        else if(resultado1 <= resultado2)
            cout << "S" << endl;
        else
            cout << "N" << endl; 
    }
 
    return 0;
}

bool read(){
    cin >> a >> b >> r >> s;
    
    if(a==0 && b==0 && r==0 && s==0)
        return false;
    else
        return true;
}
