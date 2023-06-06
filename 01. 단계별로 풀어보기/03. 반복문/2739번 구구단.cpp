/*
* @title    : 2739번 구구단
* @content  : 반복문
* @author   : 박동연
* @date     : 230529
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

// N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.

#include <iostream>

using namespace std;

int main()
{
	int iN(0);

	cin >> iN;

	for (int i = 0; i < 9; ++i)
	{
		cout << iN << " * " << (i + 1) << " = " << iN * (i + 1) << endl;
	}

	return 0;
}