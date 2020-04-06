#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> array;//定义一个vector数组array
	int number;
	while (1) {
		cin >> number;
		array.push_back(number);//每输入一个数字就把它添加到数组的最后
		if (cin.get() == '\n')//如果是回车符则跳出循环
			break;
	}
	int len = array.size();//返回数组长度为len
	int sum = 0;//记录子数组的和
	int thisSum = 0;
	int low = 0;//记录子数组的底
	int height = 0;//记录子数组的高
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
	printf("%d\n", sum);//将结果打印出来
	system("pause");
	return 0;
}