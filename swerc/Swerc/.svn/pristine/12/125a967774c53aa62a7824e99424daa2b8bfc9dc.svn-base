//ESTA SIN HACER

#include <iostream>
using namespace std;
#include <map>

//variables globales
map<int, int> mapa;
int nAristas=0;
int nNodos=0;
int nCase=0;

//funciones
void init();
bool read();
void solve();

int main()
{
	init();
	while(read())
	{
		solve();
		init();
	}
	return 0;
}

void init()
{
	mapa=map<int, int>();
	nAristas=0;
	nNodos=0;
}

bool read()
{
	nCase++;

	int n1,n2;
	cin >> n1 >> n2;

	if(n1==-1 && n2==-1)
		return false;

	while(n1!=0 && n2!=0)
	{
		nAristas++;
		if(mapa.find(n1)==mapa.end())
		{
			mapa[n1]=0;
			nNodos++;
		}
			
		if(mapa.find(n2)!=mapa.end())
			mapa[n2]++;
		else
		{
			nNodos++;
			mapa[n2]=1;
		}

		cin >> n1 >> n2;
	}

	return true;
}

void solve()
{
	//aristas
	if(nNodos!=nAristas+1)
	{
		cout << "Case " << nCase << " is not a tree." << endl;
		return;
	}

	//raiz
	bool encontrado=false;
	for(map<int,int>::iterator it=mapa.begin(); it!=mapa.end(); ++it)
	{
		if(it->second==0 && encontrado)
		{
			cout << "Case " << nCase << " is not a tree." << endl;
			return;
		}
		else if(it->second == 0)
			encontrado = true;
		
		if(it->second>1)
		{
			cout << "Case " << nCase << " is not a tree." << endl;
			return;
		}
	}
	if(!encontrado)
	{
			cout << "Case " << nCase << " is not a tree." << endl;
			return;
	}	

	cout << "Case " << nCase << " is a tree." << endl;

}
