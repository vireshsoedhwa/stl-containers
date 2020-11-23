/*
 * Examples.h
 *
 *  Created on: May 27, 2019
 *      Author: wierie
 */

#ifndef EXAMPLES_H_
#define EXAMPLES_H_

#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>

using namespace std;

class Examples {
public:
	Examples();

	void array(){
		std::cout << "=======ARRAY=========" << std::endl << std::endl;
		//Creating an array container with braced initializer
		std::array<int,10> myarray{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		//Accessing elements with [] operator
		for (int i = 0;i < 10;++i)
			myarray[i] = myarray[i] * 2;
		//Accessing elements using the pointer to the underlying array
		auto data = myarray.data();
		for (int i = 0;i < 10;++i)
			*(data + i) += 1;
		// Accessing elements with at() function
		for (int i = 0;i < 10;++i)
			myarray.at(i) *=10;
		//Acdessing the first element
		std::cout << "The first element:" << myarray.front()<<std::endl;
		//accessing the last element
		std::cout << "The last element:" << myarray.back()<<std::endl;
		for (const int val : myarray)
			std::cout << val << " ";
		std::cout << std::endl;
		std::cout << "===============================" << std::endl << std::endl;
	}


	void vector(){
		std::cout << "=======VECTOR=========" << std::endl << std::endl;
		//Creating a vector container with braced initializer
		std::vector<int> myvector{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		//Accessing elements with [] operator
		for (int i = 0;i < 10;++i)
			myvector[i] = myvector[i] * 2;
		//Accessing elements using the pointer to the underlying array
		auto data = myvector.data();
		for (int i = 0;i < 10;++i)
			*(data + i) += 1;
		// Accessing elements with at() function
		for (int i = 0;i < 10;++i)
			myvector.at(i) *= 10;
		//Accessing the first element
		std::cout << "The first element:" << myvector.front() << std::endl;
		//Accessing the last element
		std::cout << "The last element:" << myvector.back() << std::endl;
		auto beginItr = myvector.begin();
		auto endItr = myvector.end();
		//Accessing elements using iterator
		while (beginItr != endItr)
		{
			std::cout << *beginItr << " ";
			++beginItr;
		}
		std::cout << std::endl;
		std::cout << "===============================" << std::endl << std::endl;
	}

	void list(){
		std::cout << "=======LIST=========" << std::endl << std::endl;
		//Creating a list container with braced initializer
		std::list<int> mylist{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		//Accessing elements with iterator
		auto beginItr = mylist.begin();
		auto endItr = mylist.end();
		while (beginItr != endItr)
		{
		*beginItr *= 2;
		++beginItr;
		}
		//Acdessing the first element
		std::cout << "The first element:" << mylist.front()<<std::endl;
		//accessing the last element
		std::cout << "The last element:" << mylist.back()<<std::endl;
		for (const int val : mylist)
		std::cout << val << " ";
		std::cout << std::endl;
		std::cout << "===============================" << std::endl << std::endl;
	}

	void deque(){
		std::cout << "=======DEQUE=========" << std::endl << std::endl;
		//Creating a deque container with braced initializer
		std::deque<int> mydeque{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		//Adding elements at the end
		mydeque.emplace_back(11);
		//Adding elements at the beginning
		mydeque.emplace_front(0);
		//Accessing elements with [] operator
		for (int i = 0;i <mydeque.size();++i)
			mydeque[i] = mydeque[i] * 2;

		// Accessing elements with at() function
		for (int i = 0;i < mydeque.size();++i)
			mydeque.at(i) *= 10;
		//Accessing the first element
		std::cout << "The first element:" << mydeque.front() << std::endl;
		//Accessing the last element
		std::cout << "The last element:" << mydeque.back() << std::endl;
		//Getting reverse iterators
		auto rbeginItr = mydeque.rbegin();
		auto rendItr = mydeque.rend();
		//Accessing elements using reverse iterator
		std::cout << "Elements in reverse order: ";
		while (rbeginItr != rendItr)
		{
			std::cout << *rbeginItr << " ";
			++rbeginItr;
		}
		std::cout << std::endl;
		std::cout << "===============================" << std::endl << std::endl;
	}


	void forward_list(){
		std::cout << "=======FORWARD-LIST=========" << std::endl << std::endl;
		//Creating a forward_list container with braced initializer
		std::forward_list<int> flist{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		auto cBeforeBeginItr = flist.cbefore_begin();
		std::cout << "Original list: ";
		while (++cBeforeBeginItr != flist.end())
		{
			std::cout << *cBeforeBeginItr << " ";
		}
		std::forward_list<int> myflist = flist;
		//Adding elements at the beginning
		myflist.emplace_front(0);
		//Revering the elements
		myflist.reverse();
		//Accessing the first element
		std::cout << "\n\nThe first element of final list:" << myflist.front() << std::endl;
		//Getting iterators
		auto cbeginItr = myflist.cbegin();
		auto cendItr = myflist.cend();

		//Accessing elements using iterator
		std::cout << "Final Elements: ";
		while (cbeginItr != cendItr)
		{
			std::cout << *cbeginItr << " ";
			++cbeginItr;
		}
		std::cout << std::endl;
		std::cout << "===============================" << std::endl << std::endl;
	}


	void set(){
		std::cout << "=======SET=========" << std::endl << std::endl;
		//Creating a set container with braced initializer with default order
		std::set<int> originalset{ 1, 2, 30, 4, 15, 6, 7, 8, 90, 10 };
		auto myset = originalset;
		//Adding elements
		myset.emplace(0);
		myset.insert(40);
		myset.insert(13);

		auto endItr = originalset.end();
		auto beginItr = originalset.begin();
		std::cout << "Original list: ";
		while (beginItr != endItr)
		{
			std::cout << *beginItr << " ";
			beginItr++;
		}

		//Getting constant reverse iterators
		auto crbeginItr = myset.crbegin();
		auto crendItr = myset.crend();

		//Accessing elements using iterator
		std::cout << "\nFinal Elements in reverse order: ";
		while (crbeginItr !=crendItr )
		{
			std::cout << *crbeginItr << " ";
			++crbeginItr;
		}
		std::cout << std::endl;
		if (myset.find(9) != myset.end())
			std::cout << "9 is present in the set" << std::endl;
		if (myset.find(10) != myset.end())
			std::cout << "10 is present in the set" << std::endl;
		std::cout << std::endl;
		std::cout << "===============================" << std::endl << std::endl;
	}


	void unorderedSet(){
		std::cout << "=======UNORDERED-SET=========" << std::endl << std::endl;
		//Creating an unordered_set container with braced initializer. Duplicate values are discarded
		std::unordered_set<int> originalset{ 1, 2,2, 30, 4, 15, 6, 7, 8, 90, 10 };
		auto myset = originalset;
		//Adding elements
		myset.emplace(0);
		myset.insert(40);
		myset.insert(13);
		//Rempving element
		myset.erase(1);

		auto endItr = originalset.end();
		auto beginItr = originalset.begin();
		std::cout << "Original list: ";
		while (beginItr != endItr)
		{
			std::cout << *beginItr << " ";
			beginItr++;
		}
		std::cout << "\nFinal list: ";
		std::unordered_set<int>::iterator itr = myset.begin();
		for (int i = 0;i < myset.size();++i)
		{
			std::cout << *itr << " ";
			++itr;
		}
		std::cout << std::endl;
		if (myset.find(9) != myset.end())
			std::cout << "9 is present in the set" << std::endl;
		if (myset.find(10) != myset.end())
			std::cout << "10 is present in the set" << std::endl;
		std::cout << "===============================" << std::endl << std::endl;
	}


	void unordered_ordered_multiset(){
		std::cout << "=======UNORDERED_ORDERED_MULTISET=========" << std::endl << std::endl;
		//Creating an multiset container with braced initializer with duplicate values
		std::multiset<int> myoset{ 1, 2,2, 30, 4, 15, 6,2, 7, 8, 90, 10 };
		//Adding elements
		myoset.emplace(2);
		myoset.insert(15);
		myoset.insert(10);
		std::cout << "Ordered multiset:" << std::endl;
		for (int val : myoset)
			std::cout << val << " ";
		std::cout << std::endl << "The occurene of 2 in the set is " << myoset.count(2) << " times" << std::endl<<std::endl;

		//Creating an unordered_multiset container with braced initializer with duplicate values
		std::unordered_multiset<int> myuset{ 1, 2,2, 30, 4, 15, 6,2, 7, 8, 90, 10 };
		//Adding elements
		myuset.emplace(2);
		myuset.insert(15);
		myuset.insert(10);
		std::cout << "Unordered multiset:" << std::endl;
		for (int val : myuset)
			std::cout << val << " ";
		std::cout << std::endl << "The occurene of 15 in the set is " << myuset.count(15) << " times" << std::endl;
		std::cout << "===============================" << std::endl << std::endl;
	}

	void maps(){
		std::cout << "=======MAPS=========" << std::endl << std::endl;
		//Creating different types of map container with braced initializer
		std::map<int, string> mymap{ {1,"Cat"},{6,"Lion"},{5,"Tiger"},{3,"Panther"},{4,"Leopard"} };
		std::multimap<int, string> mymultimap{ { 1,"Cat" },{ 6,"Lion" },{ 5,"Tiger" },{ 3,"Panther" },{ 4,"Leopard" } };
		std::unordered_map<int, string> myumap{ { 1,"Cat" },{ 6,"Lion" },{ 5,"Tiger" },{ 3,"Panther" },{ 4,"Leopard" } };
		std::unordered_multimap<int, string> myumultimap{ { 1,"Cat" },{ 6,"Lion" },{ 5,"Tiger" },{ 3,"Panther" },{ 4,"Leopard" } };
		//Inserting elements
		mymap.emplace(2,"Big Cat");
		myumap.emplace(2, "Big Cat");
		mymultimap.emplace(2, "Big Cat");
		myumultimap.emplace(2, "Big Cat");

		//Inserting duplicate elements
		mymap.emplace(2, "Big Cat");
		myumap.emplace(2, "Big Cat");
		mymultimap.emplace(2, "Big Cat");
		myumultimap.emplace(2, "Big Cat");

		std::cout << "Ordered map:" << std::endl;
		for (pair<int,string> item : mymap)
			std::cout <<"\""<< item.second.c_str()<<"\"" << ", ";
		std::cout << std::endl << "The occurrence of Big Cat in the set is " << mymap.count(2) << " times" << std::endl<<std::endl;

		std::cout << "Ordered multimap:" << std::endl;
		for (pair<int, string> item : mymultimap)
			std::cout << "\"" << item.second.c_str() << "\"" << ", ";
		std::cout << std::endl << "The occurrence of Big Cat in the set is " << mymultimap.count(2) << " times" << std::endl << std::endl;

		std::cout << "Unordered map:" << std::endl;
		for (pair<int, string> item : myumap)
			std::cout << "\"" << item.second.c_str() << "\"" << ", ";
		std::cout << std::endl << "The occurrence of Big Cat in the set is " << myumap.count(2) << " times" << std::endl << std::endl;

		std::cout << "Unordered multimap:" << std::endl;
		for (pair<int, string> item : myumultimap)
			std::cout << "\"" << item.second.c_str() << "\"" << ", ";
		std::cout << std::endl << "The occurrence of Big Cat in the set is " << myumultimap.count(2) << " times" << std::endl << std::endl;
		std::cout << "===============================" << std::endl << std::endl;
	}

	void stack(){
		std::cout << "=======STACK=========" << std::endl << std::endl;
		std::vector<int> v{1,2,3,4,5,6,7,8,9,10};
		//Stack initialize with vector object
		std::stack<int, std::vector<int>> mystack(v);
		cout << "Size of the initialized stack: " << mystack.size()<<endl;
		while (!mystack.empty())
		{
			cout << mystack.top() << " ";
			mystack.pop();
		}
		cout << endl;
		for (int i = 1;i < 6;++i)
		{
			mystack.emplace(i*i);  //emplace() is the better way than push() to insert an element
		}
		cout << "Size of the new stack: " << mystack.size() << endl;
		while (!mystack.empty())
		{
			cout << mystack.top() << " ";
			mystack.pop();
		}
		cout << endl;
		std::cout << "===============================" << std::endl << std::endl;
	}


	void queue(){
		std::cout << "=======QUEUE=========" << std::endl << std::endl;
		std::list<int> lst{1,2,3,4,5,6,7,8,9,10};
		//Queue initialize with list object
		std::queue<int, std::list<int>> myqueue(lst);
		cout << "Size of the initialized queue: " << myqueue.size()<<endl;
		while (!myqueue.empty())
		{
			cout << myqueue.front() << " ";
			myqueue.pop();
		}
		cout << endl;
		for (int i = 1;i < 6;++i)
		{
			myqueue.emplace(i*i);  //emplace() is the better way than push() to insert an element
		}
		cout << "Size of the new queue: " << myqueue.size() << endl;
		while (!myqueue.empty())
		{
			cout << myqueue.front() << " ";
			myqueue.pop();
		}
		cout << endl;
		std::cout << "===============================" << std::endl << std::endl;
	}


	void priority_queue(){
		std::cout << "=======PRIORITY_QUEUE=========" << std::endl << std::endl;
		std::deque<int> dq{1,10,3,4,6,5,7,8,9,2};
		//Priority que will keep the smallest number at the top
		std::priority_queue<int, std::deque<int>, greater<int>> mypqueue(greater<int>(), dq);
		cout << "Size of the initialized priority queue: " << mypqueue.size()<<endl;
		while (!mypqueue.empty())
		{
			cout << mypqueue.top() << " ";
			mypqueue.pop();
		}
		cout << endl;
		for (int i = 1;i < 6;++i)
		{
			mypqueue.emplace(i*10);  //emplace() is the better way than push() to insert an element
		}
		cout << "Size of the new priority queue: " << mypqueue.size() << endl;
		while (!mypqueue.empty())
		{
			cout << mypqueue.top() << " ";
			mypqueue.pop();
		}
		cout << endl;
		std::cout << "===============================" << std::endl << std::endl;
	}


	virtual ~Examples();
};

#endif /* EXAMPLES_H_ */
