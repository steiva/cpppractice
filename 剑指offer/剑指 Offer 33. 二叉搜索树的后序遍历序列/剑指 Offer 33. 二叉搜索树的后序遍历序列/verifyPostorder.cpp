#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	bool verifyPostorder(vector<int>& postorder) {

		return recur(postorder, 0, postorder.size() - 1);
	}

	bool recur(vector<int>& postorder, int i, int j) {
		if (i >= j) return true;
		int p = i;
		while (postorder[p]<postorder[j])
		{
			p++;
		}
		int m = p; // ��¼�е�
		while (postorder[p]>postorder[j])
		{
			p++;
		}
		return (p == j) && recur(postorder, i, m - 1) && recur(postorder, m, j-1);
	}
};

int main() {

}