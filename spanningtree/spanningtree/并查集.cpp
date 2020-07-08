#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int n;
int father[100005],depth[100005];
// �����������
void init() {
	for (int i = 1; i <= n; i++)
	{
		father[i] = i;
	}
}


//int find(int x) //�ǵݹ�
//{
//	while (father[x]!=x)
//	{
//		x = father[x];
//	}
//	return x;
//}

int find(int x) //�ݹ�
{
	if (father[x] != x)
		return find(father[x]);
	else
		return x;
}
// x y�Ƿ�����ͬһ����
bool judge(int x, int y)
{
	x = find(x);
	y = find(y);
	if (x == y)
	{
		return true;
	}
	else
		return false;
}

// �ϲ�
void union1(int x, int y) //ע��union ��c++�Ĺؼ��� ���������
{
	x = find(x);
	y = find(y);
	father[y] = x;
}

// �Ż�
int find(int x)
{
	if (father[x] != x)
	{
		father[x] = find(father[x]);
	}
	return father[x];
}
// �ǵݹ�д��  �ٶȸ���
//int find(int x) {
//	int r = x, q;
//	while (r!=father[r])
//	{
//		q = father[x];
//		father[x] = r;
//		x = q;
//	}
//	return r;
//}
// ���Ӷ��ȶ�

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