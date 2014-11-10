/**
   \author Pablo Cabeza
*/
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    bool table[5001]=
	{true , true , true , true , true , true , true , true , true
	 , true , true , false , true , true , true , true , true ,
	 true , true , true , true , true , false , true , true , true
	 , true , true , true , true , true , true , true , false ,
	 true , true , true , true , true , true , true , true , true
	 , true , false , true , true , true , true , true , true ,
	 true , true , true , true , false , true , true , true , true
	 , true , true , true , true , true , true , false , true ,
	 true , true , true , true , true , true , true , true , true
	 , false , true , true , true , true , true , true , true ,
	 true , true , true , false , true , true , true , true , true
	 , true , true , true , true , true , false , false , false ,
	 true , true , true , true , true , true , true , true , false
	 , false , false , false , false , false , false , false ,
	 false , false , true , false , false , true , true , true ,
	 true , true , true , true , true , false , true , false ,
	 true , true , true , true , true , true , true , false , true
	 , true , false , true , true , true , true , true , true ,
	 false , true , true , true , false , true , true , true ,
	 true , true , false , true , true , true , true , false ,
	 true , true , true , true , false , true , true , true , true
	 , true , false , true , true , true , false , true , true ,
	 true , true , true , true , false , true , true , false ,
	 true , true , true , true , true , true , true , false ,
	 false , true , false , true , true , true , true , true ,
	 true , true , true , false , false , true , true , true ,
	 true , true , true , true , false , false , false , false ,
	 false , false , false , false , false , false , true , true ,
	 false , false , true , true , true , true , true , true ,
	 true , true , false , true , false , true , true , true ,
	 true , true , true , true , false , true , true , false ,
	 true , true , true , true , true , true , false , true , true
	 , true , false , true , true , true , true , true , false ,
	 true , true , true , true , false , true , true , true , true
	 , false , true , true , true , true , true , false , true ,
	 true , true , false , true , true , true , true , true , true
	 , false , false , true , true , false , true , true , true ,
	 true , true , true , true , false , true , false , true ,
	 true , true , true , true , true , true , true , false ,
	 false , true , true , true , true , true , true , false ,
	 false , false , false , false , false , false , false , false
	 , false , true , true , true , false , false , true , true ,
	 true , true , true , true , true , true , false , true ,
	 false , true , true , true , true , true , true , true ,
	 false , true , true , false , true , true , true , true ,
	 true , true , false , true , true , true , false , true ,
	 true , true , true , true , false , true , true , true , true
	 , false , true , true , true , true , false , true , true ,
	 true , true , true , false , false , true , true , true ,
	 false , true , true , true , true , true , true , false ,
	 true , true , false , true , true , true , true , true , true
	 , true , false , true , false , true , true , true , true ,
	 true , true , true , true , false , false , true , true ,
	 true , true , true , false , false , false , false , false ,
	 false , false , false , false , false , true , true , true ,
	 true , false , false , true , true , true , true , true ,
	 true , true , true , false , true , false , true , true ,
	 true , true , true , true , true , false , true , true ,
	 false , true , true , true , true , true , true , false ,
	 true , true , true , false , true , true , true , true , true
	 , false , true , true , true , true , false , false , true ,
	 true , true , true , false , true , true , true , true , true
	 , false , true , true , true , false , true , true , true ,
	 true , true , true , false , true , true , false , true ,
	 true , true , true , true , true , true , false , true ,
	 false , true , true , true , true , true , true , true , true
	 , false , false , true , true , true , true , false , false ,
	 false , false , false , false , false , false , false , false
	 , true , true , true , true , true , false , false , true ,
	 true , true , true , true , true , true , true , false , true
	 , false , true , true , true , true , true , true , true ,
	 false , true , true , false , true , true , true , true ,
	 true , true , false , true , true , true , false , false ,
	 true , true , true , true , true , false , true , true , true
	 , true , false , true , true , true , true , false , true ,
	 true , true , true , true , false , true , true , true ,
	 false , true , true , true , true , true , true , false ,
	 true , true , false , true , true , true , true , true , true
	 , true , false , true , false , true , true , true , true ,
	 true , true , true , true , false , false , true , true ,
	 true , false , false , false , false , false , false , false
	 , false , false , false , true , true , true , true , true ,
	 true , false , false , true , true , true , true , true ,
	 true , true , true , false , true , false , true , true ,
	 true , true , true , true , true , false , true , true ,
	 false , false , true , true , true , true , true , true ,
	 false , true , true , true , false , true , true , true ,
	 true , true , false , true , true , true , true , false ,
	 true , true , true , true , false , true , true , true , true
	 , true , false , true , true , true , false , true , true ,
	 true , true , true , true , false , true , true , false ,
	 true , true , true , true , true , true , true , false , true
	 , false , true , true , true , true , true , true , true ,
	 true , false , false , true , true , false , false , false ,
	 false , false , false , false , false , false , false , true
	 , true , true , true , true , true , true , false , false ,
	 true , true , true , true , true , true , true , true , false
	 , true , false , false , true , true , true , true , true ,
	 true , true , false , true , true , false , true , true ,
	 true , true , true , true , false , true , true , true ,
	 false , true , true , true , true , true , false , true ,
	 true , true , true , false , true , true , true , true ,
	 false , true , true , true , true , true , false , true ,
	 true , true , false , true , true , true , true , true , true
	 , false , true , true , false , true , true , true , true ,
	 true , true , true , false , true , false , true , true ,
	 true , true , true , true , true , true , false , false ,
	 true , false , false , false , false , false , false , false
	 , false , false , false , true , true , true , true , true ,
	 true , true , true , false , false , false , true , true ,
	 true , true , true , true , true , true , false , true ,
	 false , true , true , true , true , true , true , true ,
	 false , true , true , false , true , true , true , true ,
	 true , true , false , true , true , true , false , true ,
	 true , true , true , true , false , true , true , true , true
	 , false , true , true , true , true , false , true , true ,
	 true , true , true , false , true , true , true , false ,
	 true , true , true , true , true , true , false , true , true
	 , false , true , true , true , true , true , true , true ,
	 false , true , false , true , true , true , true , true ,
	 true , true , true , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 true , true , true , true , true , true , true , false ,
	 false , true , false , true , true , true , true , true ,
	 true , false , false , true , true , false , true , true ,
	 true , true , true , false , false , true , true , true ,
	 false , true , true , true , true , false , false , true ,
	 true , true , true , false , true , true , true , false ,
	 false , true , true , true , true , true , false , true ,
	 true , false , false , true , true , true , true , true ,
	 true , false , true , false , false , true , true , true ,
	 true , true , true , true , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , true , true , true , true , true , true ,
	 true , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , true , false
	 , false , false , true , true , true , true , true , true ,
	 true , false , false , true , false , true , true , true ,
	 true , true , true , false , false , true , true , false ,
	 true , true , true , true , true , false , false , true ,
	 true , true , false , true , true , true , true , false ,
	 false , true , true , true , true , false , true , true ,
	 true , false , false , true , true , true , true , true ,
	 false , true , true , false , false , true , true , true ,
	 true , true , true , false , false , false , true , false ,
	 true , true , true , true , true , true , false , false ,
	 false , false , false , false , false , false , false , false
	 , true , false , false , false , true , true , true , true ,
	 true , true , false , false , false , false , false , false ,
	 false , false , false , false , true , false , true , false ,
	 false , true , true , true , true , true , true , false ,
	 true , false , true , false , true , true , true , true ,
	 true , false , true , false , true , true , false , true ,
	 true , true , true , false , true , false , true , true ,
	 true , false , true , true , true , false , true , false ,
	 true , true , true , true , false , true , true , false ,
	 true , false , true , true , true , true , true , false ,
	 false , false , true , true , false , true , true , true ,
	 true , true , false , false , false , false , false , false ,
	 false , false , false , false , true , false , false , true ,
	 false , true , true , true , true , true , true , false ,
	 true , false , false , true , true , true , true , true ,
	 false , false , false , false , false , false , false , false
	 , false , false , true , false , true , true , false , false
	 , true , true , true , true , true , false , true , true ,
	 false , true , false , true , true , true , true , false ,
	 true , true , false , true , true , false , true , true ,
	 true , false , true , true , false , true , true , true ,
	 false , true , true , false , true , true , false , true ,
	 true , true , true , false , false , false , true , true ,
	 true , false , true , true , true , true , false , false ,
	 false , false , false , false , false , false , false , false
	 , true , false , false , true , true , false , true , true ,
	 true , true , true , false , true , false , true , false ,
	 true , true , true , true , true , false , true , true ,
	 false , false , true , true , true , true , false , false ,
	 false , false , false , false , false , false , false , false
	 , true , false , true , true , true , false , false , true ,
	 true , true , true , false , true , true , true , false ,
	 true , false , true , true , true , false , true , true ,
	 true , false , true , true , false , true , true , false ,
	 true , true , true , false , true , true , true , false ,
	 false , false , true , true , true , true , false , true ,
	 true , true , false , false , false , false , false , false ,
	 false , false , false , false , true , false , false , true ,
	 true , true , false , true , true , true , true , false ,
	 true , false , true , true , false , true , true , true ,
	 true , false , true , true , false , true , false , true ,
	 true , true , true , false , true , true , true , false ,
	 false , true , true , true , false , false , false , false ,
	 false , false , false , false , false , false , true , false
	 , true , true , true , true , false , false , true , true ,
	 true , false , true , true , true , true , false , true ,
	 false , true , true , false , true , true , true , true ,
	 false , true , true , false , false , false , true , true ,
	 true , true , true , false , true , true , false , false ,
	 false , false , false , false , false , false , false , false
	 , true , false , false , true , true , true , true , false ,
	 true , true , true , false , true , false , true , true ,
	 true , false , true , true , true , false , true , true ,
	 false , true , true , false , true , true , true , false ,
	 true , true , true , false , true , false , true , true ,
	 true , false , true , true , true , true , false , false ,
	 true , true , false , false , false , false , false , false ,
	 false , false , false , false , true , false , true , true ,
	 true , true , true , false , false , true , true , false ,
	 true , true , true , true , true , false , true , false ,
	 false , false , true , true , true , true , true , true ,
	 false , true , false , false , false , false , false , false
	 , false , false , false , false , true , false , false , true
	 , true , true , true , true , false , true , true , false ,
	 true , false , true , true , true , true , false , true ,
	 true , false , true , true , false , true , true , true ,
	 false , true , true , false , true , true , true , false ,
	 true , true , false , true , true , false , true , true ,
	 true , true , false , true , false , true , true , false ,
	 true , true , true , true , true , false , false , true ,
	 false , false , false , false , false , false , false , false
	 , false , false , true , false , true , true , true , true ,
	 true , true , false , false , false , false , true , true ,
	 true , true , true , true , true , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , true , false , false , true , true , true , true , true ,
	 true , false , true , false , true , false , true , true ,
	 true , true , true , false , true , false , true , true ,
	 false , true , true , true , true , false , true , false ,
	 true , true , true , false , true , true , true , false ,
	 true , false , true , true , true , true , false , true ,
	 true , false , true , false , true , true , true , true ,
	 true , false , true , false , true , false , true , true ,
	 true , true , true , true , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , true , true ,
	 true , true , true , true , true , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , true , false , false , true , true , true , true , true ,
	 true , false , true , false , true , false , true , true ,
	 true , true , true , false , true , false , true , true ,
	 false , true , true , true , true , false , true , false ,
	 true , true , true , false , true , true , true , false ,
	 true , false , true , true , true , true , false , true ,
	 true , false , true , false , true , true , true , true ,
	 true , false , true , false , true , false , true , true ,
	 true , true , true , true , false , false , false , false ,
	 true , true , true , true , true , true , true , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , true , false , false , false
	 , true , true , true , true , true , true , true , false ,
	 false , true , false , true , true , true , true , true ,
	 true , false , false , true , true , false , true , true ,
	 true , true , true , false , false , true , true , true ,
	 false , true , true , true , true , false , false , true ,
	 true , true , true , false , true , true , true , false ,
	 false , true , true , true , true , true , false , true ,
	 true , false , false , true , true , true , true , true ,
	 true , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , true , false ,
	 false , true , true , true , true , true , true , true ,
	 false , false , false , true , true , true , true , true ,
	 true , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , true , true ,
	 false , false , false , true , true , true , true , true ,
	 true , true , false , false , true , false , true , true ,
	 true , true , true , true , false , false , true , true ,
	 false , true , true , true , true , true , false , false ,
	 true , true , true , false , true , true , true , true ,
	 false , false , true , true , true , true , false , true ,
	 true , true , false , false , true , true , true , true ,
	 true , false , false , true , false , true , false , true ,
	 true , true , true , true , true , false , false , true ,
	 false , true , true , true , true , true , false , false ,
	 false , false , false , false , false , false , false , false
	 , true , true , false , false , false , true , true , true ,
	 true , true , false , false , false , false , false , false ,
	 false , false , false , false , true , true , false , true ,
	 false , false , true , true , true , true , true , true ,
	 false , true , false , true , false , true , true , true ,
	 true , true , false , true , false , true , true , false ,
	 true , true , true , true , false , true , false , true ,
	 true , true , false , true , true , true , false , true ,
	 false , true , true , true , true , false , false , true ,
	 false , true , true , false , true , true , true , true ,
	 true , false , false , true , true , false , true , true ,
	 true , true , false , false , false , false , false , false ,
	 false , false , false , false , true , true , false , false ,
	 true , false , true , true , true , true , true , true ,
	 false , true , false , false , true , true , true , true ,
	 false , false , false , false , false , false , false , false
	 , false , false , true , true , false , true , true , false ,
	 false , true , true , true , true , true , false , true ,
	 true , false , true , false , true , true , true , true ,
	 false , true , true , false , true , true , false , true ,
	 true , true , false , true , true , false , true , true ,
	 true , false , false , true , false , true , true , true ,
	 false , true , true , true , true , false , false , true ,
	 true , true , false , true , true , true , false , false ,
	 false , false , false , false , false , false , false , false
	 , true , true , false , false , true , true , false , true ,
	 true , true , true , true , false , true , false , true ,
	 false , true , true , true , true , true , false , true ,
	 true , false , false , true , true , true , false , false ,
	 false , false , false , false , false , false , false , false
	 , true , true , false , true , true , true , false , false ,
	 true , true , true , true , false , true , true , true ,
	 false , true , false , true , true , true , false , true ,
	 true , true , false , true , true , false , false , true ,
	 false , true , true , true , true , false , true , true ,
	 true , false , false , true , true , true , true , false ,
	 true , true , false , false , false , false , false , false ,
	 false , false , false , false , true , true , false , false ,
	 true , true , true , false , true , true , true , true ,
	 false , true , false , true , true , false , true , true ,
	 true , true , false , true , true , false , true , false ,
	 true , true , true , true , false , true , true , true ,
	 false , false , true , true , false , false , false , false ,
	 false , false , false , false , false , false , true , true ,
	 false , true , true , true , true , false , false , true ,
	 true , true , false , true , true , true , true , false ,
	 true , false , false , true , false , true , true , true ,
	 true , true , false , true , true , false , false , true ,
	 true , true , true , true , false , true , false , false ,
	 false , false , false , false , false , false , false , false
	 , true , true , false , false , true , true , true , true ,
	 false , true , true , true , false , true , false , true ,
	 true , true , false , true , true , true , false , true ,
	 true , false , true , true , false , true , true , true ,
	 false , true , true , true , false , true , false , true ,
	 true , true , false , true , true , true , true , false ,
	 false , true , false , false , false , false , false , false
	 , false , false , false , false , true , true , false , true
	 , true , true , true , true , false , false , false , true ,
	 false , true , true , true , true , true , true , false ,
	 true , false , false , true , true , true , true , true ,
	 true , false , false , false , false , false , false , false
	 , false , false , false , false , true , true , false , false
	 , true , true , true , true , true , false , true , true ,
	 false , true , false , true , true , true , true , false ,
	 true , true , false , true , true , false , true , true ,
	 true , false , true , true , false , true , true , true ,
	 false , true , true , false , true , true , false , true ,
	 true , true , true , false , true , false , true , true ,
	 false , true , true , true , true , true , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , true
	 , false , true , true , true , true , true , true , false ,
	 true , false , false , true , true , true , true , true ,
	 true , false , false , false , false , false , false , false
	 , false , false , false , false , true , true , false , false
	 , true , true , true , true , true , false , true , true ,
	 false , true , false , true , true , true , true , false ,
	 true , true , false , true , true , false , true , true ,
	 true , false , true , true , false , true , true , true ,
	 false , true , true , false , true , true , false , true ,
	 true , true , true , false , true , false , true , true ,
	 false , true , true , true , true , true , false , false ,
	 false , true , false , true , true , true , true , true ,
	 true , false , false , false , false , false , false , false
	 , false , false , false , true , false , false , false , true
	 , true , true , true , true , true , false , false , false ,
	 false , false , false , false , false , false , false , true
	 , false , true , false , false , true , true , true , true ,
	 true , true , false , true , false , true , false , true ,
	 true , true , true , true , false , true , false , true ,
	 true , false , true , true , true , true , false , true ,
	 false , true , true , true , false , true , true , true ,
	 false , true , false , true , true , true , true , false ,
	 true , true , false , true , false , true , true , true ,
	 true , true , false , false , true , false , false , true ,
	 true , true , true , true , true , true , false , false ,
	 false , true , true , true , true , true , true , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , true , true , false , false ,
	 false , true , true , true , true , true , true , true ,
	 false , false , true , false , true , true , true , true ,
	 true , true , false , false , true , true , false , true ,
	 true , true , true , true , false , false , true , true ,
	 true , false , true , true , true , true , false , false ,
	 true , true , true , true , false , true , true , true ,
	 false , false , true , true , true , true , true , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , true , true , false , false , true
	 , true , true , true , true , true , false , true , false ,
	 false , true , true , true , true , true , true , true ,
	 false , false , false , true , true , true , true , true ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , true , true , true ,
	 false , false , false , true , true , true , true , true ,
	 true , true , false , false , true , false , true , true ,
	 true , true , true , true , false , false , true , true ,
	 false , true , true , true , true , true , false , false ,
	 true , true , true , false , true , true , true , true ,
	 false , false , true , true , true , true , false , false ,
	 true , true , false , true , false , true , true , true ,
	 true , true , false , true , false , true , false , true ,
	 true , true , true , true , true , false , false , true ,
	 false , true , true , true , true , false , false , false ,
	 false , false , false , false , false , false , false , true
	 , true , true , false , false , false , true , true , true ,
	 true , false , false , false , false , false , false , false
	 , false , false , false , true , true , true , false , true ,
	 false , false , true , true , true , true , true , true ,
	 false , true , false , true , false , true , true , true ,
	 true , true , false , true , false , true , true , false ,
	 true , true , true , true , false , true , false , true ,
	 true , true , false , false , true , true , false , true ,
	 true , false , true , true , true , true , false , true ,
	 false , true , true , false , true , true , true , true ,
	 true , false , false , true , true , false , true , true ,
	 true , false , false , false , false , false , false , false
	 , false , false , false , true , true , true , false , false
	 , true , false , true , true , true , true , true , true ,
	 false , true , false , false , true , true , true , false ,
	 false , false , false , false , false , false , false , false
	 , false , true , true , true , false , true , true , false ,
	 false , true , true , true , true , true , false , true ,
	 true , false , true , false , true , true , true , true ,
	 false , true , true , false , true , true , false , false ,
	 true , true , false , true , true , true , false , true ,
	 true , true , false , true , false , true , true , true ,
	 false , true , true , true , true , false , false , true ,
	 true , true , false , true , true , false , false , false ,
	 false , false , false , false , false , false , false , true
	 , true , true , false , false , true , true , false , true ,
	 true , true , true , true , false , true , false , true ,
	 false , true , true , true , true , true , false , true ,
	 true , false , false , true , true , false , false , false ,
	 false , false , false , false , false , false , false , true
	 , true , true , false , true , true , true , false , false ,
	 true , true , true , true , false , true , true , true ,
	 false , true , false , false , true , true , false , true ,
	 true , true , true , false , true , true , false , true ,
	 false , true , true , true , true , false , true , true ,
	 true , false , false , true , true , true , true , false ,
	 true , false , false , false , false , false , false , false
	 , false , false , false , true , true , true , false , false
	 , true , true , true , false , true , true , true , true ,
	 false , true , false , true , true , false , true , true ,
	 true , true , false , true , true , false , true , false ,
	 true , true , true , true , false , true , true , true ,
	 false , false , true , false , false , false , false , false
	 , false , false , false , false , false , true , true , true
	 , false , true , true , true , true , false , false , false ,
	 true , true , false , true , true , true , true , true ,
	 false , true , false , true , false , true , true , true ,
	 true , true , false , true , true , false , false , true ,
	 true , true , true , true , false , false , false , false ,
	 false , false , false , false , false , false , false , true
	 , true , true , false , false , true , true , true , true ,
	 false , true , true , true , false , true , false , true ,
	 true , true , false , true , true , true , false , true ,
	 true , false , true , true , false , true , true , true ,
	 false , true , true , true , false , true , false , true ,
	 true , true , false , true , true , true , true , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , true , true , false , true , true , true , true , true ,
	 false , true , false , true , false , true , true , true ,
	 true , true , false , true , true , false , false , true ,
	 true , true , true , true , false , false , false , false ,
	 false , false , false , false , false , false , false , true
	 , true , true , false , false , true , true , true , true ,
	 false , true , true , true , false , true , false , true ,
	 true , true , false , true , true , true , false , true ,
	 true , false , true , true , false , true , true , true ,
	 false , true , true , true , false , true , false , true ,
	 true , true , false , true , true , true , true , false ,
	 false , false , true , true , false , true , true , true ,
	 true , true , false , false , false , false , false , false ,
	 false , false , false , false , true , false , false , true ,
	 false , true , true , true , true , true , true , false ,
	 true , false , false , true , true , true , true , true ,
	 false , false , false , false , false , false , false , false
	 , false , false , true , false , true , true , false , false
	 , true , true , true , true , true , false , true , true ,
	 false , true , false , true , true , true , true , false ,
	 true , true , false , true , true , false , true , true ,
	 true , false , true , true , false , true , true , true ,
	 false , true , true , false , true , true , false , true ,
	 true , true , true , false , false , true , false , true ,
	 false , true , true , true , true , true , true , false ,
	 false , true , false , true , true , true , true , true ,
	 false , false , false , false , false , false , false , false
	 , false , false , true , true , false , false , false , true
	 , true , true , true , true , false , false , false , false ,
	 false , false , false , false , false , false , true , true ,
	 false , true , false , false , true , true , true , true ,
	 true , true , false , true , false , true , false , true ,
	 true , true , true , true , false , true , false , true ,
	 true , false , true , true , true , true , false , true ,
	 false , true , true , true , false , true , true , true ,
	 false , true , false , true , true , true , true , false ,
	 false , true , true , false , false , true , true , true ,
	 true , true , true , false , true , false , false , true ,
	 true , true , true , true , true , true , false , false ,
	 false , true , true , true , true , true , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , true , true , true , false , false ,
	 false , true , true , true , true , true , true , true ,
	 false , false , true , false , true , true , true , true ,
	 true , true , false , false , true , true , false , true ,
	 true , true , true , true , false , false , true , true ,
	 true , false , true , true , true , true , false , false ,
	 true , true , true , true , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , false , false , false , false
	 , true , true , true , false , false , true , true , true ,
	 true , true , false , true , true , false , false , true ,
	 true , true , true , true , true , false , true , false ,
	 false , true , true , true , true , true , true , true ,
	 false , false , false , true , true , true , true , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false , false , false ,
	 false , false , false , false , true , true , true , true ,
	 false , false , false , true , true , true , true , true ,
	 true , true , false , false , true , false , true , true ,
	 true , true , true , true , false , false , true , true ,
	 false , true , true , true , true , true , false , false ,
	 true , true , true , false , false , true , true , true ,
	 false , true , false , true , true , true , true , false ,
	 true , true , false , true , false , true , true , true ,
	 true , true , false , true , false , true , false , true ,
	 true , true , true , true , true , false , false , true ,
	 false , true , true , true , false , false , false , false ,
	 false , false , false , false , false , false , true , true ,
	 true , true , false , false , false , true , true , true ,
	 false , false , false , false , false , false , false , false
	 , false , false , true , true , true , true , false , true ,
	 false , false , true , true , true , true , true , true ,
	 false , true , false , true , false , true , true , true ,
	 true , true , false , true , false , true , true , false ,
	 false , true , true , true , false , true , true , false ,
	 true , true , true , false , true , true , false , true ,
	 true , false , true , true , true , true , false , true ,
	 false , true , true , false , true , true , true , true ,
	 true , false , false , true , true , false , true , true ,
	 false , false , false , false , false , false , false , false
	 , false , false , true , true , true , true , false , false ,
	 true , false , true , true , true , true , true , true ,
	 false , true , false , false , true , true , false , false ,
	 false , false , false , false , false , false , false , false
	 , true , true , true , true , false , true , true , false ,
	 false , true , true , true , true , true , false , true ,
	 true , false , true , false , false , true , true , true ,
	 false , true , true , true , false , true , true , false ,
	 true , true , false , true , true , true , false , true ,
	 true , true , false , true , false , true , true , true ,
	 false , true , true , true , true , false , false , true ,
	 true , true , false , true , false , false , false , false ,
	 false , false , false , false , false , false , true , true ,
	 true , true , false , false , true , true , false , true ,
	 true , true , true , true , false , true , false , true ,
	 false , true , true , true , true , true , false , true ,
	 true , false , false , true , false , false , false , false ,
	 false , false , false , false , false , false , true , true ,
	 true , true , false , true , true , true , false , false ,
	 false , true , true , true , false , true , true , true ,
	 true , false , true , false , true , true , false , true ,
	 true , true , true , false , true , true , false , true ,
	 false , true , true , true , true , false , true , true ,
	 true , false , false , true , true , true , true , false ,
	 false , false , false , false , false , false , false , false
	 , false , false , true , true , true , true , false , false ,
	 true , true , true , false , true , true , true , true ,
	 false , true , false , true , true , false , true , true ,
	 true , true , false , true , true , false , true , false ,
	 true , true , true , true , false , true , true , true ,
	 false , false , false , false , false , false , false , false
	 , false , false , false , false , false};

    int N,M,total;

    while(scanf("%i %i",&N,&M)!=EOF){
	total=0;
	for(bool* b=table+N;N<=M;b++,N++) if(*b) total++;
	printf("%i\n",total);
    }
    return 0;
}
