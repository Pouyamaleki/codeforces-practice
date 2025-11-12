#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, m = 0;
        string a, b, c, z;
        cin >> n;
        getline(cin >> ws, a);
        cin >> m;
        getline(cin >> ws, b);
        getline(cin >> ws, c);
        string prefix = "", suffix = "";
        for (int i = 0; i < m; i++)
        {
            if (c[i] == 'D')
                suffix += b[i];
            else if (c[i] == 'V')
                prefix = b[i] + prefix;
        }
        a = prefix + a + suffix;
        cout << a << endl;
    }
    return 0;
}