#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.2/Lab_5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			double x = 0;
			double n = 1;

			double expectation = 0.0;
			GetA(x, n, a);
			Assert::AreEqual(a, expectation);
		}
	};
}
