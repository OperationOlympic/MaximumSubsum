#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> array;//����һ��vector����array
	int number;
	while (1) {
		cin >> number;
		array.push_back(number);//ÿ����һ�����־Ͱ�����ӵ���������
		if (cin.get() == '\n')//����ǻس���������ѭ��
			break;
	}
	int len = array.size();//�������鳤��Ϊlen
	int sum = 0;//��¼������ĺ�
	int thisSum = 0;
	int low = 0;//��¼������ĵ�
	int height = 0;//��¼������ĸ�
	for (int i = 0; i < len; i++)
	{
		thisSum += array[i];
		if (thisSum > sum)
		{
			sum = thisSum;
		}
		else if (thisSum < 0)
		{
			thisSum = 0;
		}
	}
	printf("%d\n", sum);//�������ӡ����
	system("pause");
	return 0;
}