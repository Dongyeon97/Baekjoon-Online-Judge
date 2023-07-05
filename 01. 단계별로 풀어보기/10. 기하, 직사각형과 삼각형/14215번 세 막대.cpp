/*
* @title    : 14215번 세 막대
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

	cin >> A >> B >> C;
	vec.push_back(A);
	vec.push_back(B);
	vec.push_back(C);

	vector<int>::iterator iter;

	iter = max_element(vec.begin(), vec.end());

	while (true)
	{
		if (*iter < vec[0] + vec[1] + vec[2] - *iter)
		{
			cout << vec[0] + vec[1] + vec[2];
			break;
		}
		else
			--(*iter);
	}

	return 0;
}