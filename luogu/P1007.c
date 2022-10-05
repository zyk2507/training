# include <stdio.h>

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
    
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
    
}


int main()
{
    int l,n;
    scanf("%d%d",&l,&n);
    int minn=0,maxn=0;
    for(int i=1;i<=n;i++)
    {
        int p;
        scanf("%d",&p);
        maxn=max(maxn,max(l-p+1,p));
        minn=max(minn,min(l-p+1,p));

    }

    printf("%d %d",minn,maxn);
}