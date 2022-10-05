#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    float l,n;
    cin>>l>>n;
    cout<<fixed<<setprecision(3)<<l/n<<endl;
    cout<<fixed<<setprecision(0)<<n*2;
}