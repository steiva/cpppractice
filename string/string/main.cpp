#include<iostream>
#include<string>

using namespace std;

//string s1();
//string s2("hello");
//string s3(4, 'k');//s3="kkkk"
//string s4 ("12345", 1, 3);//s4="234",����12345���Ĵ��±�1��ʼ������Ϊ3���Ӵ�
const static int maxn = 10000;


//+ += append compare substr()���Ӵ� empty() �ж�Ϊ��
//find: ��ǰ��������Ӵ����ַ����ֵ�λ��
//rfind���Ӻ���ǰ�����Ӵ����ַ�����λ��
//find_first_of:��ǰ������Һδ�������һ���ַ����а������ַ���
//s1.find_first_of("abc") ��һ�γ��֡�abc����λ��
//find_last_of find_first_not_of find_last_not_of
//replace erase substr push_back(char c)


int tree[maxn][30];//�ֵ���
int tot;
void insert_(char *str)
{
	int len = strlen(str);
	int root = 0;
	for (int i = 0; i < len; i++)
	{
		int id = str[i] - 'a';
		if (!tree[root][id]) tree[root][id] = ++tot;
		root = tree[root][id];

	}
}
int find_(char *str)
{
	int len = strlen(str);
	int root = 0;
	for (int i = 0; i < len; i++)
	{
		int id = str[i] - 'a';
		if (!tree[root][id])return 0;
		root = tree[root][id];
	}
}
int main()
{
	int t, q;
	char s[20];
	cin >> t >> q;
	while (t--)
	{
		cin >> s;
		insert_(s);
	}
	while (q--)
	{
		cin >> s;
		if (find_(s))cout << "yes" << endl;
		else cout << "No" << endl;
		cin.get();
	}
}