/*
* @title    : 9012번 괄호
* @content  : 스택
* @author   : 박동연
* @date     : 230711
* @time     : 4ms
* @memory   : 2024KB
* @state    : 완료
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	string str;
	stack<char> stk;

	int T = 0;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		str.clear();
		stack<char>().swap(stk);
		cin >> str;
		for (int j = 0; j < str.size(); ++j)
		{
			if ('(' == str[j])
			{
				stk.push(str[j]);
			}
			else if (')' == str[j])
			{
				if (stk.empty())
				{
					stk.push(')');
					break;
				}
				else
				{
					stk.pop();
				}
			}
		}
		if (stk.empty())
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}
	}
	return 0;
}