#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "../lb6.2/lb6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::vector<int> arr1 = { 17, 12, 3, 6, 5, 10, 8 };
			int minEven1 = findMinEvenRecursive(arr1, 0, -1);
			Assert::AreEqual(6, minEven1);  

			
			std::vector<int> arr2 = { 1, 3, 5, 7, 9 };
			int minEven2 = findMinEvenRecursive(arr2, 0, -1);
			Assert::AreEqual(-1, minEven2);  

			
			std::vector<int> arr3 = { 4, 2, 8, 6 };
			int minEven3 = findMinEvenRecursive(arr3, 0, -1);
			Assert::AreEqual(2, minEven3); 

			
			std::vector<int> arr4 = { -4, -2, -8, 0 };
			int minEven4 = findMinEvenRecursive(arr4, 0, -1);
			Assert::AreEqual(-8, minEven4);  

			
			std::vector<int> arr5 = {};
			int minEven5 = findMinEvenRecursive(arr5, 0, -1);
			Assert::AreEqual(-1, minEven5); 
		}
	};
}
