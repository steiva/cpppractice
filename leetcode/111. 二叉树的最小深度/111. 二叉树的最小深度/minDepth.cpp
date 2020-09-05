#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int minDepth(TreeNode* root) {
		if (!root)
			return 0;
		int left = minDepth(root->left), right = minDepth(root->right);
		return (left && right) ? 1 + min(left, right) : 1 + left + right;
		//����Ŀ���������������(left && right)��
		//ʵ����1+left+rightִ��ʱ�ý��������һ������(1 + left + 0 || 1 + right + 0)
		//����ΪҶ�ӽ��(1 + 0 + 0)�����Դ���[1]��[1,null,2]�������������

	}
};

int main() {

}