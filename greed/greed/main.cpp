#include<iostream>

using namespace  std;

// ����
void Joseph(int n, int m)
{
	int a[100], k = 0, p = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
	while (n > 1)
	{
		p = (p + m - 1) % n;
		cout << "��" << ++k << "����Ȧ����" << a[p] << endl;
		for (int j = p + 1; j < n; j++)
		{
			a[j - 1] = a[j];
		}
		n--;
		if (p == n) p = 0;
	}
	cout << "���ʣ�µ��ǣ�" << a[p] << endl;
}
// online judge

int main()
{
	//Joseph(7, 3);
	//��Ԫ�ټ�
	//for (int x = 0; x <= 25; x++)
	//{
	//	if ((200 - 8 * x) % 14 == 0 && (1200 - 6 * x) % 14 == 0)
	//		cout << x << " " << (200 - 8 * x) / 14 << " " << (1200 - 6 * x) /14 << endl;
	//}
	//Division

	cin.get();
}