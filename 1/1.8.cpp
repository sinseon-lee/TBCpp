#include <iostream>

// Literal, Operand, unary, binary, ternary

using namespace std;

int main() {

	int x = 2; // x is a variable, 2 is a literal. = 는 Assignment

	cout << x + 2 << endl; // +는 Operator. x, 2는  Operand
	cout << "Hello, World" << endl; // 문자열도 literal.

	cout << -x << endl; // unary
	cout << 1 + 2 << endl; //binary

	int y = ( x > 0 ) ? 1 : 2; // ternary
	cout << y << endl;

	x = -2;

	y = ( x > 0 ) ? 1 : 2; // ternary
	cout << y << endl;

	return 0;
}