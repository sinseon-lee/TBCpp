#include <bits/stdc++.h>

using namespace std;

void printHelloWorld() {
	cout << "Hello World " << endl;

	return;

	cout << "Hello World 2 " << endl;
}

int addTwoNumbers(int num_a, int num_b) {

	int sum = num_a + num_b;

	printHelloWorld();

	return sum;
}


int main() {

	cout << addTwoNumbers(1, 2) << endl;
	cout << addTwoNumbers(3, 4) << endl;
	cout << addTwoNumbers(8, 13) << endl;

	printHelloWorld();

	return 0;
}