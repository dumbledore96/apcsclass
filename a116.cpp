#include<bits/stdc++.h>
using namespace std;
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool year(int y)
{
    if(y%400==0)return 1;
    if(y%100==0)return 0;
    if(y%4==0)return 1;
    return 0;
}

int gcd(int a,int b)
{
    if(a==0)return b;
    return gcd(b,a%b);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    for(int i=1 ; i<n ; i++){
        cin>>a[i];
        a[i]=a[i-1]*a[i]/gcd(a[i-1],a[i]);
    }
    int lcm=a[n-1],y,m,d;
    //test
    cout<<"lcm: "<<lcm<<endl;

    //¿é¤J¤é´Á
    char c;
    cin>>y>>c>>m>>c>>d;
    d+=lcm;

    //main
    bool
}
