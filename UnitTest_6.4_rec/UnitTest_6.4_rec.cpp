#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.4_rec/lab_6.4_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64rec
{
	TEST_CLASS(UnitTest64rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int a[n] = { 1, -2, 4, 5, -5, -10, 4, 5, 7, 0 };
			int maxIndex = 0;
			findMaxAbs(a, n, maxIndex, 0);

			Assert::AreEqual(5, maxIndex);
		}
	};
}
