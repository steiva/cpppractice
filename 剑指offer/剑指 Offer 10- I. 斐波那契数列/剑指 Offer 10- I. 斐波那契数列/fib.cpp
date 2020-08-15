#include<iostream>

using namespace std;
// ����1
//class Solution {
//public:
//	int fib(int n) {
//		int num0 = 0, num1 = 1;
//		int flag = 0;
//		while (flag < n)
//		{
//			int temp = num1;
//			num1 = (num0 + num1) % 1000000007;//����Ҫȡģ 1e9+7��1000000007����������ʼ���Ϊ��1000000008���뷵�� 1��
//			num0 = temp;
//			flag = flag + 1;
//		}
//
//		return num0;
//	}
//};
// ����2
//class Solution {
//public:
//	int fib(int n) {
//		int num[2] = { 0,1 };
//		int flag = 0;
//		while (flag < n)
//		{
//			num[flag & 1] = (num[0] + num[1])% 1000000007;
//			flag++;
//		}
//
//		return num[n & 1];
//	}
//};

//�ݹ� ����3

class Solution {
private:
	int constant = 1000000007;
public:
	int fib(int n) {
		if (n < 2)return n;
		return fib(n - 1) + fib(n - 2);
		int first = fib(n - 1) % constant;
		int second = fib(n - 2) % constant;
		return (first + second) % constant;

	}
};

int main() {
	int n = 8;
	Solution solution;
	cout << solution.fib(n) << endl;
	system("pause");

}