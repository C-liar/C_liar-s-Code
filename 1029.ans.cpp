#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int m,n,ans,flag;
ll gcd(ll x,ll y)
{
    if(y==0)    {return x;}
    return gcd(y,x%y);
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=sqrt(1ll*m*n);i++)
    {
        if((1ll*n*m)%i==0&&gcd(i,(1ll*n*m)/i)==n)
        {
            ans++;
            if(1ll*i*i==1ll*n*m)  flag=1;
        }
    }
    cout<<ans*2-flag;
    return 0;
}
