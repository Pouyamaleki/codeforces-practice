#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0;
        cin >> a;
        cin >> b;
        if (b > a)
            swap(a, b);
        if (a == b)
            cout << "0" << endl;
        else if (a % b == 0)
            cout << "1" << endl;
        else
            cout << "2" << endl;
    }
    return 0;
}