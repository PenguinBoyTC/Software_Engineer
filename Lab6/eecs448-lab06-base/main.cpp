/**
*	@author Chong Tan
*	@date 11/3/2017
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "TestSuite.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	// LinkedListOfInts testableList;

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	std::cout << "==================================================================================================\n";
	std::cout << "------Start Testing------\n";
	std::cout << "==================================================================================================\n";
	std::cout << "Running...\n";
	TestSuite myTester;
	myTester.setTestSize(50);
	myTester.runTests();

	std::cout << "And we're done.\nGoodbye.\n";
	
	return (0);

}

