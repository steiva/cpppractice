#include<iostream>
#include<vector>
#include<stdlib.h>
#include <algorithm>
#include<set>
#include<map>
#include<queue>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef double db;
map<pii, int> mp;
vector<int> ans;
int n,m;
vector<int> a[10];
queue<int> q;
bool vis[12];
int dis[12];

void display() {
	for (int i = 0; i<ans.size(); i++)
	{
		printf("%5d", ans[i]);
	}
	putchar('\n');
	return;
}

void dfs1(int num) 
{

	if (num == n + 1)
	{
		display();
		return;
	}
	for (int i=1; i <= n; i++) {
		if (!vis[i]) {              //(vis[i]==0)Ч������
			ans.push_back(i);
			vis[i] = 1;
			dfs1(num + 1);
			ans.pop_back();
			vis[i] = 0;
		}
	}
	return;
}

void dfs2(int now) {
	vis[now] = 1;
	for (auto to : a[now]) {
		if (!vis[to]) {
			dfs2(to);
		}
	}
	return;
}

void bfs(int st) {
	q.push(st);
	memset(dis, 0x3f, sizeof(dis));//��ʼ��Ϊ������
	dis[st] = 0;
	vis[st] = 1;
	while (!q.empty()){
		int now = q.front(); q.pop();
		for (auto to : a[now]) {
			if (!vis[to]) {
				dis[to] = min(dis[to], dis[now]+1);
				q.push(to);
				vis[to] = 1;
			}
		}
	}
	return;
}

int main()
{
	//cin >> n;
	//dfs1(1);

	// pair ��map ���÷�
	//pii p = {1,1};
	//p.first = 1; p.second = 1; Ч������һ����ͬ
	//mp[p] = 1;
	//cout << mp[p] << endl;

	// ����next_permutation дdfs
	//for (int i = 1; i <= n ; i++) {
	//	ans.push_back(i);
	//}
	//do
	//{
	//	display();
	//} while (next_permutation(ans.begin(),ans.end()));

	// ������python ��lamda����
	//a[1].push_back(1);
	//a[1].push_back(2);
	//a[1].push_back(3);
	//a[1].push_back(4);
	//for (auto t : a[1]) {  //auto �Զ�ʶ����������
	//	printf("%d", t);
	//
	//}
	cin >> n >> m;
	int u, v;
	for (int i = 1; i <= m; i++) {
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	bfs(1);
	for (int i = 1; i <= n; i++) {
		printf("%d%c",vis[i],(i==n)? '\n':' ');
	}
	//cin.get();
	//cin.get();
	system("pause");
	return 0;
}
/*
7 6
1 2
2 4
1 3
2 5
3 7
3 6
*/
//DFS

//int check(����)
//{
//	if (��������)
//		return 1;
//	return 0;
//}
//
//void dfs(int step)
//{
//	�жϱ߽�
//	{
//		��Ӧ����
//	}
//		����ÿһ�ֿ���
//	{
//		   ����check����
//		   ���
//		   ������һ��dfs(step + 1)
//		   �ָ���ʼ״̬�����ݵ�ʱ��Ҫ�õ���
//	}
//}

/*
����ֱ������Զ�����ڵ�ľ��룩ͨ������dfs �Ϳ�����
1.��ȡһ���ڵ�  ��������Զ�Ľڵ�
2.�ҵ������Զ�Ľڵ� ����һ��dfs ��������ڵ���Զ�Ľڵ� ���������Զ·��
*/
