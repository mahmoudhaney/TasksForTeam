#include <iostream>

using namespace std;

int main()
{
    int number_of_problems;
    cin >> number_of_problems ;
    int implemented_problems = 0;
    while(number_of_problems)
    {
        int Petya_veiw , Vasya_veiw , Tonya_veiw ;
        cin>>Petya_veiw >> Vasya_veiw >> Tonya_veiw ;
        int sum = Petya_veiw + Vasya_veiw + Tonya_veiw ;
        if( sum >= 2)
            implemented_problems ++ ;
        number_of_problems -- ;
    }
    cout << implemented_problems ;
    return 0;
}