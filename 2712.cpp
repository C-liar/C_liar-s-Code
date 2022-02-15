#include<bits/stdc++.h>
#define N 510
using namespace std;
//
int n;
bool m[N][N];//monitor
bool is_have_m[N];
int be_monitored[N];
queue <int> q;

int main() {
	//
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x, M, y;
		cin >> x >> M;
		is_have_m[x] = 1;
		for (int j = 1; j <= M; j++) {
			cin >> y;
			be_monitored[y]++;
			m[x][y] = 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (is_have_m[i] && (!be_monitored[i])) {
			q.push(i);
		}
	}
//	bool flag = 0;
	int breakk = 0;
	while (1) {
		//is_exist_O=1;
		int v;
		if (q.empty()) {
			break;
		} else {
			v = q.front();
			q.pop();
			is_have_m[v]=0;
			breakk++;
			for (int i = 1; i <= n; i++) {
				if (m[v][i]) {
					be_monitored[i]--;
					m[v][i] = 0;
					if(be_monitored[i]==0){
						q.push(i);
					}
					//is_exist_O=0;
				}
			}
		}
	}
	bool isss = 0;
	for (int i = 1; i <= n; i++) {
		if (is_have_m[i])isss = 1;
	}
	if (!isss) {
		cout << "YES";
	} else if (isss) cout << n - breakk;
	return 0;
}
