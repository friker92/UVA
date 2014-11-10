# include<iostream>
using namespace std;

#include <string>

int main(int argc, char** argv)
{
    int ult;

    int suma, resta;
    bool turno;

    string str;
    int cifra;

    bool L, H, B, N;

    bool first=true;

    getline(cin,str);

    while(!cin.eof())
    {
        L=false;
        H=false;
        B=false;
        N=false;
        
        ult=0;
        suma=0;
        resta=0;
        turno=true;
        for(int i=0; i<str.length(); i++)
        {
            cifra=str.at(i)-'0';

            ult=(ult*10+cifra)%100000;
            suma=(suma+cifra)%3;

            resta=(turno? resta-cifra: resta+cifra)%11;
            turno=!turno;
        }

        if(ult%400==0||(ult%4==0 && ult%100!=0)) L=true;

        if(ult%5==0 && suma%3==0) H=true;

        if(L && ult%5==0 && resta%11==0) B=true;

        if(!L && !H && !B) N=true;


        if(!first)cout<<endl;
        first=false;

        if(L) cout<<"This is leap year."<<endl;
        if(H) cout<<"This is huluculu festival year."<<endl;
        if(B) cout<<"This is bulukulu festival year."<<endl;
        if(N) cout<<"This is an ordinary year."<<endl;

        getline(cin,str);
    }

    return 0;
}
