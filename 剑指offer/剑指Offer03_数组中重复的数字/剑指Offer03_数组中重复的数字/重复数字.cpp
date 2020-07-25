#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<unordered_map>
# include<unordered_set>
using namespace std;

class Solution {
public:
	// ����1 ����ʱ 
	//int findRepeatNumber(vector<int>& nums) {
	//	int len = nums.size();
	//	for (int i = 0; i < len - 1; i++) {
	//		for (int j = i+1; j < len; j++)
	//		{
	//			if (nums[i] == nums[j])  return nums[i]; 
	//		}
	//	}
	//	return 0;
	//}

	// ������  ��count��
	//int findRepeatNumber(vector<int>& nums) {
	//	int len = nums.size();
	//	for (int i = 0; i < len;i++) {
	//		if (count(nums.begin(), nums.end(), i) > 1)  return i;
	//	}
	//	return 0;
	//}
	// �������ַ���Ч��̫��

	// ������ ��unodered_set��
	//int findRepeatNumber(vector<int>& nums) {
	//	unordered_set<int> set;
	//	for (auto i : nums) {
	//		if (set.count(i) == 1) return i;
	//		else set.insert(i);
	//	}
	//	return 0;
	//}

	//������ ��unrdered_map
	int findRepeatNumber(vector<int>& nums) {
		unordered_map<int, int> map;
		for (int i : nums)
			if (map[i] ++ == 1) return i;
		return 0;
	}

};



int main() {
	Solution solution;
	vector<int> nums = { 2, 3, 1, 0, 2, 5, 3 };
	cout << solution.findRepeatNumber(nums) << endl;
	system("pause");
}
