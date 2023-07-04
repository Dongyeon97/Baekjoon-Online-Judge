/*
* @title    : 10101번 삼각형 외우기
* @content  : 기하 : 직사각형과 삼각형
* @author   : 박동연
* @date     : 230705
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

using namespace std;

int main()
{
	int One(0), Two(0), Three(0);

	cin >> One >> Two >> Three;

	if (180 != One + Two + Three)
		cout << "Error";

	if (60 == One && 60 == Two && 60 == Three)
	{
		cout << "Equilateral";
	}
	else if (180 == One + Two + Three)
	{
		if (One == Two || One == Three || Two == Three)
		{
			cout << "Isosceles";
		}
		else if (One != Two && Two != Three)
		{
			cout << "Scalene";
		}
	}

	return 0;
}