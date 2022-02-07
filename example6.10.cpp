#include<iostream>
using namespace std;
int xn(int);
int x;
int main()
{
	int n;
	cin>>x>>n;
	cout<<x<<"^"<<n<<"="<<xn(n)<<endl;
	return 0;
}
int xn(int n)
{
	if (n==0) return 1;
	else return x*xn(n-1);
}
