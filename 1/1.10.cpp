#include <iostream> // .h가 없는 이유는 특별한 애라서. <> 쓰는 이유는 표준이라서
#include "add.h"
#include "doSomething.h" 

using namespace std;

// forward declaration

int main() {

	cout << add(1, 2) << endl;

	return 0;
}

// definition
/*
int add(int a, int b) {

	return a + b;
}
*/