#include <iostream>
#include<string>

using namespace std;

//check number of upper or lower character
string check(string word){
    int upperCase=0,lowerCase=0;
    
    for(int i=0;i<word.length();i++){
        if(word[i]>=65 && word[i]<=90)
            upperCase++;
        else
            lowerCase++;
    }
    
    if(upperCase>lowerCase)
        return "upper";
    else
        return "lower";
}

//to convert word to upper case
void upper_string(string word){
    int i=0;
    while(i < word.length()){
      	if(islower(word[i]))
      		{
      			word[i] = toupper(word[i]);
    		}
    	i++;
  	}
    cout << word << endl;
}

//to convert word to lower case
void lower_string(string word)
{
    int i=0;
	while(i < word.length()){
      	if(isupper(word[i]))
      		{
      			word[i] = tolower(word[i]);
    		}
    	i++;
  	}
    cout << word << endl;
}


int main()
{
    string word;
    cin>>word;

    if(check(word)=="upper")
        upper_string(word);
    else
        lower_string(word);

    return 0;
}