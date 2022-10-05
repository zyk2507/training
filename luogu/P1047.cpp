#include <iostream>

using namespace std;


int main()
{
    int l,n;
    cin >> l >> n;
    int r[l+1]={0};
    for (int i = 1; i <= n; i++)
    {
        int a,b;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            r[j]=1;
        }

        
    }
    int count=0;
    for (int i = 0; i <= l; i++)
    {
        if (r[i] == 0) count++;
    }
    cout << count;
    
    
}