#pragma once
#include<math.h>


class complex
{
	double real, imag;
public:
	complex(double real = 0, double imag = 0);//Ĭ�ϲ���
	double abscomplex();
};

complex::complex(double r, double i) //���캯��
{
	real = r;
	imag = i;
}

double complex::abscomplex()// ��Ա����
{
	double n;
	n = real * real + imag * imag;
	return sqrt(n);
}
