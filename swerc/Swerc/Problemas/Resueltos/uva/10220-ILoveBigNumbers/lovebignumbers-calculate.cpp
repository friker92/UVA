/**
   \author: Pablo Cabeza
   Calculates table of results to problem and prints initialization of table
 */
#include <cstdio>

#include <cmath> //log10,pow,floor
#include <cstring> //memset

#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>

using std::string; //<string>
using std::cout; //<iostream>
using std::stringstream; //<sstream>
using std::min; //<algorithm>
using std::max; //<algorithm>


//Customize
typedef long long int base_t; //base types
const int NUM=300; //number of elementes in array
//end of customization


template <typename T> struct cast{ typedef T type;};
template <> struct cast<char>{ typedef int type;};

typedef cast<base_t>::type conv_t;
const base_t BASE=pow(10,floor(log10(2)*4*sizeof(base_t)));
const int zeros=log10(BASE);

struct longint{
    longint(long long int i=0) :used(0),sign((i>=0)?1:-1){
	memset(inner,0,NUM*sizeof(base_t));
	i*=sign;
	while(i>=BASE){
	    inner[used++]=i%BASE;
	    i=i/BASE;
	}
	inner[used++]=i;
    }

    longint operator+(longint b) const{
	if(sign!=b.sign) return b.sign*=-1,((sign<0)?*this-b: b-*this);
	b.used=min(max(b.used,used)+1 , NUM); base_t carry=0;
	for(int i=0;i<b.used;i++){
	    carry=(b.inner[i]+=inner[i]+carry)/BASE;
	    b.inner[i]%=BASE;
	}
	while(b.used && !b.inner[b.used-1]) --b.used;
	return b;
    }

    longint operator-(longint b) const{
	longint const *m=this,*M=&b;
	if(used>b.used || used==b.used && inner[used-1]>b.inner[used-1]) 
	    M=this,m=&b;
	if(b.sign!=sign) return b.sign*=-1,((*M)+(*m));
	longint res(*M); base_t carry=0;
	for(int i=0;i<=min(m->used,NUM-1);i++)
	    carry=(res.inner[i]-=(m->inner[i]+carry))<0?res.inner[i]+=BASE,1:0;
       	while(res.used && !res.inner[res.used-1]) --res.used;
	return res;
    }

    longint operator*(const longint& b) const{
	longint res;
	longint const *m, *M= (used>b.used)? (m=&b,this) : (m=this,&b);
	for(int i=0;i<m->used; i++){
	    base_t carry=0;
	    for(int j=0;j<=(min(M->used,NUM-i-1));j++){
		carry=(res.inner[j+i]=(M->inner[j]*(m->inner[i]))+carry)/BASE;
		res.inner[j+i]%=BASE;
	    }	
	}
	res.used=min(M->used+m->used,NUM);
        while(res.used && !res.inner[res.used-1]) --res.used;
	res.sign=sign*b.sign; 
	return res;
    }

    stringstream& getsstream(stringstream& ss) const{
	ss << static_cast<conv_t>(sign*inner[used-1]);
	for(int i=used-2;i>=0;i--){
	    int cfr= inner[i] ? floor(log10(inner[i]))+1 : 1;
	    for(int j=cfr;j<zeros;j++) ss << 0;
	    ss << static_cast<conv_t>(inner[i]);
	}
	return ss;
    }

    void show() const{
	stringstream ss;
	cout << getsstream(ss).rdbuf();
    }

    string str() const{
	stringstream ss;
	return getsstream(ss).str();
    }
   
    char sign;
    int used;
    base_t inner[NUM];
};

longint operator+(long long int i, const longint& l){ return l+i; }
longint operator*(long long int i,const longint& l){ return l*i; }
longint operator-(long long int i,longint l){ return longint(i)-l;}

int main(){
    string str; int aux;
    longint l=1;
    printf("{0");
    for(int i=1;i<=1000;i++){
	aux=0; l=l*i;
	str=l.str();
	for(auto s=str.begin();s!=str.end();s++) aux+=*s-'0';
	printf(",%i",aux);
    }
    printf("}");
    return 0;
}
