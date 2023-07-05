/*
* @title    : 1934번 최소공배수
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

// A * B = 최소공배수 x 최대공약수

int main()
{
	int A = 0;
	int B = 0;
	int T = 0;

	vector<int> vec;

	int temp = 0;
	cin >> T;
	
	for (int i = 0; i < T; ++i)
	{
		vector<int>().swap(vec);
		vec.clear();

		cin >> A >> B;
		if (B > A)
		{
			// A가 무조건 큰 수
			temp = B;
			B = A;
			A = temp;
		}
		vec.push_back(A);
		vec.push_back(B);
		temp = B;

		while (0 != A % B)
		{
			temp = A % B;

			A = B;
			B = temp;
		}
		cout << (vec[0] * vec[1]) / temp << endl;
	}

	return 0;
}