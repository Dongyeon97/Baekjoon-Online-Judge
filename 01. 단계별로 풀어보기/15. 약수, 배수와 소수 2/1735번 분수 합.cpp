/*
* @title    : 1735번 분수 합
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

// 최대 공약수 구하는 알고리즘
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
	int LChild = 1;
	int LParent = 1;

	int RChild = 1;
	int RParent = 1;

	int temp = 0;

	cin >> LChild >> LParent;
	cin >> RChild >> RParent;

	// 더 큰 수를 왼쪽으로 변경
	if (RParent > LParent)
	{
		swap(LParent, RParent);
		swap(LChild, RChild);
	}

	int PResult = (LParent * RParent) / Uclid(LParent, RParent);

	int CResult = ((LChild * RParent) + (RChild * LParent)) / Uclid(LParent, RParent);

	while (true)
	{
		if (1 != Uclid(PResult, CResult))
		{
			temp = Uclid(PResult, CResult);

			PResult /= temp;
			CResult /= temp;
		}
		else
			break;
	}

	cout << CResult << " " << PResult;

	return 0;
}