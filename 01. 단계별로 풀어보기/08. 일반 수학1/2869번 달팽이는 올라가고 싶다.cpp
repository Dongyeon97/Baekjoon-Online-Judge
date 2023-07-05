/*
* @title    : 2869번 달팽이는 올라가고싶다
* @content  : 일반 수학1
* @author   : 박동연
* @date     : 230703
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int V = 0;	// 달팽이가 올라가야 하는 나무의 높이

	int A = 0;	// 낮에 올라갈 수 있는 높이
	int B = 0;	// 밤에 미끄러지는 높이
	
	int Day = 0;

	cin >> A >> B >> V;

	if (0 == (V - B) % (A - B))
		Day = (V - B) / (A - B);
	else
		Day = (V - B) / (A - B) + 1;

	cout << Day;

	return 0;
}