#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stdlib.h>

using namespace std;

#define maxn 0x3f;

//typedef struct
//{
//	int Code;
//	char Name[20];
//	char Sex;
//	int Age;
//}Student;
//Student Stu, Stu[10], *pstu;

// ���湹��
struct Student1
{
	int Code;
	char Name[20];
	char Sex;
	int Age;
}Stu,*pStu;

//��һ�ָ�ֵ����
struct  Student1 Stu1 = { 1020,"����",'m',20 };
struct Student1 Stu2[10];

struct test
{
	char name[10];
	float score;
};

void print_score(test &pn)
{
	cout << pn.name << "\t" << pn.score << endl;
}

int main() {
	struct Student1 *pStu1 = &Stu1;
	cout << "Stu.code= " << Stu.Code << endl;                 //����ṹ����������ֲ�ͬ��ʽ
	cout << "pStu1->Code= " << pStu1->Code << endl;
	cout << "(*pStu1).Code= " << (*pStu1).Code << endl;
	test a[2] = { {"����",88.5},{"����",98.5} };
	int num = sizeof(a) / sizeof(test);
	for (int i = 0; i < num; i++) {
		print_score(a[i]);
	}
	system("pause");
}