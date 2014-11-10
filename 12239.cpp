#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <set>
using namespace std;

int main()
{
	int N, B, val, tmp;
	while( scanf("%d %d", &N, &B) && !( !N && !B)){
		int vec[91],k=0;
		set<int> bolas;
		for(int x=0; x<B; x++){
			scanf("%d", &val);
			vec[k]=val;
			k++;
		}
		for(int i=0; i<k; i++){
			for(int j=0; j<k; j++){
				tmp = abs(vec[i] - vec[j]);
				bolas.insert(tmp);
			}
		}
		if(bolas.size() == N+1)
		   printf("Y\n");
		else printf("N\n");
	}
	return 0;
}