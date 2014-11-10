#include <algorithm>

#include <string>
#include <iostream>

using namespace std;

int towers[2][100];
int tables[101][101];

int main(){
    int N,M,num=1;

    for(int i=0;i<101;i++) tables[i][0]=0;
    for(int j=0;j<101;j++) tables[0][j]=0;

    while((cin >> N >> M) && (N||M)){
	for(int j=0;j<N;j++) cin >> towers[1][j];
	for(int i=0;i<M;i++) cin >> towers[0][i];

	for(int i=1;i<=M;i++)
	    for(int j=1;j<=N;j++){
		if(towers[0][i-1]==towers[1][j-1]) 
		    tables[i][j]=1+tables[i-1][j-1];
		else tables[i][j]=max(tables[i-1][j],tables[i][j-1]);
	    }
		
	cout << "Twin Towers #" << num++ << '\n'
	     << "Number of Tiles : " << tables[M][N] << "\n\n";
    }
    cout << flush;

    return 0;
}
