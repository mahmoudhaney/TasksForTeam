#include <iostream>
#include <string.h>
#include<iomanip>
using namespace std;


int main(){
    string word;
    cin>>word;
    int upperCaseCounter=0,lowerCaseCounter=0;
    for(int i=0;i<word.length();i++)
    {
        if(word[i]>='A' && word[i]<='Z')
        {
            upperCaseCounter++;
        }
        else
        {
            lowerCaseCounter++;
        }
    }
    if(upperCaseCounter>lowerCaseCounter){
        for(int i=0;i<word.length();i++){
            word[i]=toupper(word[i]);
        }
    }
    else{
        for(int i=0;i<word.length();i++){
            word[i]=tolower(word[i]);
        }
    }
    cout<<word;
}