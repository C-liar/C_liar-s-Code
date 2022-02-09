#include<bits/stdc++.h>

using namespace std;
//
int n,op; 
//vector<int>v;
priority_queue<int,vector<int>,greater<int> >q;

int main(){
	//
	cin>>n;
	while(n){
		cin>>op;
		if(op==1){
			int x;
			cin>>x;
			q.push(x);
		}
		if(op==2){
			cout<<q.top()<<endl;
		}
		if(op==3){
			q.pop();
		}
		n--;
	}
	return 0;
}
//ac \(^V^*)/
//STL yyds!
