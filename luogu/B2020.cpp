#include <iostream>

using namespace std;
int c[5]={0};
int main()
{
    int e=0;
    for(int i=0;i<5;i++)
    {
        cin >> c[i];
    }
    for(int i=0;i<5;i++)
    {
        e+=c[i]%3;
        if(i==0)
        {
            c[4]+=c[0]/3;
            c[1]+=c[0]/3;
            c[0]/=3;
            continue;
        }
        if(i==4)
        {
            c[3]+=c[4]/3;
            c[0]+=c[4]/3;
            c[4]/=3;
            continue;
        }
        c[i+1]+=c[i]/3;
        c[i-1]+=c[i]/3;
        c[i]/=3;
    }

    for (int i = 0; i <= 4; ++i)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    cout << e;
}