/* 
 * File:   1152.cpp
 * Author: alex
 *
 * Created on 27 de octubre de 2012, 13:05
 */


#include <algorithm>
#include <iostream>


int ml1[16000000];
int ml2[16000000];

using namespace std;

/*
 * 
 */
int main() {
    int cases=0;
    cin >> cases;
    for (int c=0; c<cases; c++){
        int length=0;
        cin >> length;
        int l1[4000];
        int l2[4000];
        int l3[4000];
        int l4[4000];
        
        for (int l=1; l<length; l++){
            int n1, n2, n3, n4;
            cin >> n1 >> n2 >> n3 >> n4;
            l1[l]=n1;
            l2[l]=n2;
            l3[l]=n3;
            l4[l]=n4;
        }
        
        int mlength=length*length;
        
        for (int i1=0; i1<length; i1++){
            for (int i2=0; i2<length; i2++){
                ml1[ length*i1 + i2] = l1[i1]+ l2[i2];
                ml2[ length*i1 + i2] = l3[i1]+ l3[i2];
            }
        }
        
        sort(ml1, ml1+mlength);
        sort(ml2, ml2+mlength);
        
        int it1=0;
        int it2=mlength-1;
        
        int total=0;
        //int sum=ml1[it1]+ml2[it2];
        bool finish=false;
        
        while (it1<mlength && !finish ){
            while (it2 >= 0 && (ml1[it1]+ml2[it2])>=0){
                if ((ml1[it1]+ml2[it2])==0) total++;
                else{
                    it2--;
                    if (it2<0) finish=true;
                }
            }
            it1++;
        }
        cout << total << endl;
       
    }
    return 0;
}

