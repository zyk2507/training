# include <iostream>

using namespace std;

int main()
{
    int a[8];
    int b[8];
    int c[8]={0};
    int max=0;
    for(int i=1;i<=7;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]+b[i]>=8)
        {
            c[i]=a[i]+b[i]-8;
            if(c[i]>max) max=c[i];
        }
    }
    int total=0;
    for(int i=1;i<=7;i++)
    {
        if(max==c[i]) 
        {
            cout<<i;
            return 0;
        }

    }
    return 0;
}