// ���� ������� �����, ���� ������ ����������� ������� s[0], ..., s[n], ...
// 1. ��������, �� � ����� ��� ������� �� �����, �� ������� � ����� �while�.
// 2. ������� ����� ����� ���� �while� ����� ������ �**�.
#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find('w', pos)) != -1)
	{
		pos++;
		if (s[pos + 1] == 'h')
			k++;
		pos++;
		if (s[pos + 2] == 'i')
			k++;
		pos++;
		if (s[pos + 3] == 'l')
			k++;
		pos++;
		if (s[pos + 4] == 'e')
			k++;
	}
	return k;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('w', pos)) != -1)
		if (s[pos + 2] == 'h')
			if (s[pos + 3] == 'i')
				if (s[pos + 4] == 'l')
					if (s[pos + 5] == '5')
			s.replace(pos, 6, "**");
		else
			pos++;
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
		getline(cin, str);
	cout << "String contained " << Count(str) << " groups of 'while'" << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
