#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        vector<bool> ok_ab(n, true);
        
        for (int d = 0; d < n; d++)
        {
            for (int m = 0; m < n; m++)
            {
                if (a[m] >= b[(m + d) % n])
                {
                    ok_ab[d] = false;
                    break;
                }
            }
        }

        vector<bool> ok_bc(n, true);
        for (int d = 0; d < n; d++)
        {
            for (int m = 0; m < n; m++)
            {
                if (b[m] >= c[(m + d) % n])
                {
                    ok_bc[d] = false;
                    break;
                }
            }
        }

        long long ans = 0;
        int cnt_ab = 0, cnt_bc = 0;
        for (int d = 0; d < n; d++)
        {
            if (ok_ab[d])
                cnt_ab++;
            if (ok_bc[d])
                cnt_bc++;
        }
        ans = (long long)cnt_ab * cnt_bc * n;

        cout << ans << endl;
    }
    return 0;
}