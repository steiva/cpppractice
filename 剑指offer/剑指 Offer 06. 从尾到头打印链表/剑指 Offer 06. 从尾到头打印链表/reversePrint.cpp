#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

 class Solution {
 public:
	 vector<int> reversePrint(ListNode* head) {
		 // ����1 reverse��
		 vector<int> res;
		 while (head)
		 {
			 res.push_back(head->val);
			 head = head->next;
		 }
		 reverse(res.begin(), res.end());
		 return res;
	 }
 };
 //����2����ջ��
/*
stack<int> s;
//��ջ
while(head){
	s.push(head->val);
	head = head->next;
}
//��ջ
while(!s.empty()){
	res.push_back(s.top());
	s.pop();
}
return res;
*/

//����3���ݹ�
/*
if(head == nullptr)
	return res;
reversePrint(head->next);
res.push_back(head->val);
return res;
*/

//����4���ı�����ṹ
 ListNode *pre = nullptr;
 ListNode *next = head;
 ListNode *cur = head;
 while (cur) {
	 next = cur->next;//���浱ǰ������һ���ڵ�
	 cur->next = pre;//��ǰ���ָ��ǰһ���ڵ㣬����ı�ָ��
	 pre = cur;//����ǰһ���ڵ�
	 cur = next;//���µ�ǰ���
 }
 while (pre) {//��һ��whileѭ��������preָ���µ�����ͷ
	 res.push_back(pre->val);
	 pre = pre->next;
 }
 return res;
	}
};

���ߣ�wangxiaole
���ӣ�https ://leetcode-cn.com/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof/solution/csan-chong-jie-fa-reversefan-zhuan-fa-dui-zhan-fa-/
��Դ�����ۣ�LeetCode��
����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������


 int main() {
	 vector<int> num = { 1,3,2 };
	 ListNode *head,*tail, *p;;
	 head = (ListNode*)malloc(sizeof(ListNode));
	 tail = head;
	 for (auto i : num)
	 {
		 p = (ListNode*)malloc(sizeof(ListNode));
		 p->val = i;
		 tail->next = p;
		 tail = p;
		 tail->next = NULL;
	 }
	 	 p = head->next;
	 while (p)
	 {
		 printf("%d", p->val);
		 p = p->next;
		 if (p)
			 printf(" ");
		 else
			 printf("\n");
	 }

	 Solution solution;
	 vector<int>result=solution.reversePrint(head->next);
	 for (auto j : result)
	 {
		 cout << j << ' ';
	 }
	 cout << endl;
	 system("pause");
 

 }

 //���ֹ��캯��

 //#include <stdio.h>
//#include <stdlib.h>
// typedef struct LNode
// {
//	 int data;
//	 struct LNode *next;
// }LNode;
// //���뺯��
// LNode *input(int n)
// {
//	 LNode *head, *tail, *p;
//	 head = (LNode*)malloc(sizeof(LNode));
//	 tail = head;
//	 for (int i = 0; i < n; i++)
//	 {
//		 p = (LNode*)malloc(sizeof(LNode));
//		 scanf("%d", &p->data);
//		 tail->next = p;
//		 tail = p;
//		 tail->next = NULL;
//	 }
//	 return head;
// }
// void output(LNode *head)
// {
//	 LNode *p;
//	 p = head->next;
//	 while (p)
//	 {
//		 printf("%d", p->data);
//		 p = p->next;
//		 if (p)
//			 printf(" ");
//		 else
//			 printf("\n");
//	 }
// }
// int main()
// {
//	 LNode *head;
//	 int n;
//	 scanf("%d", &n);
//	 head = input(n);
//	 output(head);
//	 return 0;