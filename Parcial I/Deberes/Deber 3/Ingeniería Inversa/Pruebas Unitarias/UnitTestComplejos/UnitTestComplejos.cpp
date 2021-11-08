#include "pch.h"
#include "CppUnitTest.h"
#include "../Complejo.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestComplejos
{
	TEST_CLASS(UnitTestComplejos)
	{
	public:
		
		TEST_METHOD(TestMethodSuma)
		{
			Complejo<int> Aa(1,3), Bb(2,4),Cc(3,7),Dd;
			bool op=false;
			Dd = Aa + Bb;
			if (Dd.getImg() == Cc.getImg() && Dd.getReal() == Cc.getReal()) {
				op = true;
			}
			Assert::AreEqual(true, op);
		}

		TEST_METHOD(TestMethodResta)
		{
			Complejo<int> Aa(1, 3), Bb(2, 4), Cc(-1,-1), Dd;
			bool op = false;
			Dd = Aa - Bb;
			if (Dd.getImg() == Cc.getImg() && Dd.getReal() == Cc.getReal()) {
				op = true;
			}
			Assert::AreEqual(true, op);
		}
	};
}
