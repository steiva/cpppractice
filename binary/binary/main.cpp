#include<cstdio>
#include<iostream>

using namespace std;

double l, r, mid;
//α����
//while (right - left > eps)
//{
//	mid = (right + left) / 2;
//	if (judge(mid)) left = mid;
//	else right = mid;
//
//}
//return mid;
//while (l <= r)
//{
//	int mid = (l + r) >> 1;
//	if (judge(mid0))
//	{
//		ans = mid;
//		l = mid + 1;
//	}
//	else r = mid - 1;
//}
//��Сֵ��� ���ֵ��С ����
//���ַ�
//while (f(lmid) !=max))
//{
//	if (f(lmid) > f(rmid))
//	{
//		lmid = (rmid - l) / 3;
//		rmid = 2 * (rmid - l) / 3;// �������Ϊ[l,rmid]
//	}
//	else 
//	{
//		lmid = (r - lmid) / 3;
//		rmid = 2 * (r - lmid) / 3;
//	}
//}

//������
//a^b mod p
// b�������Ʋ��
//a^b=a^b1+a^b2+......a^bk;
//���Ӷ�o(logb)

int quickpow(int a, int p, int mod)
{
	int ans = 1; a = a % mod;
	while (p)
	{
		if (p & 1) ans = (ans*a) % mod;
		p >> 1;
		a = (a*a) % mod;
	}
	return ans;
}

// ���������
//eg:fibonaci
//(Fn Fn - 1) = (1 1;1 0)^(n-1)*(F1 F0)
//�ƹ�����Fi=a*Fi-1+b*Fi-2
