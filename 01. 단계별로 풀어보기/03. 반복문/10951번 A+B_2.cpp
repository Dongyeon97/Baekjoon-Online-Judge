/*
* @title    : 10952번 A+B_2
* @content  : 반복문
* @author   : 박동연
* @date     : 230529
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int iA(1), iB(1);

	while(!(cin >> iA >> iB).eof())
	{
		cout << iA + iB << "\n";
	}


	return 0;
}