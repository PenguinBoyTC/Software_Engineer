#include "TestSuite.h"

TestSuite::TestSuite()
{
	m_testsize = 0;
	TestNum = 0;
	test1 = true;
	test2 = true;
	test3 = true;
	test4 = true;
	test5 = true;
	test6 = true;
	test7 = true;
	test8 = true;
	test9 = true;
	test10 = true;
	test11 = true;
	test12 = true;
	test13 = true;
	test14 = true;
	test15 = true;
	test16 = true;
	test17 = true;
}
void TestSuite::setTestSize(int testsize)
{
	m_testsize = testsize;
}
void TestSuite::runTests()
{
	if(!test_1())
	{
		test1 = false;
	}
	if(!test_2())
	{
		test2 = false;
	}
	if(!test_3())
	{
		test3 = false;
	}
	if(!test_4())
	{
		test4 = false;
	}
	if(!test_5())
	{
		test5 = false;
	}
	if(!test_6())
	{
		test6 = false;
	}
	if(!test_7())
	{
		test7 = false;
	}
	if(!test_8())
	{
		test8 = false;
	}
	if(!test_9())
	{
		test9 = false;
	}
	if(!test_10())
	{
		test10 = false;
	}
	if(!test_11())
	{
		test11 = false;
	}
	if(!test_12())
	{
		test12 = false;
	}
	if(!test_13())
	{
		test13 = false;
	}
	if(!test_14())
	{
		test14 = false;
	}
	if(!test_15())
	{
		test15 = false;
	}
	if(!test_16())
	{
		test16 = false;
	}
	if(!test_17())
	{
		test17 = false;
	}
	FinalResult();
}
void TestSuite::printPassFail(std::string Description, bool isPassed)
{
	TestNum++;
	std::cerr<<"Test "<<TestNum<<": "<<Description<<": ";
	if(isPassed)
	{
		std::cerr << "PASSED" << std::endl;
	}
	else
	{
		std::cerr << "FAILED" << std::endl;
	}
}
void TestSuite::FinalResult()
{
	std::cerr <<"=================================================================================================="<<std::endl;
	std::cerr <<"Here is the list of Failed test:"<<std::endl;
	if(!test1)
	{
		std::cerr << "Test 1; " ;
	}
	if(!test2)
	{
		std::cerr << "Test 2; " ;
	}
	if(!test3)
	{
		std::cerr << "Test 3; " ;
	}
	if(!test4)
	{
		std::cerr << "Test 4; " ;
	}
	if(!test5)
	{
		std::cerr << "Test 5; " ;
	}
	if(!test6)
	{
		std::cerr << "Test 6; " ;
	}
	if(!test7)
	{
		std::cerr << "Test 7; " ;
	}
	if(!test8)
	{
		std::cerr << "Test 8; " ;
	}
	if(!test9)
	{
		std::cerr << "Test 9; " ;
	}
	if(!test10)
	{
		std::cerr << "Test 10; " ;
	}
	if(!test11)
	{
		std::cerr << "Test 11; " ;
	}
	if(!test12)
	{
		std::cerr << "Test 12; " ;
	}
	if(!test13)
	{
		std::cerr << "Test 13; " ;
	}
	if(!test14)
	{
		std::cerr << "Test 14; " ;
	}
	if(!test15)
	{
		std::cerr << "Test 15; " ;
	}
	if(!test16)
	{
		std::cerr << "Test 16; " ;
	}
	if(!test17)
	{
		std::cerr << "Test 17; " ;
	}
	std::cerr <<"\n";
	std::cerr <<"=================================================================================================="<<std::endl;
}
bool TestSuite::test_1()
{
	LinkedListOfInts list;
	bool isPassed = false;
	if(list.toVector().size()==0)
	{
		if(list.size()==0)
		{
			isPassed = true;
		}
		else
		{
			isPassed = false;
		}
	}
	else
	{
		std::cerr << "There is an error in size()" << std::endl;
	}
	printPassFail(" size of empty list is zero", isPassed);
	return isPassed;
}
bool TestSuite::test_2()
{
	LinkedListOfInts list;
	bool isPassed = false; 
	list.addFront(1);
	if(list.size()==1 && list.toVector().size()==1)
	{
		isPassed = true;
	}
	else
	{
		isPassed = false;
	}
	printPassFail(" size returns correct value after 1 addFront", isPassed);
	return isPassed;
}
 bool TestSuite::test_3()
 {
 	LinkedListOfInts list;
	bool isPassed = false;
	list.addBack(1);
	if(list.size()==1 && list.toVector().size()==1)
	{
		isPassed = true;
	}
	else
	{
		isPassed = false;
	}
	printPassFail(" size returns correct value after 1 addBack", isPassed);
	return isPassed;
}
bool TestSuite::test_4()
{
	LinkedListOfInts list;
	bool isPassed = false;
	for(int i=0; i<m_testsize; i++)
	{
		list.addFront(i);
	}
	if(list.size()==m_testsize && list.toVector().size()==50)
	{
		isPassed = true;
	}
	else
	{
		isPassed = false;
	}
	printPassFail(" size returns correct value after multiple addFront", isPassed);
	std::cerr<<"-------- Adding "<<list.size()<<"/"<<m_testsize<<" nodes to the list\n";
	return isPassed;
}
bool TestSuite::test_5()
{
	LinkedListOfInts list;
	bool isPassed = false;
	for(int i=0; i<m_testsize; i++)
	{
		list.addBack(i);
	}
	if(list.size()==m_testsize && list.toVector().size()==50)
	{
		isPassed = true;
	}
	else
	{
		isPassed = false;
	}
	printPassFail(" size returns correct value after multiple addBack", isPassed);
	std::cerr<<"-------- Adding "<<list.size()<<"/"<<m_testsize<<" nodes to the list\n";
	return isPassed;
}
bool TestSuite::test_6()
{
	LinkedListOfInts list;
	bool isPassed = false;
	int error=0;
	std::string message = "";
	//0 node
	if(list.size()==0)
	{
		if(!list.isEmpty())
		{
			error++;
			message = "There is a error in isEmpty when the list is empty\n";
		}
	}
	//1 node
	list.addFront(10);
	if(list.size()==1)
	{
		if(list.isEmpty())
		{
			error++;
			message = "There is a error in isEmpty when the list has a node\n";
		}
	}
	//mutiple nodes
	for(int i=0; i<m_testsize; i++)
	{
		if(i%2==0)
		{
			list.addFront(i);
		}
		else
		{
			list.addBack(i);
		}
	}
	if(list.size()>1)
	{
		if(list.isEmpty())
		{
			error=error+10;
			message = "There is a error in isEmpty when the list has multiple node\n";
		}
	}
	if(error==1)
	{
		isPassed = false;
	}
	else if(error==0)
	{
		isPassed = true;
	}
	else if(error==2)
	{
		isPassed = false;
		message = "The isEmpty() method has error whenever the list is empty or has one node\n";
	}
	else if(error>10)
	{
		isPassed = false;
		message = "The isEmpty() always return true\n";
	}
	printPassFail(" isEmpty return true when list is empty", isPassed);
	std::cerr<<"-------- "<<message;
	return isPassed;
}
bool TestSuite::test_7()
{
	LinkedListOfInts list;
	bool isPassed = false;
	int error=0;
	int NumOfNodes = m_testsize;
	std::string message = "";
	for(int i=0; i<m_testsize; i++)
	{
		if(i%2==0)
		{
			list.addFront(i);
		}
		else
		{
			list.addBack(i);
		}
	}
	if(list.size()==m_testsize)
	{
		for(int i=0; i<m_testsize; i++)
		{
			list.removeFront();
			NumOfNodes--;
			if(list.size()!=NumOfNodes)
			{
				error++;
			}
		}		
	}
	if(error!=0)
	{
		if(list.size()>0 && list.toVector().size()==0)
		{
			message = "Reason: The nodes has been removed but they forget to reduce the size.";
		}
		isPassed = false;
	}
	else
	{
		isPassed = true;
	}
	printPassFail(" size returns correct value after adds and removeFront", isPassed);
	std::cerr<<"-------- Removed "<<(m_testsize-list.size())<<"/"<<m_testsize<<" nodes from the list."<<message;
	std::cerr<<" In size(): "<<list.size()<<" now; Vector size(): "<<list.toVector().size()<<" now.\n";
	return isPassed;
}
bool TestSuite::test_8()
{
	LinkedListOfInts list;
	bool isPassed = false;
	int error=0;
	int NumOfNodes = m_testsize;
	std::string message = "";
	for(int i=0; i<m_testsize; i++)
	{
		if(i%2==0)
		{
			list.addFront(i);
		}
		else
		{
			list.addBack(i);
		}
	}
	if(list.size()==m_testsize)
	{
		for(int i=0; i<m_testsize; i++)
		{
			list.removeBack();
			NumOfNodes--;
			if(list.size()!=NumOfNodes)
			{
				error++;
			}
		}		
	}
	if(error!=0)
	{
		if(list.size()>0 && list.toVector().size()==0)
		{
			message = "Reason: The nodes has been removed but they forget to reduce the size.";
		}
		isPassed = false;
	}
	else
	{
		isPassed = true;
	}
	printPassFail(" size returns correct value after adds and removeBack", isPassed);
	std::cerr<<"-------- Removed "<<(m_testsize-list.size())<<"/"<<m_testsize<<" nodes from the list."<<message;
	std::cerr<<" In size(): "<<list.size()<<" nodes now; Vector size(): "<<list.toVector().size()<<" nodes now.\n";
	return isPassed;
}
bool TestSuite::test_9()
{
	LinkedListOfInts list;
	bool isPassed = false;
	if(list.search(1))
	{
		isPassed = false;
	}
	else
	{
		isPassed = true;
	}
	printPassFail(" search returns false on empty list", isPassed);
	return isPassed;
}
bool TestSuite::test_10()
{
	LinkedListOfInts list;
	bool isPassed = false;
	std::string message="";
	int error1=0;
	int error2=0;
	for(int i=0; i<m_testsize; i++)
	{
		if(i%2==0)
		{
			list.addFront(i);
		}
		else
		{
			list.addBack(i);
		}
	}
	for(int i=0; i<m_testsize; i++)
	{
		if(!list.search(i))
		{
			error1++;
		}
	}
	if(list.search(60)||list.search(-1))
	{
		error2++;
	}
	if(error1!=0 && error2!=0)
	{
		message="-------- The result is the opposite.\n";
		isPassed = false;
	}
	else if(error1!=0)
	{
		message="-------- There is an error when value is in the list.\n";
		isPassed = false;
	}
	else if(error2!=0)
	{
		message="-------- There is an error when value is not in the list.\n";
		isPassed = false;
	}
	else
	{
		isPassed = true;
	}
	printPassFail("search return true if the value is in the list, false otherwise", isPassed);
	std::cerr<<message;
	return isPassed;
}
bool TestSuite::test_11()
{
	LinkedListOfInts list;
	bool isPassed = false;
	int error1=0;
	int error2=0;
	std::string message="";
	if(list.removeFront())
	{
		error1++;
	}
	for(int i=0; i<m_testsize; i++)
	{
		if(i%2==0)
		{
			list.addFront(i);
		}
		else
		{
			list.addBack(i);
		}
	}
	for(int i=0; i<m_testsize; i++)
	{
		if(list.size()>0)
		{
			if(!list.removeFront())
			{
				error2++;
			}
		}
	}
	if(error1>0)
	{
		message="-------- removeFront has an error when the list is empty\n";
		isPassed = false;
	}
	else if(error2>0)
	{
		message="-------- removeFront has an error when the list is not empty\n";
		isPassed = false;
	}
	else
	{
		isPassed = true;
	}
	printPassFail("removeFront returns false on empty list, true otherwise", isPassed);
	std::cerr<<message;
	return isPassed;
}
bool TestSuite::test_12()
{
	LinkedListOfInts list;
	bool isPassed = false;
	int error1=0;
	int error2=0;
	std::string message="";
	if(list.removeBack())
	{
		error1++;
	}
	for(int i=0; i<m_testsize; i++)
	{
		if(i%2==0)
		{
			list.addFront(i);
		}
		else
		{
			list.addBack(i);
		}
	}
	for(int i=0; i<m_testsize; i++)
	{
		if(list.size()>0)
		{
			if(!list.removeBack())
			{
				error2++;
			}
		}
	}
	if(error1>0)
	{
		message="-------- removeBack has an error when the list is empty\n";
		isPassed = false;
	}
	else if(error2>0)
	{
		message="-------- removeBack has an error when the list is not empty\n";
		isPassed = false;
	}
	else
	{
		isPassed = true;
	}
	printPassFail("removeBack returns false on empty list, true otherwise", isPassed);
	std::cerr<<message;
	return isPassed;
}
bool TestSuite::test_13()
{
	LinkedListOfInts list;
	bool isPassed = false;
	int error=0;
	for(int i=0; i<m_testsize; i++)
	{
		list.addFront(i);
		if(list.toVector().front()!=i)
		{
			error++;
		}
	}
	if(error!=0)
	{
		isPassed = false;
	}
	else
	{
		isPassed = true;
	}
	printPassFail("addFront add each element to the front of the list", isPassed);
	if(error!=0)
	{
		std::cerr<<"-------- The error list: ";
		for(int i=0; i<m_testsize; i++)
		{
			if(i!=m_testsize-1)
			{
				std::cerr<<list.toVector().at(i)<<",";
			}
			else
			{
				std::cerr<<list.toVector().at(i);
			}
		}
		std::cerr<<".\n";
		std::cerr<<"-------- The correct list: ";
		for(int i=m_testsize-1; i>=0; i--)
		{
			if(i!=0)
			{
				std::cerr<<i<<",";
			}
			else
			{
				std::cerr<<i;
			}
		}
		std::cerr<<".\n";
	}
	return isPassed;
}
bool TestSuite::test_14()
{
	LinkedListOfInts list;
	bool isPassed = false;
	int error=0;
	for(int i=0; i<m_testsize; i++)
	{
		list.addBack(i);
		if(list.toVector().back()!=i)
		{
			error++;
		}
	}
	if(error!=0)
	{
		isPassed = false;
	}
	else
	{
		isPassed = true;
	}
	printPassFail("addBack add each element to the back of the list", isPassed);
	if(error!=0)
	{
		std::cerr<<"-------- The error list: ";
		for(int i=0; i<m_testsize; i++)
		{
			if(i!=m_testsize-1)
			{
				std::cerr<<list.toVector().at(i)<<",";
			}
			else
			{
				std::cerr<<list.toVector().at(i);
			}
		}
		std::cerr<<".\n";
		std::cerr<<"-------- The correct list: ";
		for(int i=0; i<m_testsize; i++)
		{
			if(i!=m_testsize-1)
			{
				std::cerr<<i<<",";
			}
			else
			{
				std::cerr<<i;
			}
		}
		std::cerr<<".\n";
	}
	return isPassed;
}
bool TestSuite::test_15()
{
	LinkedListOfInts list;
	bool isPassed = false;
	int error=0;
	for(int i=0; i<m_testsize; i++)
	{
		list.addFront(i);
	}
	for(int i=list.size()-1; i>=0; i--)
	{
		if(list.size()>0)
		{
			list.removeFront();
			if(list.toVector().front()!=i-1)
			{
				error++;
			}
		}
	}
	if(error!=0)
	{
		isPassed = false;
	}
	else
	{
		isPassed = true;
	}
	printPassFail("removeFront remove each element from the front of the list", isPassed);
	if(error!=0)
	{
		std::cerr<<"-------- The error list: ";
		for(int i=0; i<list.size(); i++)
		{
			if(i!=list.size()-1)
			{
				std::cerr<<list.toVector().at(i)<<",";
			}
			else
			{
				std::cerr<<list.toVector().at(i);
			}
		}
		std::cerr<<".\n";
		std::cerr<<"-------- The correct list should be empty. "<<"\n";
	}
	return isPassed;
}
bool TestSuite::test_16()
{
	LinkedListOfInts list;
	bool isPassed = false;
	int error=0;
	for(int i=0; i<m_testsize; i++)
	{
		list.addFront(i);
	}
	for(int i=1; i<=list.size(); i++)
	{
		if(list.size()>0)
		{
			list.removeBack();
			if(list.toVector().back()!=i)
			{
				error++;
			}
		}
	}
	if(error!=0)
	{
		isPassed = false;
	}
	else
	{
		isPassed = true;
	}
	printPassFail("removeBack remove each element from the back of the list", isPassed);
	if(error!=0)
	{
		std::cerr<<"-------- The error list: ";
		for(int i=0; i<list.size(); i++)
		{
			if(i!=list.size()-1)
			{
				std::cerr<<list.toVector().at(i)<<",";
			}
			else
			{
				std::cerr<<list.toVector().at(i);
			}
		}
		std::cerr<<".\n";
		std::cerr<<"-------- The correct list should be empty. "<<"\n";
	}
	return isPassed;
}
bool TestSuite::test_17()
{
	LinkedListOfInts list;
	bool isPassed = false;
	for(int i=0; i<m_testsize; i++)
	{
		list.addFront(i);
	}
	if(list.toVector().size()==50)
	{
		list.~LinkedListOfInts();
		if(list.toVector().size()!=0)
		{
			isPassed = false;
		}
		else
		{
			isPassed = true;
		}
	}
	else
	{
		std::cerr<<"There is an error in addFront method. "<<"\n";
	}
	printPassFail("Destructor should Deletes all nodes in the list", isPassed);
	std::cerr<<"-------- Destructor delete: "<<m_testsize-list.toVector().size()<<"/"<<m_testsize<<" nodes from the list.\n";
	if(!isPassed)
	{
		std::cerr<<"-------- The error list: ";
		for(int i=0; i<list.size(); i++)
		{
			if(i!=list.size()-1)
			{
				std::cerr<<list.toVector().at(i)<<",";
			}
			else
			{
				std::cerr<<list.toVector().at(i);
			}
		}
		std::cerr<<".\n";
		std::cerr<<"-------- The correct list should be empty. "<<"\n";
	}
	return isPassed;
}