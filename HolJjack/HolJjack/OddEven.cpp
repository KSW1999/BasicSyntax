#include <iostream>
#include "OddEven.h"

using namespace std;

OddEven::OddEven()
{
	cout << "���� ������ �Է��Ͻÿ� : ";
	cin >> N;
}
OddEven::~OddEven()
{

}
void OddEven::Decision()
{
	Sum = 0;
	if (N % 2 == 1)
	{
		Odd();
	}
	else if (N % 2 == 0)
	{
		Even();
	}
	else
	{
		cout << "�Է��� �߸��Ǿ����ϴ�." << endl;
	}
}
void OddEven::Odd()
{
	for (int i = 0; i < N+1; i++)
	{
		if (i % 2 == 1)
		{
			Sum += i;
		}
	}
	cout << Sum << endl;
}
void OddEven::Even()
{
	for (int i = 0; i < N+1; i++)
	{
		if (i % 2 == 0)
		{
			Sum += i;
		}
	}
	cout << Sum << endl;
}
