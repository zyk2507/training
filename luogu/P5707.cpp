#include <iostream>

using namespace std;

int main()
{
    int s,v;
    cin>>s>>v;
    int total_min=s/v;
    if(s%v!=0) total_min++;
    total_min+=10;

    int total_hour=total_min/60;
    if(total_min%60!=0) total_hour++;
    int print_hour;
    if(total_hour>8) print_hour=32-total_hour;
    else print_hour=8-total_hour;

    int print_min;
    if(total_min%60==0) print_min=0;
    else print_min=60-total_min%60;

    if(print_hour<10) cout<<'0'<<print_hour<<':';
    if(print_hour>=10) cout<<print_hour<<':';
    if(print_min<10) cout<<'0'<<print_min;
    if(print_min>=10) cout<<print_min;
}