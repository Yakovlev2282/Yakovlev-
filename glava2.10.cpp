#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
	for(char x='a';x!='z';){
		cout<<"Guess a symbol:";
		cin>>x;
	}
	cout<<"Correct!\n";
    system("pause"); 
    return 0;
}
