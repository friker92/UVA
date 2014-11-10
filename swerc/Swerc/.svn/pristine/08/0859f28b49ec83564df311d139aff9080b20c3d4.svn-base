#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;


void print(short int c){
    printf(" %hi",c);
}

int main(){
    long long int people;
    vector<short int> p;
    char const * c="";
    while((scanf("%lli",&people)) && people){
	p.resize(people);
	while(people--){
	    scanf("%hi",&p[people]);
	}
	sort(p.begin(),p.end());
	printf("%s%hi",c,p[0]);
	for_each(p.begin()+1,p.end(),print);
	c="\n";
    }
    printf("\n");
    return 0;
}
