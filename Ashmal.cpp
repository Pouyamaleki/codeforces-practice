#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string a = "";
        cin >> n;
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        a = arr[0];
        for (int i = 1; i < n; i++)
        {
            string left = arr[i] + a;
            string right = a + arr[i];
            if (right > left)
            {
                a = left;
            }
            else if (left >= right)
            {
                a = right;
            }
        }
        cout << a << endl;
    }
}