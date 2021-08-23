/*
#include <bits/stdc++.h>

using namespace std;

int main() {

	int x(0); // x가 0을 가짐
	// int x = 0;

	cout << x << " " << &x << endl;

	{

		int x = 1;
		cout << x << " " << &x << endl;
	}

	{

		int x = 2;
		cout << x << " " << &x << endl;
	}


	return 0;
} // 여기서 x가 사라짐
*/

#include <iostream>

using namespace std;

void doSomething(int x) {

	x = 123;

	cout << x << endl;
}

int main() {

	int x = 0;

	cout << x << endl;
	doSomething(x);
	cout << x << endl;

	return 0;
}
