#include <cmath> //log10,pow,floor
#include <cstring> //memset
#include <string> //string class
#include <sstream> //stringstream class
#include <algorithm> //max and min
using namespace std;

const int NUM=25; //number of elementes in array

typedef long long int base_t;
const base_t BASE=pow(10,floor(log10(2)*4*sizeof(base_t)));
const int zeros=log10(BASE);

struct longint{
    longint(long long int i=0) :used(0),sign((i>=0)?1:-1){
	memset(inner,0,NUM*sizeof(base_t));
	i*=sign;
	for(;i>=BASE;i=i/BASE)
	    inner[used++]=i%BASE;
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
	for(int i=0;i<m->used; i++)
	    for(base_t j=0,carry=0 ; j<=(min(M->used,NUM-i-1)) ; j++){
		carry=(res.inner[j+i]=(M->inner[j]*(m->inner[i]))+carry)/BASE;
		res.inner[j+i]%=BASE;
	    }	
	res.used=min(M->used+m->used,NUM);
        while(res.used && !res.inner[res.used-1]) --res.used;
	res.sign=sign*b.sign; 
	return res;
    }

    string str() const{
	stringstream ss;
	ss << sign*inner[used-1];
	for(int i=used-2;i>=0;i--){
	    int cfr= inner[i] ? floor(log10(inner[i]))+1 : 1;
	    for(int j=cfr;j<zeros;j++) ss << 0;
	    ss << inner[i];
	}
	return ss.str();
    }

    char sign; //sign bit
    int used; //number of base_t in used
    base_t inner[NUM]; //base array
};

longint operator+(long long int i, const longint& l){ return l+i; }
longint operator*(long long int i,const longint& l){ return l*i; }
longint operator-(long long int i,const longint& l){ return longint(i)-l;}
