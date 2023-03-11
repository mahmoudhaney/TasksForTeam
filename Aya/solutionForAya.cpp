#include <iostream>
#include<iomanip>
#include <cstdlib>

using namespace std;
#define long long int ll



/*
    The problem is to know the minimum number of moves to get the number 1 to the center of the matrix to make it beautiful
        -when you enter number 1 it's calculate the minimum number of moves to make number 1 in the middle of the matrix
        -the minimum number of moves is the absolute(to get rid of minus sign) value of the difference between the row and the column of the number 1
        -so we take difference from 3 as he want the number 1 in the middle which show that it's located in the third row and third column
        - the answer is the min moves to make number 1 in the middle(third row and third column)
*/

int main(){
    int number;
    
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>number;
            if(number==1){
                cout<<abs(i-3)+(j-3)<<endl;
            }
        }
    }
    return 0;
}