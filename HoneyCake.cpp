#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long w, h, d, n;
    cin >> w >> h >> d >> n;

    vector<long long> divisors;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (i != n / i)
            {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    for (long long i : divisors)
    {
        for (long long j : divisors)
        {
            if (n % (i * j) != 0)
            {
                continue;
            }
            long long k = n / (i * j);

            if (w % i == 0 && h % j == 0 && d % k == 0)
            {
                cout << (i - 1) << " " << (j - 1) << " " << (k - 1) << endl;
                return 0;
            }
            if (w % i == 0 && h % k == 0 && d % j == 0)
            {
                cout << (i - 1) << " " << (k - 1) << " " << (j - 1) << endl;
                return 0;
            }
            if (w % j == 0 && h % i == 0 && d % k == 0)
            {
                cout << (j - 1) << " " << (i - 1) << " " << (k - 1) << endl;
                return 0;
            }
            if (w % j == 0 && h % k == 0 && d % i == 0)
            {
                cout << (j - 1) << " " << (k - 1) << " " << (i - 1) << endl;
                return 0;
            }
            if (w % k == 0 && h % i == 0 && d % j == 0)
            {
                cout << (k - 1) << " " << (i - 1) << " " << (j - 1) << endl;
                return 0;
            }
            if (w % k == 0 && h % j == 0 && d % i == 0)
            {
                cout << (k - 1) << " " << (j - 1) << " " << (i - 1) << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;
    return 0;
}