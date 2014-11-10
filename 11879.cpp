#include<stdio.h>
#include<stdlib.h>
int main()
{
    char n[101];int i=0,c;
    //freopen("in.txt","r",stdin);
    while(atoi(gets(n))!=0)
    {
        c = n[i]-48;
        while(n[++i])
        {
            c=(c*10 + (n[i]-48))%17;
        }
        if(c)
            printf("0\n");
        else
            printf("1\n");
        i=0;
    }
    return(0);
}