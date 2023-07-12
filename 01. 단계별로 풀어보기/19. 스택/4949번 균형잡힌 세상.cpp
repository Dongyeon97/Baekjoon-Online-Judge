/*
* @title    : 4949번 균형잡힌 세상
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
	stack<char> stk1;
	bool bCheck = true;

	while (true)
	{
		bCheck = true;
		str.clear();
		stack<char>().swap(stk1);

		getline(cin, str);
		if ('.' == str[0] && ' ' != str[0])
		{
			break;
		}

		for (auto e : str)
		{
			if ('(' == e)
			{
				stk1.push(e);
			}
			else if ('[' == e)
			{
				stk1.push(e);
			}
			else if (')' == e)
			{
				if (stk1.empty())
				{
					bCheck = false;
					break;
				}
				else if ('(' == stk1.top())
				{
					stk1.pop();
				}
				else if ('[' == stk1.top())
				{
					bCheck = false;
					break;
				}
			}
			else if (']' == e)
			{
				if (stk1.empty())
				{
					bCheck = false;
					break;
				}
				else if ('[' == stk1.top())
				{
					stk1.pop();
				}
				else if ('(' == stk1.top())
				{
					bCheck = false;
					break;
				}
			}
		}

		if (bCheck && stk1.empty())
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
	}

	return 0;
}