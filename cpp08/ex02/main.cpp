//
// Created by Debby Willette on 9/8/21.
//

#include "mutantstack.hpp"
#include <list>

int main(void)
{
	std::cout << "\x1b[34m----> Mutant stack <----\x1b[0m" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5); // 5
		mstack.push(17); // 5 17
		std::cout << "Top element: " << mstack.top() << std::endl; // 17
		mstack.pop(); // 5
		std::cout << "Size: " << mstack.size() << std::endl; // 1

		mstack.push(3); // 5 3
		mstack.push(5); // 5 3 5
		mstack.push(737); // 5 3 5 737

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "Iterating through container" << std::endl;
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;

		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend();
		++rit;
		--rit;
		std::cout << "Reverse iterating through container" << std::endl;
		while (rit != rite)
		{
			if (*rit == 5)
				*rit = 6;
			std::cout << *rit << " ";
			++rit;
		}
		std::cout << std::endl;

		MutantStack<int>::const_iterator cit = mstack.begin();
		MutantStack<int>::const_iterator cite = mstack.end();
		++cit;
		--cit;
		std::cout << "Const iterating through container" << std::endl;
		while (cit != cite)
		{
			std::cout << *cit << " ";
//			if (*cit == 3)
//			{
////				 Trying to change value 3 to 5
//				*cit = 5;
//			}
			++cit;
		}
		std::cout << std::endl;

		MutantStack<int>::const_reverse_iterator crit = mstack.rbegin();
		MutantStack<int>::const_reverse_iterator crite = mstack.rend();
		++crit;
		--crit;
		std::cout << "Const reverse iterating through container" << std::endl;
		while (crit != crite)
		{
			std::cout << *crit << " ";
//			if (*crit == 3)
//			{
////				 Trying to change value 3 to 5
//				*crit = 5;
//			}
			++crit;
		}
		std::cout << std::endl;
		std::stack<int> s(mstack);

		std::cout << "Is container empty?" << std::endl;
		mstack.empty() ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;

		std::cout << "Popping all elements of the Mutantstack" << std::endl;
		while(!mstack.empty()) {
			std::cout << mstack.top() << " ";
			mstack.pop();
		}
		std::cout << std::endl;

		std::cout << "Is container empty?" << std::endl;
		mstack.empty() ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
	}

	std::cout << "\x1b[34m----> Comparing to the list <----\x1b[0m" << std::endl;
	{
		std::list<int> ref;
		ref.push_back(5); // 5
		ref.push_back(17); // 5 17
		std::cout << "Top element: " << ref.back() << std::endl; // 17
		ref.pop_back(); // 5
		std::cout << "Size: " << ref.size() << std::endl; // 1

		ref.push_back(3); // 5 3
		ref.push_back(5); // 5 3 5
		ref.push_back(737); // 5 3 5 737

		std::list<int>::iterator it = ref.begin();
		std::list<int>::iterator ite = ref.end();
		++it;
		--it;
		std::cout << "Iterating through container" << std::endl;
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;

		std::list<int>::reverse_iterator rit = ref.rbegin();
		std::list<int>::reverse_iterator rite = ref.rend();
		++rit;
		--rit;
		std::cout << "Reverse iterating through container" << std::endl;
		while (rit != rite)
		{
			std::cout << *rit << " ";
			++rit;
		}
		std::cout << std::endl;

		std::list<int>::const_iterator cit = ref.begin();
		std::list<int>::const_iterator cite = ref.end();
		++cit;
		--cit;
		std::cout << "Const iterating through container" << std::endl;
		while (cit != cite)
		{
			std::cout << *cit << " ";
//			if (*cit == 5)
//			{
////				 Trying to change value 5 to 6
//				*cit = 6;
//			}
			++cit;
		}
		std::cout << std::endl;

		std::list<int>::const_reverse_iterator crit = ref.rbegin();
		std::list<int>::const_reverse_iterator crite = ref.rend();
		++crit;
		--crit;
		std::cout << "Const reverse iterating through container" << std::endl;
		while (crit != crite)
		{
			std::cout << *crit << " ";
//			if (*crit == 5)
//			{
////				 Trying to change value 5 to 6
//				*crit = 6;
//			}
			++crit;
		}
		std::cout << std::endl;

		std::cout << "Is container empty?" << std::endl;
		ref.empty() ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;

		std::cout << "Popping all elements of the list" << std::endl;
		while(!ref.empty()) {
			std::cout << ref.back() << " ";
			ref.pop_back();
		}
		std::cout << std::endl;

		std::cout << "Is container empty?" << std::endl;
		ref.empty() ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
	}

	return (0);
}