#include <iostream>

using namespace std;


int main()
{
	double num, a, b;
	cin >> num;

	while (num != 0)
	{
		int cont = 1;
		double numMaximo = -1000, cualMaximo;
		while (cont <= num)
		{
			cin >> a >> b;

			if (b > a) swap(a, b); 
			
			// from now on, a is bigger or equal than b

			double bInicial = b;
			if (a / b >= 4) // we can make 4 pieces from the big side
			{
				if (numMaximo < b) 
				{
					cualMaximo = cont;
					numMaximo = b;
				}
			}

			else 
			{
				if (b > a/4)
				{
					if (numMaximo < a/4 || numMaximo < b/2)
					{
						cualMaximo = cont;
							
						if (b/2 > a/4) numMaximo = b/2;
						else numMaximo = a/4;
					}

					
				}
				else
				{
					if (numMaximo < bInicial/2)
					{
						cualMaximo = cont;
						numMaximo = bInicial/2;
					}
				}
			}
			
			cont++;
		}

		cout << cualMaximo << endl;
		
		cin >> num;
	}

	char e;
	cin.get(e);
	return 0;
}