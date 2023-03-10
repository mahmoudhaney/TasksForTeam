#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


/*
    The problem is to check if the number of distinct characters is even or odd
        -if it is even then the answer is "chat with her " which means it's a girl
        -else if it is odd then the answer is "ignore him " which means it's a man
*/




int main(){

    
    int distinctCharacters=0; //count the number of characters in name
    string name;
    cin>>name;
    sort(name.begin(),name.end());//sort the characters to eliminate the duplicate char
    for(int i=0;i<name.size();i++){
        //if name at index i not equal name at index i+1 that means they are distinct
        if(name[i]!=name[i+1]){
            distinctCharacters++;
        }
    }
    if(distinctCharacters%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

}