#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string text;
        cin >> text;
        size_t Position = text.find("2026");
        if (Position != string::npos)
        {
            cout << "0" << endl;
        }
        else if (text.find("2025") == string::npos)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }
}