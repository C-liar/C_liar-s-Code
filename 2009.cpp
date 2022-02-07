#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main()
{	int x=0,a=0,t=0,b=0,i=0;
	cin>>i;
	for(x=i;x>=0;x--){
		cin>>a;
		if (a!=0) b=1;
		if((x!=0)&&(x!=1)){
			if (t==0){
				t=1;
				if ((a>0)&&(a!=1)){
					cout<<a<<"x^"<<x;
				}
				else if (a==1){
					cout<<"x^"<<x;
				}
				else if ((a<0)&&(a!=-1)){
					cout<<a<<"x^"<<x;
				}
				else if (a==-1){
					cout<<"-x^"<<x;
				}
			}	
			else {
				if ((a>0)&&(a!=1)){
					cout<<"+"<<a<<"x^"<<x;
				}
				else if (a==1){
					cout<<"+x^"<<x;
				}
				else if ((a<0)&&(a!=-1)){
					cout<<a<<"x^"<<x;
				}
				else if (a==-1){
					cout<<"-x^"<<x;
				}
			}
		}
		else if(x==1){
			if (t==0){
					t=1;
					if ((a>0)&&(a!=1)){
						cout<<a<<"x";
					}
					else if (a==1){
						cout<<"x";
						}
						else if ((a<0)&&(a!=-1)){
							cout<<a<<"x";
						}
						else if (a==-1){
							cout<<"-x";
						}
					}	
			else {
						if ((a>0)&&(a!=1)){
							cout<<"+"<<a<<"x";
						}
						else if (a==1){
							cout<<"+x";
						}
						else if ((a<0)&&(a!=-1)){
							cout<<a<<"x";
						}
						else if (a==-1){
							cout<<"-x";
						}
					}
			}		
		else {
			if (a>0){
				cout<<"+"<<a;
			}
			else if (a<0){
				cout<<a;
			}
		
		}
	}
	if (b==0) cout<<0;
	return 0;
}
/*
if (a>0){
	
	cout<<+a<<"x^"<<x;
}
else if (a<0){
	cout<<a<<"x^"<<x;
}


if (a==1){
	cout<<"x^"<<x;
}*/
