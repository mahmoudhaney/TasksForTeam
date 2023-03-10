#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int n, anton=0, danik=0;
    string s;
    cin>>n>>s;
    for (int i=0; i<n; i++){
        if (s[i] == 'A')
            anton += 1;
        else
            danik += 1;
    }
    if (anton < danik)
        cout << "Danik" <<endl;
    else if (anton > danik)
        cout << "Anton" <<endl;
    else
        cout << "Friendship" <<endl;
    return 0;
}