/* author: Paco Criado
 * Estaria bien hacer que visual studio hiciera esto solo
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int r;// 0<r<500

	int relatives[500]; // 0<relatives[i]<30000

	int numCases;

	int result, dirHome;

	cin>>numCases;

	for(int i=0; i<numCases; i++)
	{
		cin>>r;

		for(int i=0; i<r; i++) cin>>relatives[i];

		sort(&relatives[0],&relatives[r]); 
		//la primera vez que uso <algorithm>. Mola bastante

		dirHome=relatives[r/2]; 
		// la idea es que los puntos del "segmento intermedio" son optimos.

		result=0;

		for(int i=0; i<r; i++) result+=abs(dirHome-relatives[i]);

		cout<<result<<endl;
	}
	return 0;
}