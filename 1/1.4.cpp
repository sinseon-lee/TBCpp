#include <bits/stdc++.h>

using namespace std; // cin, cout 앞에 std:: 안써도 됨

int main() {

	// std라는 이름 공간 안에 있는 cin, cout 사용

	int x = 1000000000000;
	double pi = 3.14159211;
	long long y = 100000000000000;

	cout << "I love this lecture!\n";
	cout << "x is " << x << " pi is " << pi << endl;

	std::cout << "abc" << "\t" << "edf" << std::endl;
	std::cout << "ab" << "\t" << "cedf" << std::endl;

	std::cout << "y is " << y << std::endl;

	// cout << "\a";
	printf("I love this lecture!\n");


	// cin >> x;

	cout << "Your input is " << x << endl;

	return 0;
}