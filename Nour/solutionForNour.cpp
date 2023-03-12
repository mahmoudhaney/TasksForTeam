#include <iostream>
#include <string.h>
#include<iomanip>
using namespace std;



/*
    1 3 5 2 4 6 8
    1 3 5 7 9 2 4 6 8 10
    The problem is to find the number at position k in this array
    This array is a combination of two array from first(1 to n) is even natural numbers and from next (1 to n) after(n+1) is odd numbers
        -depend on the k value if it's less (totalnumber/2 which mean it's in first half) we multiple position k by 2 and subtract 1
        -if it's greater than (totalnumber/2 which mean it's in second half) we subtract (totalnumber/2) from position k and multiply by 2
    
*/

int main(){
    int number,position;
    cin>>number>>position;
    if(position<=((number+1)/2))
    {
        cout<<(position*2)-1;
    }
    else
    {
        cout<<(position-((number+1)/2))*2;
    }
}


// 1 3 5 |2 4 6 8

// 1 3 5 7 9 | 2 4 6 8 10