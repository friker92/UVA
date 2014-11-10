#include <stdio.h>
#include <string>
#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

int main(){
	char abcd[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int abc[26];// a b c d e f g h i j k l m n o p q r s t u v w x y z
	int n;
	string str;
	cin >> n;
	memset(abc, 0, sizeof abc);
	n++;
	while (n--){
		getline(cin,str);
		for (int i = 0; i < str.size(); i ++){
			if (str[i] >= 'a' && str[i] <= 'z') {
             str[i] -= 32;
			}
			if (str[i] >= 'A' && str[i] <= 'Z') {
             abc[str[i]-'A']++;
			}
		}
	}
	int temp;
	char tempo;
	for (int i=1; i<26; i++)
          for (int j=0 ; j<26 - 1; j++)
               if (abc[j] < abc[j+1]){
                    temp = abc[j];
                    abc[j] = abc[j+1];
					abc[j+1] = temp;
					tempo = abcd[j];
                    abcd[j] = abcd[j+1];
					abcd[j+1] = tempo;
			   }
	for (int i = 0 ; i < 26; i ++){
		if (abc[i]!=0) cout << abcd[i] << " " << abc[i] << endl;
	}

	return 0;
}