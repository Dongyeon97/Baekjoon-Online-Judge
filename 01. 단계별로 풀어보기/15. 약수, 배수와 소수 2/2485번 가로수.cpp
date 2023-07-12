/*
* @title    : 2485번 가로수
* @content  : 약수, 배수와 소수 2
* @author   : 박동연
* @date     : 230705
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Uclid(int& A, int& B)
{

	int left = A;
	int right = B;

	if (right > left)
	{
		swap(left, right);
	}
	int temp = right;

	while (0 != left % right)
	{
		temp = left % right;

		left = right;
		right = temp;
	}
	return temp;
}

int main()
{
	int N = 0;
	int temp = 0;
	int iCount = 0;

	vector<int> vec;
	vector<int> vecMinus;

	cin >> N; // 심어져 있는 가로수의 개수

	for (int i = 0; i < N; ++i)
	{
		cin >> temp;
		vec.push_back(temp);
	}

	for (int i = 0; i <= vec.size() - 2; ++i)
	{
		vecMinus.push_back(vec[i + 1] - vec[i]);
	}

	int iCurGcd = vecMinus[0];

	for (auto& e : vecMinus)
	{
		iCurGcd = Uclid(e, iCurGcd);
	}

	for (auto e : vecMinus)
	{
		iCount += e / iCurGcd - 1;
	}

	cout << iCount;

	return 0;
}