#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ycount = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'Y')
            {
                ycount++;
            }
        }
        if (ycount <= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}