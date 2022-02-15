#include<bits/stdc++.h>
#define l long long int
using namespace std;
l n, len;
priority_queue
<l, vector<l>, greater<l> >q;

int main() {
	cin >> n;
	for (l i = 1; i <= n; i++) {
		l ll = 0;
		cin >> ll;
		q.push(ll);
	}
	while (q.size() > 1) {
		l a, b;
		a = q.top();
		q.pop();
		b = q.top();
		q.pop();
		q.push(a + b);
		len += a + b;
	}
	cout << len;
	return 0;
}
//ac
