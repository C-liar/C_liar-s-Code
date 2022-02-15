#include<bits/stdc++.h>

using namespace std;
//
int N, M;
bool is_connect[101][101];

int main() {
	//
	cin >> N >> M;
	for (int i = 1; i <= M; i++) {
		int A, B;
		cin >> A >> B;
		is_connect[B][A] = 1;
	}
	//floyed
	for (int k = 1; k <= N; k++)
		for (int j = 1; j <= N; j++)
			for (int i = 1; i <= N; i++)
				is_connect[i][j] = is_connect[i][j] || (is_connect[i][k] && is_connect[k][j]);
	int times = 0;
	for (int i = 1; i <= N; i++) {
		bool titimes = 1;
		for (int j = 1; j <= N; j++) {
			if (i == j) {
				continue;
			}
			titimes=titimes&&(is_connect[i][j]|is_connect[j][i]);
			//
		}
		if (titimes) {
			times++;
		}
	}
	cout << times;
	return 0;
}
//ac!
