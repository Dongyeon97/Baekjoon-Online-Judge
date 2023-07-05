/*
* @title    : 13241번 최소공배수
* @content  : 약수, 배수와 소수 2
* @author   : 박동연
* @date     : 230705
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <vector>

using namespace std;

// A * B = 최소공배수 x 최대공약수

int main()
{
	long long A = 0;
	long long B = 0;

	vector<long long> vec;

	long long temp = 0;

	vector<long long>().swap(vec);
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


	return 0;
}