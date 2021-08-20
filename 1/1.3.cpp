#include <iostream>

int main()
{
	// x라는 이름이 가리키고 있는 공간에 123을 저장한다.
	int x = 123; // 초기화initialization
	x = 123; // 할당assignment
	// 초기화와 할당은 방식이 다름
	// 초기화하는게 더 좋음

	// l-value: 주소를 가지고 있는 것. x
	// r-value: 주소가 필요없이 잠깐 생겼다가 없어짐. 123

	std::cout << x << std::endl;
	std::cout << &x << std::endl; // & : 변수명의 주소를 가져옴

	return 0;
}