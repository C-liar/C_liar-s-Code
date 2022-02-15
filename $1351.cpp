#include<bits/stdc++.h> //all
#define numbr 101
using namespace std;
//
int N, child[numbr][numbr];
int child_num[numbr], father_num[numbr];
stack<int>s;

int main() {
	//
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int a = 0;
		cin >> a;
		while (a != 0) {
			child_num[i]++;
			child[i][child_num[i]] = a;
			father_num[a]++;
			cin >> a;
		}
	}
	//----
	for (int i = 1; i <= N; i++) {
		if (!father_num[i]) {
			s.push(i);
		}
	}
	int I = 0, to = 0;
	while (!s.empty()) {
		int v = s.top();
		if (to != 0) {
			cout << " ";
		}
		cout << v;
		to++;
		s.pop();
		I++;
		int a = child_num[v];
		for (int i = 1; i <= a; i++) {
			father_num[child[v][i]]--;
			if (father_num[child[v][i]]==0) {
				s.push(child[v][i]);
			}
		}
	}
	return 0;
}
//ac stack model
