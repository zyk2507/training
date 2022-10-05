#include <iostream>

using namespace std;

int main()
{
    double n;
    cin>>n;
    //a.b->b.a
    double b=(n*10.0-(int)n*10);
    double res[3]={0.0};
    int a=n;
    for (int i = 0; a!=0; i++)
    {
        res[i]=(a%10);
        a/=10;
    }
    a=n;
    res[0]/=10;
    res[1]/=100;
    res[2]/=1000;
    cout << res[0]+res[1]+res[2]+b;   
}