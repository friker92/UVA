#include <iostream>
#include <vector>
#include <stack>
#include <utility>
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;

//calcula la primera LIS que vale. Tuneese como corresponda.
void dplis(){
	int n=8;
	int sec[]={-7,10,9,2,3,8,8,1};
	int tam[8]; //tamaño de la LIS que termina en i
	int prev[8]; //contiene el predecesor de i en la LIS que termina en i
	vector<int> lis;
	stack<int> st;
	int bestEnd=0;

	tam[0]=1;
	prev[0]=-1; //casos base;

	for(int i=1; i<n; i++){
		tam[i]=1;
		prev[i]=-1;
		for(int j=0; j<i; j++) if(sec[j]<sec[i] && tam[j]+1>tam[i]){
			tam[i]=tam[j]+1;
			prev[i]=j;
	}	}

	for(int k=0; k<n; k++) if(tam[k]>tam[bestEnd]) bestEnd=k;

	//deshacer el camino de la LIS empezando en bestEnd.

	while(bestEnd!=-1){
		st.push(bestEnd);
		bestEnd=prev[bestEnd];
	}
	while(!st.empty()){
		cout<<st.top()<<" ";
		lis.push_back(st.top());
		st.pop();
	}//enhorabuena, en lis tienes tu LIS
}

//calcula la primera LCS que vale. (como subsecuencia)
void lcd() {
	const int n=9, m=10;
	int a[]={1,4,5,3,7,9,4,7,0};
	int b[]={7,5,3,7,9,1,4,2,0,5};
	int tabla[100][100]; //tamaño de la maxima LCS entre las subcadenas que empiezan en i y j
	ii next[100][100]; //principio de la LCS en ambas subcadenas
	int i,j;

	memset(tabla,0, sizeof tabla);

	for(i=0; i<n; i++) tabla[i][m-1]=(a[i]==b[m-1])?1:0;
	for(j=0; j<m; j++) tabla[n-1][j]=(a[n-1]==b[j])?1:0;

	for(i=n-1; i>=0; i--) for(j=m-1; j>=0; j--) if(a[i]==b[j]){
		tabla[i][j]=tabla[i+1][j+1]+1;
		next[i][j]=make_pair(i+1,j+1);
	}else if(tabla[i][j+1]>tabla[i+1][j]){
		tabla[i][j]=tabla[i][j+1];
		next[i][j]=next[i][j+1];
	}else{
		tabla[i][j]=tabla[i+1][j];
		next[i][j]=next[i+1][j];
	}
	cout<<tabla[0][0]<<endl;

	for(i=0; i<n; i++) {for(j=0; j<m; j++)
	{
		cout<<'('<<next[i][j].first<<','<<next[i][j].second<<") ";
	}cout<<endl;}

	ii indice=(a[0]==b[0])?make_pair(0,0):next[0][0];

	while(indice.first || indice.second)
	{
		cout<<indice.first<<" "<<indice.second<<endl;
		indice=next[indice.first][indice.second];
	}
}

//calcula la primera LCSS que vale. (subcadena, no subsecuencia)
//(en realidad, se resuelve en O((n+m)log(n+m)) usando un suffix array)
void dplcss()
{
	const int n=9, m=10;
	int a[]={1,4,5,3,7,9,4,7,0};
	int b[]={7,5,3,7,9,1,4,2,0,5};
	int tabla[100][100]; //tamaño de la coincidencia entre a[i] y b[j]
	int i,j;
	int bestA=0, bestB=0;

	for(i=0; i<n; i++) tabla[i][m-1]=(a[i]==b[m-1])?1:0;
	for(j=0; j<m; j++) tabla[n-1][j]=(a[n-1]==b[j])?1:0;

	for(i=n-1; i>=0; i--) for (j=m-1; j>=0; j--)
		tabla[i][j]=(a[i]==b[j])?tabla[i+1][j+1]+1:0;
	
	for(i=0; i<n; i++) for(j=0; j<m; j++) if(tabla[bestA][bestB]<tabla[i][j]){
		bestA=i; bestB=j;
	}
	cout<<bestA<<" "<<bestB<<" "<<tabla[bestA][bestB];
	//tu LCS empieza en bestA,bestB y tiene tamaño tabla[bestA][bestB];
}
