#include <iostream>
#include <math.h>
#include <cmath>
#include <string.h>
#include<iomanip>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include <bits/stdc++.h>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <iterator>
#include <cstring>
#include <list>
#include <deque>
#include <forward_list>
#include <map>
#include <stack>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <utility>
using namespace std;
#define long long int ll


/*
    The problem is to check if the number of distinct characters is even or odd
        -if it is even then the answer is "chat with her " which means it's a girl
        -else if it is odd then the answer is "ignore him " which means it's a man
*/



int main(){
    string name;
    cin>>name;
    set<char> st; // we use set because the (set) remove duplicate characters
    for(int i=0;i<name.size();i++){
        st.insert(name[i]);
    }
    if(st.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}