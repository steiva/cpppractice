#include<iostream>
#include<string>
using namespace std;
//���캯��
struct node
{
	int a;
	node(int _a = 0)
	{
		a = _a;
	}
};

int main()
{
	//int number;

	string line;
	int *b = new int[100];
	delete[] b;
	/*��̬�����ڴ�,������̫�õ�*/
	getline(cin, line);
	/*int b[number],��֧�ֶ�̬����*/
	/*int& a = number;
	int* b = &number;
	����ָ�룬ǰ��ʹ��ʱ���üӷ���
	���磺
	viod swapInt(int& a,int& b)
	{
	   int c=a;
	   a=b;
	   b=c;
	}*/
	/*c++���Ժ�����+�����б������ֺ���*/
	//int dfs(int u = 1���� int a,int b=0)
	//{
	//��Ҫ���ڵݹ麯�� 
	//}
	//���õĺ��� dfs();dfs(a),dfs(a,b)
	bool boolean = true;
	const char* cString = "Hello";
	string cppstring = "world";
	cout << "hello world!" << endl;

	cout << boolean << endl;
	cout << cString << endl;
	cout << cppstring << endl;
	cout << line << endl;
	cin.get();
	cin.get();
	int a;
	while (cin >> a)
	{
	}

	return 0;
}