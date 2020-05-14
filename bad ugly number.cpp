#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "-1\n";
        return;
    }
    cout << "2";
    for (int i = 0; i < n - 1; i++)
        cout << "3";
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
