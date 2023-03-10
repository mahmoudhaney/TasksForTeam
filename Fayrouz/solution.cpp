#include <iostream>

using namespace std;

int main()
{
    int number_of_problems;    
    cin >> number_of_problems;
    int counter = 0;          
    while(number_of_problems)     
    {
        int Petya,Vasya,Tonya; 
        cin>>Petya>>Vasya>>Tonya;
        if (Petya+Vasya==2||Vasya+Tonya==2||Petya+Tonya==2)
            counter+=1;
        number_of_problems--;
    }
    cout<<counter;
    return 0;
}
