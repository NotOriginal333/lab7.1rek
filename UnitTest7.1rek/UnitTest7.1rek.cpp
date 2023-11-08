#include "pch.h"
#include "CppUnitTest.h"
#include "../lab7.1rek/lab7.1rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71rek
{
	TEST_CLASS(UnitTest71rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int rowCount = 2;
			int colCount = 2;

			int** x = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				x[i] = new int[colCount];
			x[0][0] = 2;
			x[1][0] = -1;
			x[0][1] = -2;
			x[1][1] = 0;
			int S = 0;
			int k = 0;
			Calc(x, rowCount, colCount, S, k, 0, 0);
			for (int i = 0; i < rowCount; i++)
				delete[] x[i];
			delete[] x;

			Assert::AreEqual(k, 3);
			Assert::AreEqual(S, 1);
		}
	};
}
