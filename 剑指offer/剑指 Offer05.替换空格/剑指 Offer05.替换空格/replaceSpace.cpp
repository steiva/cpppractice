#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
	string replaceSpace(string s) {
		string res;
		for (auto c : s) {
			if (c == ' ')
				res += "%20";
			else
				res += c;
		}
		return res;
	}
};


//int main(){
//	string s = "We are happy.";
//	Solution solution;
//	/*int len = s.size();*/
//	//int *p = new int[len];
//	//memset(p,0,sizeof(int)*len);
//	//for (int i = 0; i < len; i++)cout << p[i] << endl;
//	//vector<int> location(len);
//	//for(int i=0;i<location.size();i++){ cout << location[i] << endl; }
//	cout << solution.replaceSpace(s) << endl;
//	system("ause");
//}

int main()
{
	//string str = "abddghj";
	//string::iterator it;     //ָ��string��ĵ���������������Ϊָ��
	//for (it = str.begin(); *it != ' '; it++)
	//{
	//	if (*it == 'd')
	//	{
	//		str.erase(it);          //ɾ��it����һ���ַ�
	//		break;
	//	}
	//}
	//cout << str << endl;
	string s = "We are happy.";
	Solution soluton;
	cout << soluton.replaceSpace(s) << endl;
	system("pause");
	return 0;
}