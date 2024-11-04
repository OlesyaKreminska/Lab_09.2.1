#include "pch.h"
#include "CppUnitTest.h"
#include <math.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define POW(x, n) (pow((x), (n)))

namespace MyTests
{
    TEST_CLASS(MyMacrosTests)
    {
    public:

        TEST_METHOD(TestMinExpression)
        {
            int x = 5, y = 3, z = 2;
            float expected = MIN(POW((x - z), 2), x - y);
            Assert::AreEqual(expected, (float)MIN(POW((x - z), 2), x - y));
        }

        TEST_METHOD(TestMaxExpression)
        {
            int x = 5, y = 3, z = 1;
            float expected = MAX(x - y, y - z);
            Assert::AreEqual(expected, (float)MAX(x - y, y - z));
        }

        TEST_METHOD(TestPow)
        {
            Assert::AreEqual(9.0, POW(3, 2));
            Assert::AreEqual(1.0, POW(5, 0));
            Assert::AreEqual(0.0, POW(0, 5));
        }
    };
}
