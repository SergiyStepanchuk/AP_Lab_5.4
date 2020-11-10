#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		TEST_METHOD(met_S0)
		{
			Assert::IsFalse(abs(0.644021 - S0(10, 20)) > 0.00001, L"Incorrect func S0!");
		}
	};
}
