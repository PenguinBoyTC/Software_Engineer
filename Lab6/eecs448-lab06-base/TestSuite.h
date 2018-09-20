
#ifndef TESTSUITE_H
#define TESTSUITE_H

#include "LinkedListOfInts.h"
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class TestSuite
{
	public:
		TestSuite();
		void setTestSize(int testsize);
		void runTests();
		void printPassFail(std::string Description, bool isPassed);

		bool test_1(); //size of empty list is zero  
		bool test_2(); //size returns correct value after 1 addFront
		bool test_3(); //size returns correct value after 1 addBack
		bool test_4(); //size returns correct value after multiple addFront
		bool test_5(); //size returns correct value after multiple addBack 
		bool test_6(); //isEmpty return true when list is empty 
		bool test_7(); //size returns correct value after adds and removeFront
		bool test_8(); //size returns correct value after adds and removeBack 
		bool test_9(); //search returns false on empty list
		bool test_10(); //search return true if the value is in the list, false otherwise.
		bool test_11(); //removeFront on empty list returns false; On non-empty list return true.
		bool test_12(); //removeBack on empty list returns false; On non-empty list return true.
		bool test_13(); //addFront add each element to the front of the list
		bool test_14(); //addBack add each element to the back of the list
		bool test_15(); //removeFront remove each element from the front of the list
		bool test_16(); //removeBack remove each element from the back of the list
		bool test_17(); //Destructor should Deletes all nodes in the list.
		void FinalResult();

	private:
		int TestNum;
		int m_testsize;
		bool test1;
		bool test2;
		bool test3;
		bool test4;
		bool test5;
		bool test6;
		bool test7;
		bool test8;
		bool test9;
		bool test10;
		bool test11;
		bool test12;
		bool test13;
		bool test14;
		bool test15;
		bool test16;
		bool test17;
};

#endif 
