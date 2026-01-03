#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, b, max;
        long long int a;
        cin >> l >> a >> b;
        int x = b, y = l;
        while (y != 0)
        {
            int temp = x % y;
            x = y;
            y = temp;
        }
        max = a;
        int g = x;
        for (int i = 0; i < l/g; i++)
        {
            if ((a + i * b) % l > max)
            {
                max = (a + i * b) % l;
            }
        }
        cout << max << endl;
    }
}