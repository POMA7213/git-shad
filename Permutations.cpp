#include <iostream>
using namespace std;
void perm(string s, int l, int r)
{
	if (l == r)
		cout << s << endl;
	else
	{
		for (int i = l; i < r + 1; i++)
		{
			swap(s[l], s[i]);
			perm(s, l + 1, r);
			swap(s[l], s[i]);
		}
	}
}
void Permutations(string s){
	perm(s, 0, s.size() - 1);
}
int main() {
	string s;
	cin >> s;
	cout << endl;
	Permutations(s);
}