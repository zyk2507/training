#include <iostream>

using namespace std;

void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}


int main()
{
    int a[4];
    cin>>a[1]>>a[2]>>a[3];
    for (int i = 1; i <= 3; i++)
    {
        if(a[i]>a[i+1]) swap(a[i],a[i+1]);
    }
    if(a[1]>a[2]) swap(a[1],a[2]);
    

    if(a[1]+a[2]<a[3]||a[3]-a[2]>a[1])
    {
        cout<<"Not triangle";
        return 0;
    }
    if(a[1]*a[1]+a[2]*a[2]>a[3]*a[3]) cout<<"Acute triangle"<<endl;
    if(a[1]*a[1]+a[2]*a[2]<a[3]*a[3]) cout<<"Obtuse triangle"<<endl;
    if(a[1]*a[1]+a[2]*a[2]==a[3]*a[3]) cout<<"Right triangle"<<endl;

    if(a[1]==a[2]) cout<<"Isosceles triangle"<<endl;
    if(a[1]==a[2]&&a[2]==a[3]) cout<<"Equilateral triangle"<<endl;
    return 0;
    

    
}