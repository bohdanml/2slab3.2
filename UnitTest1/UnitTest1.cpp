#include "pch.h"
#include "CppUnitTest.h"
#include "..//2slab3.2/main.cpp"
#include "..//2slab3.2/Student.cpp"
#include "..//2slab3.2/Person.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			{
				std::string name = "Vasya";
				int age = 35;

				Person person(name, age);

				Assert::AreEqual(name, person.getName());
				Assert::AreEqual(age, person.getAge());
			}
		}
	};
}
