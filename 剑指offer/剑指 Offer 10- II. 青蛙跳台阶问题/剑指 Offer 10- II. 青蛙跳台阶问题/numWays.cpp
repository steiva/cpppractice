#include<iostream>

using namespace std;

//�����Ŀ�ȼ���쳲���������
class Solution {
public:
	int numWays(int n) {
		int num[2] = { 1,1 };
		int flag = 0;
		while (flag<n)
		{
			num[flag & 1] = (num[0] + num[1])% 1000000007;
			flag++;
		}
		return num[n & 1];
	}
};

int main() {
	int n = 7;
	Solution solution;
	cout << solution.numWays(n) << endl;
	system("pause");
}