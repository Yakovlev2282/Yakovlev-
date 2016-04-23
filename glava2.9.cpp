#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
int n;
cout<<"Enter number n=";
cin>>n;
for(int i=1, s=0;i<n;s+=i++);
cout<<"sum of natural numbers is:"<<s<<"\n";
  
    system("pause"); 
    return 0;
}
