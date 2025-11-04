#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int x = 0;
        cin >> x;
        if (x % 3 == 0)
            cout << "0" << endl;
        else if (x % 3 == 1)
            cout << "2" << endl;
        else if (x % 3 == 2)
            cout << "1" << endl;
    }
    return 0;
}