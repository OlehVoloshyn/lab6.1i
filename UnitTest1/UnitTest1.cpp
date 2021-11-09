#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1 iter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 24;
			int a[n];
			t = Number(a, n);
			Assert::AreEqual(t, 24);
		}
	};
}
