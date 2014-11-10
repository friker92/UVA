
#include <iostream>
using namespace std;

bool read();

long long int m,n;

int main(){
    
    int numCaso=0;
    while(read()){
        numCaso++; 
        long long int a=((n-1)*n)/2;
        long long int b=((m-1)*m)/2; 
        
        cout << "Case " << numCaso << ": " << a*b << endl;
    }
    return 0;
}

bool read(){
    cin >> m >> n;
    
    if(m==0 && n==0)
        return false;
    else
        return true;
}