#include <stdio.h>
#include <stdlib.h>

int powerof2(int n)
{
    int ret=1;
    for(int i=1;i<=n;i++) ret*=2;
    return ret;
}

void fp(int *a,int s)
{
    s/=2;
    int set;
    for(int i=1;i<=4;i++)
    {
        if(i==1) set=0;
        else set=1; //0 is freed
        for(int j=1;j<=s;j++)
        {
            for(int k=1;k<=s;k++) *(a+1)=set;
        }
    }
    if(s==1) return;
    fp(a,s);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[powerof2(n)+1][powerof2(n)+1];
    int *ptr=&a[0];

    fp(ptr,powerof2(n));

    for(int i=1;i<=powerof2(n);i++)
    {
        for(int j=1;j<=powerof2(n);j++)
        {
            printf("%d",a[i][j]);
        }
    }

}