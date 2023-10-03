#include <bits/stdc++.h>
#include<iostream>
#define FASTIO ios::sync_with_stdio(false);
# define ll long long
#define pb push pack
#define N 1000000
using namespace std;

int main()
{
    FASTIO
    int x,y;
    char a,b;
    cin>>a>>x;
    cin>>b>>y;
    int a1 =a-'a'+1;
    int b1=b-'a'+1;

 if(a1==b1)
    cout<<abs(x-y)<<endl;
else if(x==y)
    cout<<abs(a1-b1)<<endl;
 else
    cout<<max(abs(a1-b1),abs(x-y))<<endl;
    while(a1!=b1||x!=y)
    {
        if(x>y&&b1==a1)
        {
            x--;
            cout<<"D"<<endl;

        }
        if(x<y&&b1==a1)
        {
            x++;
            cout<<"U"<<endl;
        }
        if(x==y&&a1>b1)
        {
            a1--;
            cout<<"L"<<endl;
        }
        if(x==y&&a1<b1)
        {
            a1++;
            cout<<"R"<<endl;
        }
        if(x>y&&a1<b1)
        {
            x--;
            a1++;
            cout<<"RD"<<endl;

        }
        if(x<y&&a1<b1)
        {
            x++;
            a1++;

            cout<<"RU"<<endl;
        }
        if(x>y&&a1>b1)
        {
            x--;
            a1--;
            cout<<"LD"<<endl;
        }
        if(x<y&&a1>b1)
        {
            x++;
            a1--;
            cout<<"LU"<<endl;
        }

    }


    return 0;

}