#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
// qsort();rand();��cstlib����
//ctime,cctype isdigit();isalpha();
#include<vector>
#include<algorithm>
#include<map>
#include<bitset>
#include<set>


using namespace std;
char str[100];
vector<int>arr1(100);
vector<int>list;
int arr2[100];
int cmp(int a, int b)
{
	return a > b;
}
int main()
{
	//memset(str, 0x3f3f3f, sizeof(str));
	//strlen(str);
	//list.push_back(1);
	//list.push_back(1);
	//cin.getline(str, 100);
	//arr1[0] = 100;
	vector<int>::iterator p = arr1.begin();
	//iterator ��������arr1.begin(),arr1.end()���һ��Ԫ�ص���һ��Ԫ�صĵ���������Ԫ��ʵ���������в�����
	// list.size() o(1);list.clear();list.empty();list.erase();list.push_back(),list.pop_back() 
	//str.length() o(n);str.size();str.insert(1,"aaa");str.insert(str.begin(),'a');str.append(str2);str.compare(str2);str==str2;str+=str2;
	//min(1,2) max(1,2) min_element();max_element();nth_element(arr.begin(),arr.begin()+3,arr.end()) �ź�����n��Ԫ����ʲô
	//swap(arr[0],arr[1]) reverse(arr.begin(),arr.end()),unique(arr.begin(),arr.end());
	//stack<int> sta;sta.push(1)
	//queue<int> que o(1); �Ƚ��ȳ� priority_queue<int> que;o(logn)
	//set<int> st;o(logn) �Դ�ȥ�� st.find(1) st.erase(1)
	//map ӳ�� pair<int,int>origin;origin=make_pair(0,0); origin.first=origin.second pair<string,int> id; id=make_pair("somebody",110);
	// map<string,int> studentheight;studentheight["С��"]=170;studentheight.insert(id);studentheight.erase("С��") 
	map<string,int> height=
	{ {"1",1},{"2",2}
	};
	list = { 1, 3, 2, 5, 4 };
	int n = 5;
	nth_element(list.begin(), list.begin() + 2, list.end());
	int firstLoc = lower_bound(list.begin(), list.end(), 2) - list.begin();
	int lastLoc=upper_bound(list.begin(), list.end(), 2) - list.begin();


	sort( list.begin(),list.end() );//ϵͳĬ��������
	// ���Ӷ�o��nlogn��
	for (int i = 0; i < n; i++)
	{
		cout << list[i] << endl;
	}
	for (vector<int>::iterator it = list.begin(); it != list.end(); it++)
	{
		cout << *it << endl;
	}
	sort(list.begin(), list.end(),cmp);// ��ʱ�ǽ���
	for (int i = 0; i < n; i++)
	{
		cout << list[i] << endl;
	}
	//int* p2 = arr2;
	//printf("%d",*p);

	cin.get();
	return 0;
}