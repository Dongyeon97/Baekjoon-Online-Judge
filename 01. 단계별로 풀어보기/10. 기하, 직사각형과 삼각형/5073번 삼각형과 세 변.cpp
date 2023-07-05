/*
* @title    : 5073번 삼각형과 세 변
* @content  : 기하 : 직사각형과 삼각형
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

int main()
{
	int A = 0;
	int B = 0;
	int C = 0;

	vector<int> vec;

	int max = 0;

	while (true)
	{
		vector<int>().swap(vec);
		vec.clear();
		max = 0;

		cin >> A >> B >> C;
		vec.push_back(A);
		vec.push_back(B);
		vec.push_back(C);

		max = *(max_element(vec.begin(), vec.end()));

		if (0 == A && 0 == B && 0 == C)
			break;
		if (!(max < vec[0] + vec[1] + vec[2] - max))
		{
			cout << "Invalid" << endl;
			continue;
		}

		if (A == B && B == C)
		{
			cout << "Equilateral" << endl;
			continue;
		}
		else if (A == B || A == C || B == C)
		{
			cout << "Isosceles" << endl;
			continue;
		}
		else if (A != B && B != C)
		{
			cout << "Scalene" << endl;
			continue;
		}
		else
		{
		}
	}

	return 0;
}