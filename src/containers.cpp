//============================================================================
// Name        : containers.cpp
// Author      : ww
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Examples.h"

int fn(int v)
{
	if(v == 1 || v ==0 )
	{
		return 1;
	}
	if(v%2==0)
	{
		return fn(v/2)+2;
	}
	else{
		return fn(v-1)+3;
	}
}





int main() {

	std::cout << fn(7);

//	Examples e;

	/*
	 * Arrays are fixed size sequence container. It takes the element type and number of
	 * elements in the array as template arguments. The size of the sequence is fixed at
	 * compile time. So no memory management and dynamic allocation involved.
	 * This class does not store any extra data other than the sequence of elements.
	 * It only adds layer of functions so that it works as a container.
	 * This is different than other containers whose size is dynamically changed.
	 * This has all the property of normal language defined array declared with bracket ([]) syntax.
	 * Zero size containers are valid but they should not be dereferenced.
	 */

//	e.array();

	/*
	 * The instance of vector template class is a sequence container of a given data type.
	 * The elements are stored contiguously in memory.
	 * It stores the elements similar to a normal array but it can dynamically re-size
	 * the array by allocating and deallocating memory.
	 * To optimize the reallocation it allocates extra memory so that it does not need
	 * to reallocate memory every time an element is added. If you know the minimum number
	 * of elements it is better to allocate that by calling the reserve() method of the
	 * vector so that no reallocation is needed until the number of elements exceed the
	 * minimum number. Like array container, vector elements can be accessed directly
	 * using [] operator and offset on a regular pointer to it�s elements.
	 * Vector is very efficient in accessing its elements with array index.
	 * Adding elements at the end is efficient but inserting element in between is costly
	 * compared to other containers. This is because every time inserting an element
	 * require some elements to be moved. Also resizing has an overhead which is optimized
	 * by intelligent memory allocation.
	 *
	 */

//	e.vector();

	/*
	 * List is a sequence container which stores the elements in a doubly linked list.
	 * The sequence of the elements is maintained by associating to each element of a
	 * link to the preceding element and another link to the following element.
	 * So each element size is increased by 2 pointers. But this has advantage of
	 * constant time to insert or remove elements when you have an iterator of the sequence.
	 * It also allows to iterate both direction with constant time. On the other
	 * hand you cannot access elements directly. You have to use iterator and move it to
	 * reach a desired position to access the element.
	 */

//	e.list();

	/*
	 * Template container class std::deque (double-ended-queue) is a sequence container
	 * and behaves similar to the std::vector class with the difference that deque can
	 * grow/shrink in both direction. You can add/remove elements to/from both the ends.
	 * Unlike vector it does not guarantee to store all the elements in contiguous memory location.
	 * That�s why accessing an element by using offset to a pointer to another element is not safe.
	 * This also makes the internal implementation of deque more complex than vector but
	 * it helps it to grow more efficiently in some scenarios, specially when having
	 * very long sequence and reallocation is expensive.
	 */

//	e.deque();


	/*
	 * forward_list container class is a sequence container which stores the elements in a
	 * singly-linked list. Each element may be stored in different and unrelated memory locations.
	 * The sequence of the elements is maintained by associating to each element of a link to
	 * the following element. So each element size is lesser by 1 pointers than list.
	 * It is similar to list with the difference that unlike list it does not allow traverse backwards.
	 * Each element hold the reference to the next element but not the previous element.
	 * Each element having only single link, insertion and removal of element is more efficient than list.
	 * Forward list is more efficient than other containers like array, vector and deque in terms of insertion,
	 * deletion, moving and the algorithm like sort which use those operations.

	Unlike list, forward_list does not allow to access the elements directly.
	If you want to access to 7th elements you have to iterate from the beginning to the 7th element to access it.
	It is as efficient as a simple c-style singly-linked-list.
	 *
	 */

//	e.forward_list();


	/*
	 * Set is an associative container and store the unique elements in a specific order.
	 * Internally the elements are stored in a binary search tree. The value of an element also
	 * identifies itself, means the value is itself the key. The elements cannot be modified once
	 * they are in the container but they can be removed or inserted to the container.
	 * Set containers are slower than unordered_set to access individual elements by their key but
	 * it allows direct iteration on their elements based on their order. It supports bi-directional iterator.
	 */

//	e.set();

	/*
	 * unordered_set is an associative container and store the unique elements without any order.
	 * Internally the elements are stored in hash tables. The value of an element also identifies itself,
	 * means the value is itself the key. The elements cannot be modified once they are in the container
	 * but they can be removed or inserted in the container. unordered_set containers are faster than
	 * set to access individual elements by their key but slower in range iteration. It supports forward
	 * iterator.
	 */

//	e.unorderedSet();


	/*
	 * Multiset and unordered_multiset are similar to set and unordered_set respectively with the property
	 * that they can contain duplicate values. These classes are also declared in the same headers <set>
	 * and <unordered_set>. For unordered multi-set, duplicate valued elements are stored in the same bucket
	 */

//	e.unordered_ordered_multiset();

	/*
	 * Maps are like set but the difference between sets and maps is that every element in the map is a
	 * key-value pair and the map elements are arranged and accessed on the basis of key and not the value.
	 * Key and value can be off different types. In case of sets value itself is treated as the key.
	 * Both sets and maps are implemented same way- binary search tree for ordered map and hash tables
	 * for unordered map.
	 */

//	e.maps();


	/*
	 * Container adapter class stack is designed for the LIFO(last-in first-out) context where elements
	 * are inserted and removed only at and from one end. The element last inserted will be removed first.
	 * Inserting an element is called push operation and removing an element is called pop operation.
	 * This is a container adapter and use some other container to store the elements.
	 * The underlying container types should support following operations:
	 *
		empty
		size
		back
		push_back
		pop_back

		vector, deque and list classes fulfills those requirement. Default container is deque.
		You can specify the container type while instantiation. Elements are inserted and removed
		from the back of the underlying container.
	 *
	 */

//	e.stack();

	/*
	 * Container adapter class queue is designed for the FIFO(first-in first-out) context where elements
	 * are inserted at one end and removed from the other end. The element first inserted will be removed
	 * first and inserted last will be remove last. Inserting an element is called enque operation and
	 * removing an element is called dequeue operation. This is a container adapter and use some other
	 * container to store the elements. The underlying container types should support following operations:
	 *
		empty
		size
		back
		front
		push_back
		pop_front

		deque and list classes fulfills those requirement. Default container is deque. You can specify
		the container type while instantiation. Elements are inserted at the back of the container and
		remove from the front.
	 */


//	e.queue();

	/*
	 * Container adapter class priority_queue is designed such a way that it�s greatest element is always
	 *  the first element according to a strict weak ordering criterion. Internally it maintains a
	 *  heap structure where an element can be inserted at any moment and only the max heap element
	 *  can be retrieved which is at the top of the priority_queue. This is a container adapter and
	 *  use some other container to store the elements. The underlying container types should support
	 *  following operations:
	 *
		empty
		size
		front
		push_back
		pop_back

		deque and vector classes fulfills those requirement. Default container is vector. You can specify
		the container type while instantiation. Elements are popped from the back of the specific container.
		Support of random access iterator is required to keep a heap structure internally all the time.
		This is done by the container adapter by automatically calling algorithm functions
		make_heap, push_heap and pop_heap when needed.
	 *
	 */

//	e.priority_queue();
//
//
//	std::pair <int,char> foo (10,'x');
//	std::get<0>(foo) = 50;
//
//	std::cout << "foo contains: ";
//	std::cout << std::get<0>(foo) << " and " << std::get<1>(foo) << '\n';


	int ans = 5;

	for(int i = 5; i <= 104;i++)
	{
		ans += i;
	}

	std::cout << ans;






	return 0;
}
