#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ill = int long long;
#define rep(i, n) for (ill i = 0; i < (n); i++)
#define repi(i, a, b) for (ill i = (a); i < (b); i++)
#define all(s) s.begin(), s.end()
#define LF cout << endl
using inp = pair<int, int>;
using vecb = vector<bool>;
using vecb2 = vector<vecb>;
int main()
{
    string s, line;
    getline(cin, line);
    stringstream line2(line);
    int i = 0;
    while (getline(line2, s, ' '))
    {
        cout << s.front() << s.size() - 2 << s.back() << " ";
        ++i;
    }
    LF;
}