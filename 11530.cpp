#include <iostream>
#include <string>
using namespace std;
int main(){
	int T,cont=1;
	unsigned long long int sum=0;
	string str;
	cin >> T;
	cin.ignore();
	while(T--){
		sum=0;
		getline(cin,str);
		for(int i=0; i< str.length();i++){
			if(str[i]=='a'||str[i]=='d'||str[i]=='g'||str[i]=='j'||
				str[i]=='m'||str[i]=='p'||str[i]=='t'||str[i]=='w'||str[i]==' ')
				sum+=1;
			else if(str[i]=='b'||str[i]=='e'||str[i]=='h'||str[i]=='k'||
				str[i]=='n'||str[i]=='q'||str[i]=='u'||str[i]=='x')
				sum+=2;
			else if(str[i]=='c'||str[i]=='f'||str[i]=='i'||str[i]=='l'||
				str[i]=='o'||str[i]=='r'||str[i]=='v'||str[i]=='y')
				sum+=3;
			else if(str[i]=='s'||str[i]=='z')
				sum+=4;
		}
		cout << "Case #" << cont++ << ": " << sum << endl;
	}
	return 0;
}