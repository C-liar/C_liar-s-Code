#include<iostream>
using namespace std;
int n;
int pn_1(int n){if (n==1) return 1;return 2*((pn_1(n-1))+1);}
int main(){cin>>n;cout<<pn_1(n);}//ac
