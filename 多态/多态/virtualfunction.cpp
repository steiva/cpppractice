#include<iostream>

using namespace std;

class base
{
public:
	base(int xx = 0, int yy = 0)
	{
		x = xx;
		y = yy;
	};
	virtual void disp() {
		cout << "base: " << x << " " << y << endl;
	}
private:
	int x, y;
};
class base1:public base
{
public:
	base1(int xx, int yy, int zz) :base(xx, yy)
	{
		z = zz;
	};
	void disp()
	{
		cout << "base1:" << z << endl;
	}

private:
	int z;

};

int main() {
	base obj(3, 4), *objp;// ��������Ķ���Ͷ���ָ��
	base1 obj1(1, 2, 5),*objp1;//����������Ķ���
	objp = &obj;//����ָ��ָ�����
	objp->disp();//���û����Ա����
	objp = &obj1;//����ָ��ָ��������
	objp->disp();//�����������Ա����
	objp1 = &obj1;
	objp1->disp();
	system("pause");
}
