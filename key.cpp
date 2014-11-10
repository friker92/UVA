#include <iostream>
#include <string>
using namespace std;

int main(){
	string texto="";
	getline(cin,texto);
	while(!cin.eof() && !cin.fail()){
		string resultado ="";
		bool inicio=true;
		size_t found = texto.find_first_of("[]");
		resultado = texto.substr(0,found);
		size_t otro = found+1;
		while (found!=string::npos)
		{
			if(texto[found] == '[') inicio = true;
			else if(texto[found] == ']') inicio = false;
			texto[found]='*';
			otro = found+1;
			found=texto.find_first_of("[]");
			if (inicio) resultado = texto.substr(otro,found-otro) + resultado;
			else resultado = resultado + texto.substr(otro,found-otro);
			//cout << resultado << endl;
		}

		cout << resultado <<endl;
		//cin >> texto;
		getline(cin,texto);
	}
	return 0;
}