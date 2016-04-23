#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
 int n;
 cout<<"Enter n=";
 cin>>n;
 switch(n){
 	case 1:
 		cout<<"First case-block\n";
 		break;
 		case 2:
 			cout<<"Third case=block\n";
 			break;
 			default:
 				cout<<"By default\n";
 			}
 
    system("pause"); 
    return 0;
}
