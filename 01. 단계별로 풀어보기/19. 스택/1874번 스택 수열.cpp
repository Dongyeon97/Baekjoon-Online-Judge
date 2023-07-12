/*
* @title    : 1874번 스택 수열
* @content  : 스택
* @author   : 박동연
* @date     : 230711
* @time     : 48ms
* @memory   : 3508KB
* @state    : 완료
*/

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	stack<int> stk;
	vector<int> vec;
	vector<int> vec2;
	string str;

	int temp = 0;

	int pushCount = 0;
	int popCount = 0;

	int n = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		vec.push_back(temp);
	}

	while(n > popCount)
	{
		// 스택에 첫 삽입 시
		if (0 == pushCount && 0 == popCount)
		{
			stk.push(++pushCount);
			str += "+\n";
		}

		if (stk.empty() || vec[popCount] > stk.top())
		{
			stk.push(++pushCount);
			str += "+\n";
		}

		else if(vec[popCount] == stk.top())
		{
			stk.pop();
			++popCount;
			str += "-\n";
		}
		else if(vec[popCount] < stk.top())
		{
			cout << "NO" << "\n";
			return 0;
		}
	}

	cout << str << endl;
	return 0;
}