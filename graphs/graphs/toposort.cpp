#include<stdlib.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int deg[100005]; //deg[i] ��ʾi�����
int vis[100005];
vector<int> g[100005];
queue<int> q;
int T, n, m, u, v;

bool toposort() {
	int num = 0;    // num���Ѿ��ź���ĵ�ĸ���
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		num++;
		for (auto to : g[num]) {
			if (vis[to]) { continue; }
			else {
				deg[to]--;
				if (!deg[to]) {
					vis[to] = 1;
					q.push(to);
				}
			}
		}

	}
	if (num == n) { return true; }
	else { return false; }

}

int main() {
	cin >> T;
	while (T--) {
		memset(deg,0,sizeof(deg));
		memset(vis, 0, sizeof(vis));
		for (int i = 1; i <= 10000; i++) {
			g[i].clear();
		}
		while (!q.empty()) {
			q.pop();
		}
		//�����ǳ�ʼ��
		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			cin >> u >> v;
			g[u].push_back(v);
			deg[v]++;
		}
		for (int i = 1; i < n; i++) {
			if (!deg[i]) {
				vis[i] = 1;
				q.push(i);
			}
		}
		if (toposort()) {
			puts("correct");
		}
		else {
			puts("wrong");
		}
	}
	system("pause");
	return 0;
}

/*
while ���зǿ�
ȡ���׵�P
����P���������ڵ�Q��������ȼ�һ
��Q��ʱ���Ϊ0 Q����
*/