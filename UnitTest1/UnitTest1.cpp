#include "pch.h"
#include "CppUnitTest.h"
#include "../Algorythmization Lab 11.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{

	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int minuCount = 0, plusCount = 0, equCount = 0;;
			countSymbols(plusCount, minuCount, equCount, "C:/Users/User/source/repos/Algorythmization Lab 11.1/Algorythmization Lab 11.1/readSymbls.txt");
			Assert::IsTrue(plusCount == 3);
			Assert::IsTrue(minuCount == 4);
			Assert::IsTrue(equCount == 2);
		}
	};
}
