/*
This test contains the methods that test each method of the VariableValue class
*/

#include "pch.h"
#include "CppUnitTest.h"
#include "../VariableValues/VAriableValues.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VariableValuesTest
{
	TEST_CLASS(VariableValuesTest)
	{
	public:
		TEST_METHOD(Constructor_HappyPath_EmptyListWasCreated)
		{
			VariableValues* myList = new VariableValues();//each list is instantiated separately so that each method is independent of the other
			Assert::AreEqual((int)(myList->getList().size()), 0);//myList->getList().size() returns type size_t
		}

		TEST_METHOD(Add_HappyPath_EntrieWasAdded)
		{
			VariableValues* myList = new VariableValues();
			myList->addDouble(3.333);
			double firstValue = *(myList->getList().begin());//myList->getList().begin() returns type iterator
			Assert::AreEqual(firstValue, 3.333);
		}

		TEST_METHOD(calculateSum_HappyPath_sumWasCalculated)
		{
			VariableValues* myList = new VariableValues();
			addThreeEntries(myList);

			Assert::AreEqual(myList->calculateSum(), 3.333 + 4.44 + 5.5);
		}

		TEST_METHOD(calculateAvarage_HappyPath_avarageWasCalculated)
		{
			VariableValues* myList = new VariableValues();
			addThreeEntries(myList);

			Assert::AreEqual(myList->calculateAverage(), (3.333 + 4.44 + 5.5) / 3);
		}

		TEST_METHOD(cleanList_HappyPath_ToEmptyList)
		{
			VariableValues* myList = new VariableValues();
			addThreeEntries(myList);
			myList->cleanList();

			Assert::AreEqual((int)(myList->getList().size()), 0); 
		}

		//This function adds 3 entries to a passed list
		void addThreeEntries(VariableValues* someList)
		{
			someList->addDouble(3.333);
			someList->addDouble(4.44);
			someList->addDouble(5.5);
		}
	};
}
