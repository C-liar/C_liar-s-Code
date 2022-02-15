#include <bits/stdc++.h>

using namespace std;

struct node { // a node
	long long val, len, next; // value of this node, length of this node, next node of this node
} e[1000086 * 2]; // node [e]

long long head[1000086], sum[1000086], n, m, ans = 0; // root now, [sum], n, length of the tree, answer

void addEdge (long long u, long long v, long long len) {
	e[++m].next = head[u]; // son
	e[m].val = v; // value
	e[m].len = len; // length
	head[u] = m; // length of the tree
}

// addEdge : u --len-- v

void dfs (long long cur, long long father) {
	sum[cur] = 1; // report [sum]
	for (long long i = head[cur]; i; i = e[i].next) // for i to i.next
		if (e[i].val != father) { // son != father
			dfs(e[i].val, cur); // dfs again
			ans += abs(sum[e[i].val] - (n - sum[e[i].val])) * e[i].len; // calc ans
			sum[cur] += sum[e[i].val]; // calc [sum]
		}
}

// dfs the tree

int main () {
	scanf("%lld", &n); // scan
	for (long long i = 1, u, v, len; i < n; i++) { // only n - 1
		scanf("%lld%lld%lld", &u, &v, &len); // scan
		addEdge(u, v, len); // u --len-- v
		addEdge(v, u, len); // v --len-- u
	} // scan + add stop, then dfs
	dfs(1, 0); // from 1 to dfs (father is 0 because 1 doesn't have father)
	printf("%lld", ans); // print the ans
	return 0; // goodbye the code
}
