/*#include <iostream>
#include <string>
using namespace std;


int buscaFrase(string texto, int pos, int tam1, string palabra, int next, int tam2){
	int contador = 0;
	bool ultima = false;
	if(next+1 == tam2) ultima = true;
	for ( int i = pos; i < (tam1-(tam2-next)+1);i++){
		if (texto[i] == palabra[next]) {
			if(ultima){
				contador++;
			} else{
				contador += buscaFrase(texto,i+1,tam1,palabra,next+1,tam2);
			}
		}
	
	}
	return contador;
}


int main(){
	int n,tam1,tam2,num;
	string texto,palabra;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> texto;
		cin >> palabra;
		tam1 = texto.size();
		tam2 = palabra.size();
		num = buscaFrase(texto,0,tam1,palabra,0,tam2);
		cout << num << endl;
	}
	return 0;
}
*/

#include <cstdlib>
#include <map>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main() 
{
    map<long int, long int> mymap;
    map<long int, long int>::iterator it;
    
    long int numActual;
    
    while (cin >> numActual)
    {
        it = mymap.find(numActual);
        if (it != mymap.end()) // existe
        {
            mymap.insert(pair<long int,long int>(numActual, (mymap.find(numActual)->second) + 1));
        }
        else
        {
            long int num = 1;
            mymap.insert(pair<long int,long int>(numActual, num));
        }
    }    
        
    map<long int, long int>::iterator it2;
    
    for (it2 = mymap.begin(); it2 != mymap.end(); it2++)
    {  
        cout << (*it2).first << " " << (*it2).second << endl;
    }   
    
    
    
    
    return 0;
}

