#include <iostream>
using namespace std;
int main(){
    int n,m,i=3,j=3;
    cout<<"At tha beginning:\n";
    cout<<"i = "<<i<<"\n";
    cout<<"j = "<<j<<"\n";
    cout<<"After command n=i++ :\n";
    cout<<"n="<<n<<"\n";
    cout<<"i="<<i<<"\n";
    cout<<"After command m=++i :\n";
    cout<<"m="<<m<<"\n";
    cout<<"j="<<j<<"\n";
    cout<<" After cpmmand n=(--i_*(i--) :\n";
    cout<<"n="<<n<<"\n";
    cout<<"i="<<i<<"\n";
    cout<<"After command m=(--j)*(--j) :\n";
    m=(--j)*(--j);
    cout<<"m="<<m<<"\n";
    cout<<"j="<<j<<"\n";
    cout<<"After command n=(--i)*(--i) :\n";
    n=(--i)*(i++);
    cout<<"n="<<n<<"\n";
    cout<<"i="<<i<<"\n";
    cout<<"After command m=(j--)*(++j) :\n";
    m=(j--)*(++j);
    cout<<"m="<<m<<"\n";
    cout<<"j="<<j<<"\n";
    cout<<"After command n=(--i)*(++i) :\n";
    n=(--i)*(++i);
    cout<<"n="<<n<<"\n";
    cout<<"i="<<i<<"\n";
    
   system ("pause");
    return 0;
}
