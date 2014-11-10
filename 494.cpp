/*#include <iostream>
#include <string>
using namespace std;

int main(){
	char actu=' ';
	string line;
	int max=0, act=0;
	while (getline(cin,line)){
		max=act=0;
		for (int i = 0; i < line.size(); i++){
			if (line[i]>='a' && line[i]<='z'){
				line[i]-=32;
			}
			if (line[i]>='A' && line[i]<='Z'){
				if(actu==line[i]){ ++act;
					if (act > max) max = act;
					
				}
				else { 
					act = 1;
				}
			}
			else act = 0;
			//cout << line[i] << " - " << act;
			actu=line[i];
		}
		cout << max << endl;
	}
	return 0;
}*/


#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
bool esletra (char&a){
	return (a>='a' && a<='z' )||(a>='A' && a<='Z');
}
int main()
{
    string str;
    while ( getline(cin,str))
    {
          int i=0,count=0;
          while ( i<str.length())
          {
                if( esletra(str[i])) 
                {
                    count++;
                    while( esletra(str[i]))
                    {
                           i++;
                           if(i>=(str.length()))
                           break;
                    }
                    i--;
                }
                i++;
          }
          cout<<count<<endl;
    }
    return 0;
}