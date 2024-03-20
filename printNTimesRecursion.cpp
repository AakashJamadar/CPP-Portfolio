#include <iostream>
#include <vector>
#include <string>
// You are given an integer ‘n’.
// Print “Coding Ninjas ” ‘n’ times, without using a loop.

std::vector<std::string> printNTimes(int n) {
	if(n<1) return {};
	std::cout<<"Coding Ninjas ";
	return printNTimes(n-1);
}