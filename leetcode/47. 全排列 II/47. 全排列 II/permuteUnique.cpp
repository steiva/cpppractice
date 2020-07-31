#include<iostream>
#include<vector>
#include<algorithm>
#include <deque>

using namespace std;

class Solution {
	//�ο�
private:
	vector<vector<int>> res;
	vector<int> sol;
	vector<int> nums;
public:
	vector<vector<int>> permuteUnique(vector<int>& nums) {
		// ��֦����ǰ��������
		sort(nums.begin(), nums.end());
		this->nums = nums;
		vector<bool> used(nums.size(), false);
		dfs(used);
		return res;
	}
private:
	void dfs(vector<bool> used) {
		if (sol.size() == nums.size()) {
			res.push_back(sol);
			return;
		}
		for (int i = 0; i < nums.size(); i++) {
			//��ǰֵ�ù��� �� 
			//��ǰֵ����ǰһ��ֵ�� ���������
			//1 nums[i-1] û�ù� ˵�����ݵ���ͬһ�� ��ʱ������num[i] ����� ͬ����num[i-1] �ظ�
			//2 nums[i-1] �ù��� ˵����ʱ��num[i-1]����һ�� ��Ȳ����ظ�
			if (used[i] || (i > 0 && !used[i - 1] && nums[i] == nums[i - 1])) {//�ù���
				continue;
			}
			sol.push_back(nums[i]);
			used[i] = true;
			dfs(used);
			sol.pop_back();
			used[i] = false;
		}
	}
};

int main(){
	vector<int> nums = { 1,1,2 };
	Solution solution;
	int len = nums.size();
	vector<vector<int>> answer = solution.permuteUnique(nums);
	int row = answer.size();
	int col = answer[0].size();
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << answer[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
}