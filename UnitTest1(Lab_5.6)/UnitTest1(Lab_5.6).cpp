#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.1/Lab_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1Lab56
{
	TEST_CLASS(UnitTest1Lab56)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double l = h(1, 1);
			Assert::AreEqual(l, 0.5);
		}
	};
}
