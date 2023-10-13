#include <iostream>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    // Check if s is already a substring of x
    if (x.find(s) != string::npos)
    {
        cout << 0 << endl;
        return;
    }

    int result = -1;
    string temp = x;

    for (int i = 1; i <= 7; i++)
    {
        if (temp.find(s) != string::npos)
        {
            result = i-1;
            break;
        }
        temp += temp;

    }

    cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

