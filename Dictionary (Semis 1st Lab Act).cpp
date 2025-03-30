#include <iostream>
#include <string>

using namespace std;

int main(){
	string term;
	cout << "Welcome to my Programming Terms Dictionary! We have 30 Terms to offer" << endl;
	cout << "Enter a term: ";
	cin >> term;
	if (term == "Algorithm"){
		cout << "A set of steps to solve a problem." << endl;
	}
	else if (term == "Binary"){
		cout << "A system using 0s and 1s." << endl;
	}
	else if (term == "Compiler"){
		cout << "Converts code into machine language." << endl;
	}
	else if (term == "Data Structure"){
		cout << "Organizes and stores data efficiently." << endl;
	}
	else if (term == "Encryption"){
		cout << "Secures data by encoding it." << endl;
	}
	else if (term == "Function"){
		cout << "A reusable code block." << endl;
	}
	else if (term == "Graph"){
		cout << "Nodes connected by edges." << endl;
	}
	else if (term == "Hashing"){
		cout << "Maps data to fixed-sized values" << endl;
	}
	else if (term == "Iteration"){
		cout << "Repeating a process." << endl;
	}
	else if (term == "JSON"){
		cout << "A lightweight data format." << endl;
	}
	else if (term == "Kernel"){
		cout << "Core of an operating system." << endl;
	}
	else if (term == "Loop"){
		cout << "Repeats a block of code." << endl;
	}
	else if (term == "Machine Learning"){
		cout << "AI that learns from the data." << endl;
	}
	else if (term == "Node"){
		cout << "A point in a data structure." << endl;
	}
	else if (term == "OOP"){
		cout << "Programming using objects." << endl;
	}
	else if (term == "Protocol"){
		cout << "Rules for data communication." << endl;
	}
	else if (term == "Queue"){
		cout << "FIFO data structure." << endl;
	}
	else if (term == "Recursion"){
		cout << "A function calling itself." << endl;
	}
	else if (term == "Stack"){
		cout << "LIFO data structure." << endl;
	}
	else if (term == "Thread"){
		cout << "A unit of execution." << endl;
	}
	else if (term == "Unicode"){
		cout << "Standard text encoding." << endl;
	}
	else if (term == "Variable"){
		cout << "Stores values in programming." << endl;
	}
	else if (term == "Web Dev"){
		cout << "Building websites." << endl;
	}
	else if (term == "XML"){
		cout << "Data structuring language." << endl;
	}
	else if (term == "YAML"){
		cout << "Human-readable data format." << endl;
	}
	else if (term == "Zero-Day"){
		cout << "Unpatched software flow." << endl;
	}
	else{
		cout << "Term not found";
	}
	return 0;
}