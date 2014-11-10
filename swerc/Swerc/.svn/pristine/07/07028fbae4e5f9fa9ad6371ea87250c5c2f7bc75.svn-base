/**
   \author Pablo Cabeza García
 */
#include <algorithm>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int suma(int a,int b) { return a + b; }
int resta(int a,int b){ return a - b; }
int mult(int a,int b) { return a * b; }

int main(){
    int var[5];
    int N,M,act,aux1,aux2;
    string exp;

    stack<int> val;
    stack<int(*)(int,int)> op;

    bool possible;
    char const* c="";

    while((cin >>N >>M) && (N||M)){
	possible=false;
	if(N==0) break;

	var[0]=M;
	for(int i=1;i<N;i++) cin >> var[i];
	cin >> M;

	sort(var,var+N);	    
	cin >> exp;
	do{
	    act=0;
	    for(int i=0;i<exp.size();i++){
		if(exp[i]=='(');
		else if(exp[i]=='-') op.push(resta);
		else if(exp[i]=='+') op.push(suma);
		else if(exp[i]=='*') op.push(mult);
		else if(exp[i]==')'){
		    aux2=val.top(); val.pop();
		    aux1=val.top(); val.pop();		    
		    val.push(op.top()(aux1,aux2));
    		    op.pop();
		}
		else val.push(var[act++]);
	    }

	    aux1=val.top(); val.pop();
	    if(aux1==M){
		possible=true;
		break;
	    }
	}while(next_permutation(var,var+N));
	    
	if(possible) cout << c << "YES";
	else cout <<  c << "NO";
	c="\n";
    }
    cout << endl;
    return 0;
}
