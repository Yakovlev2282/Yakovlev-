#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
  int n,i=1,s=0;
  cout<<"Enter number n=";
  cin>>n;
  while(i<=n){
  	s+=i;
  	i++;
  }
  cout<<"Sum of natural numbers is:"<<s<<"\n";
    system("pause"); 
    return 0;
}
