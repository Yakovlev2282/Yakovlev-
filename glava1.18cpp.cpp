#include<iostream>
#include <cmath>
using namespace std;
int main(){
double p,p1,P,q;
int n;
cout<<"p=";
cin>>p;
(p<0||p>1)?(cout<<"Wrong value!"<<endl,exit(0)):cout<<"p1=";
cin>>p;
(p1<0||p1>1)?(cout<<"Wrong value!"<<endl,exit(0)):cout<<"n=";
cin>>p1;
q=(1-p)*(1-p1);
P=p*p1*(1-pow(q,n))/(1-q);
cout<<"P="<<P<<endl;


system("pause");
	return 0;
}
