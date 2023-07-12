/*
* @title    : 13909번 창문 닫기
* @content  : 약수, 배수와 소수 2
* @author   : 박동연
* @date     : 230710
* @time     : 0ms
* @memory   : 2032KB
* @state    : 완료
*/

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	// N개의 창문 N명의 사람
	// 창문과 사람의 수는 같음
	// 1번째 사람은 1의 배수 번째 창문을 열려 있으면 닫ㄷ고
	// 닫혀 있으면 연다
	
	int N = 0;

	cin >> N;

	cout << (int)sqrt(N);

	return 0;
}