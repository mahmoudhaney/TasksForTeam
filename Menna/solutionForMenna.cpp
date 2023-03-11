#include <iostream>
#include <string.h>
#include<iomanip>
using namespace std;
#define long long int ll



int main(){
    int flag=0;
    string present1,present2;
    cin>>present1>>present2;
    for(int i=0;i<present1.length();i++)
    {
        if(present1[i]>='A' &&present1[i]<='Z')
        {
            present1[i]+=32;
        }
        if(present2[i]>='A' && present2[i]<='Z')
        {
            present2[i]+=32;
        }
        if(present1[i]==present2[i])
        {
            flag=0;
        }
        else if(present1[i]>present2[i]){
            flag=1;
            break;
        }
        else {
            flag=-1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"0";
    }
    else if(flag==1)
    {
        cout<<"1";
    }
    else
    {
        cout<<"-1";
    }
    return 0;

}