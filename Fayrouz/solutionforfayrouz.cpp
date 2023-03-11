#include <iostream>
#include<iomanip>
#include <bits/stdc++.h>
using namespace std;



/*
    The problem is to know how petya,vasya and tonya able to solve problem in contest
    for every problem they are try to solve:
        -if the number of them able to solve problem is greater than or equal 2 then the answer is the number of problems that they are sure to solve
        -else if the number of them able to solve problem is less than 2 then the answer is zero
*/


int main(){
    int numberOfContest;
    cin>>numberOfContest;
    int answer=0;
    for(int i=0;i<numberOfContest;i++)
    {
        int petyaSolution ,vasyaSolution,tonyaSolution ;
        cin>>petyaSolution>>vasyaSolution>>tonyaSolution;
        answer+=(petyaSolution+vasyaSolution+tonyaSolution>=2);
    }
    cout<<answer;

}