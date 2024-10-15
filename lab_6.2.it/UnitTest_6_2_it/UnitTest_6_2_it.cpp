#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.2.it/lb_6.2.it.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod2)
        {
            const int SIZE = 10;
            int arr[SIZE]{};
            int MIN = -10;
            int MAX = 10;
            create(arr, SIZE, MIN, MAX);
            Assert::AreEqual(9, FindingTheArithmetic(arr, SIZE), 0.001);
        }
    };
}
