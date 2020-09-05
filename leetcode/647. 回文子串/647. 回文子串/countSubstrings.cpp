#include<iostream>
#include<string>
#include<vector>


using namespace std;

class Solution {
public:
	int countSubstrings(string s) {
		int n = s.size(), ans = 0;
		for (int i = 0; i < 2 * n - 1; ++i) {
			int l = i / 2, r = i / 2 +i % 2;
			while (l>=0 && r<n && s[l]==s[r])
			{
				--l;
				++r;
				++ans;
			}
		}
		return ans;
	}
};

//class Solution {
//public:
//	int countSubstrings(string s) {
//		int n = s.size();
//		string t = "$#";
//		for (const char &c : s) {
//			t += c;
//			t += '#';
//		}
//		n = t.size();
//		t += '!';
//
//		auto f = vector <int>(n);
//		int iMax = 0, rMax = 0, ans = 0;
//		for (int i = 1; i < n; ++i) {
//			// ��ʼ�� f[i]
//			f[i] = (i <= rMax) ? min(rMax - i + 1, f[2 * iMax - i]) : 1;
//			// ������չ
//			while (t[i + f[i]] == t[i - f[i]]) ++f[i];
//			// ��̬ά�� iMax �� rMax
//			if (i + f[i] - 1 > rMax) {
//				iMax = i;
//				rMax = i + f[i] - 1;
//			}
//			// ͳ�ƴ�, ��ǰ����Ϊ (f[i] - 1) / 2 ��ȡ��
//			ans += (f[i] / 2);
//		}
//
//		return ans;
//	}
//};



int main() {

	string s = "aaa";
	Solution solution;
	cout << solution.countSubstrings(s) << endl;
	system("pause");

}