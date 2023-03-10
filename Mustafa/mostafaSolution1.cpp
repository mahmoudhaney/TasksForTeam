#include <iostream>
#include <string.h>
#include <set>
using namespace std;
/*
    The problem is to check if the number of distinct characters is even or odd
        -if it is even then the answer is "chat with her " which means it's a girl
        -else if it is odd then the answer is "ignore him " which means it's a man
*/



int main(){
    string name;
    cin>>name;
    set<char> distinctCharacters ; // we use set because the (set) remove duplicate characters
    for(int i=0;i<name.size();i++){
        distinctCharacters.insert(name[i]);
    }
    if(distinctCharacters.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}