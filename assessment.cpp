
#include <bits/stdc++.h>
using namespace std;
void reverseStr(string& str)
{
	int n = str.length();
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

int main()
{
    char name[50];
    gets(name);
	string str=name;

	reverseStr(str);
	cout << str;
	return 0;
}
