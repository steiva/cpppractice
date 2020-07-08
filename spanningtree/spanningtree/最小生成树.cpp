#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int n;
int father[100005], depth[100005];

// �е�����
struct Edge
{
	int from, to, value;
	// from  �� to�����˵� value �Ǳ�Ȩ
	bool operater < (const Edge& rhs)const
	{
		return value < rhs.value;
	}
};

int find(int x)
{
	if (father[x] != x)
	{
		father[x] = find(father[x]);
	}
	return father[x];
}
// ���Ⱥϲ�������ʽ�ϲ���
void init()
{
	int i;
	for (i = 1; i <= n; i++) {
		father[i] = i;
		depth[i] = 0;

	}
}

void union1(int x, int y)
{
	int fx = find(x), fy = find(y);
	if (depth[fx] > depth[fy])
		father[fy] = fx;
	else
	{
		father[fx] = fy;
		if (depth[fx] == depth[fy])
			depth[fy]++;
	}
}

int Kruskal(Edge* edges, int m)
{//edges�Ǳ߼���m�Ǳ߼��Ĵ�С
	sort(edges, edges + m);//��Ȩ��С��������
	int ret = 0;//����Ȩ
	for(int i=1;i<m;i++)
	{
		if (find(edges[i].from == find(edges[i].to)))
			continue;//�Ѿ���ͬһ��ͨ����
		ret += edges[i].value;// ����Ȩ��������Ȩ
		union1(edges[i].from, edges[i].to);// �ϲ���ͨ��
	}
	return ret;
}

