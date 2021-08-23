#include <bits/stdc++.h>
using namespace std;

#define MY_NUMBER 333
#define MY_STRING "Hello, World"
#define MAX(a, b) (((a>b)) ? (a) : (b)) // 안에 뭐가 들어갈지 모르니 괄호를 해줘야함

#define LIKE_APPLE
// 매크로는 이 파일 안에서만 적용이 됨

int main() {

	cout << MY_NUMBER << endl;
	cout << MY_STRING << endl;

	cout << MAX(1, 2) << endl;
	cout << max(1 + 3, 2) << endl;

#ifdef LIKE_APPLE // LIKE_APPLE이라는 매크로가 정의가 되어있다면. (전처리기에 매크로를 사용할 때는 값 대치를 안함)
	cout << "Apple " << endl;
#endif

#ifndef LIKE_APPLE // 정의가 안되어있으면
	cout << "Orange " << endl;
#endif




	return 0;
}