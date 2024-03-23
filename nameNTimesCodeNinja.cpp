// You are given an integer ‘n’.
// Print “Coding Ninjas ” ‘n’ times, without using a loop.

vector<string> printNTimes(int n) {
	if(n<1) return {};
	cout<<"Coding Ninjas ";
	return printNTimes(n-1);	 
}

//Or

vector<string> printNTimes(int n) {
	if(n<1) return {};
	cout<<"Coding Ninjas ";
	printNTimes(n-1);
    return {};	 
}