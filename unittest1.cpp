#include "stdafx.h"
#include "CppUnitTest.h"
#include<stdio.h>
#include<stdlib.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace maintest
{		
	TEST_CLASS(MaximumSubsum)
	{
	public:
		
		TEST_METHOD(Test_ac)
		{
			int array[7] = { -7,-6,-5,-4,-3,-2,-1 };
			int len = sizeof(array) / sizeof(array[0]);
			int sum = 0;
			int thisSum = 0;
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
			int right = 0;
			Assert::AreEqual(right, sum);
		}

		TEST_METHOD(Test_abeg)
		{
			int array[7] = { 1,1,1,1,1,1,1 };
			int len = sizeof(array) / sizeof(array[0]);
			int sum = 0;
			int thisSum = 0;;
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
			int right = 7;
			Assert::AreEqual(right, sum);
		}

		TEST_METHOD(Test_abef)
		{
			int array[7] = { 1,0,-1,-2,-3,-4,-5 };
			int len = sizeof(array) / sizeof(array[0]);
			int sum = 0;
			int thisSum = 0;
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
			int right = 1;
			Assert::AreEqual(right, sum);
		}

		TEST_METHOD(Test_abdg)
		{
			int array[7] = { -5,-4,-3,-2,-1,0,1 };
			int len = sizeof(array) / sizeof(array[0]);
			int sum = 0;
			int thisSum = 0;
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
			int right = 1;
			Assert::AreEqual(right, sum);
		}

		TEST_METHOD(Test_abdf)
		{
			int array[6] = { -2,11,-4,13,-5,-2 };
			int len = sizeof(array) / sizeof(array[0]);
			int sum = 0;
			int thisSum = 0;
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
			int right = 20;
			Assert::AreEqual(right, sum);
		}
	};
}