#include "pch.h"
#include "CppUnitTest.h"
#include "../TestLab13.2.1/main.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1321
{
	TEST_CLASS(UnitTest1321)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			Assert::AreEqual(t, 0);
		}
	};
}
