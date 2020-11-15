#include "pch.h"
#include "CppUnitTest.h"
#include "../лаб 6,2/лаб 6,2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 6;
			int a[n]{ 10, 4, 7, 3, 0, 1 };
			t = Min(a, n);
			Assert::AreEqual(t, 4);
		}
	};
}
