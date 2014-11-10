//CREO QUE ESTA SIN HACER

#include <iostream>
#include <cmath>
using namespace std;

const unsigned long long int MAX = 2147483647;
const int ROOT = 47000; //(int)(sqrt(MAX)+1);
bool primos[ROOT]; 

int inf , sup;

void init();
void solve();

int main()
{
    init();

    while((cin >> inf) && (cin >> sup))
    {
        solve();
		cin.clear();
		cin.sync();
    }

    return 0;

}

void init()
{
    for (int i = 0; i < ROOT; i++)
    {
        primos[i]=true;
    }

    primos[0] = false;
    primos[1] = false;
    int tope = 2;
    while (tope < ROOT)
    {
        if (primos[tope])
        {
			//if (tope < 4000) {
            //cout << tope << " ";
			//}
            int numero = tope*2;
            while (numero < ROOT)
            {
                primos[numero] = false;
                numero+=tope;
            }
        }
        tope++;
        
    }
}

void solve()
{
    int lenght = sup-inf+1;
    bool *arrayprimos;
    arrayprimos = new bool[lenght];

    for (int i = 0; i < lenght;i++)
    {
        arrayprimos[i] = true;
    }
	if (inf < 2) {
		if (inf == 0) {
			arrayprimos[1] = false;
		}
		arrayprimos[0] = false;
	}

    int tope = ceil(sqrt(double(sup)));
    for (int i = 2, j = 0; i <= tope; i++)
    {
        if (primos[i])
        {
            int num = (inf/i)*i;
            num = num - inf;
            while (num < lenght)
            {
				if (i != num+inf && (num >= 0) && (num < lenght)) {
					
					arrayprimos[num] = false;
				}
                num+=i;
            }
        }
    }
    





    int j = 0;
    while (j < lenght && !arrayprimos[j])
    {
        j++;
    }
     
	int prevind = j, indmin = j, minlenght = 3000000;
    int i = j+1;
    for (i; i < lenght && minlenght > 2; i++) {
        if (arrayprimos[i])
        {
            if ( (i-prevind) <minlenght)
            {
                indmin = prevind;
                minlenght = i-prevind;
            }
        prevind = i;
        }
    }
    int k = lenght-1;
    while (k >=0 && !arrayprimos[k])
    {
        k--;
    }

	/*for (int i = 0; i < lenght; i++) {
		if (arrayprimos[i]) {
			cout << i+inf << " ";
		}
	}*/
	//cout << "\n";
	if (minlenght > 1500000) {
		cout << "There are no adjacent primes.\n";
	} else {
		cout << indmin+inf << "," << indmin+minlenght+inf << " are closest, ";
		cout << j+inf << "," << k+inf << " are most distant.\n";
	}
   //cout << arrayprimos[j] << " " << arrayprimos[k] << "\n" << arrayprimos[i] << " " << arrayprimos[i+minlenght] << "\n\n";
   
   //delete[] arrayprimos;
   
}
