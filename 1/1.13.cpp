#include <iostream>

namespace Myspace1 {

	int doSomething(int a, int b) {

		return a + b;
	}
	namespace InnerSpace {

		void myFunction() {


		}
	}
}


int doSomething(int a, int b) {

	return a * b;
}

using namespace std;

int main() {

	std::cout << Myspace1::doSomething(3, 4) << std::endl;
	std::cout << doSomething(3, 4) << std::endl;

	using namespace Myspace1;

	std::cout << doSomething(3, 4) <<std::endl;

	Myspace1::InnerSpace::myFunction();

	using namespace Myspace1::InnerSpace;
}