#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int best = 0;
        bool whiteturn = true;
        for (int i = 0; i < 2; i++)
        {
            int layerCounter = 0, layersize = 1;
            int aa = a, bb = b;
            while (true)
            {
                if (whiteturn)
                {
                    if (aa >= layersize)
                    {
                        layerCounter++;
                        aa -= layersize;
                        layersize *= 2;
                        whiteturn = !whiteturn;
                    }
                    else
                    {
                        best = max(best, layerCounter);
                        break;
                    }
                }
                else
                {
                    if (bb >= layersize)
                    {
                        layerCounter++;
                        bb -= layersize;
                        layersize *= 2;
                        whiteturn = !whiteturn;
                    }
                    else
                    {
                        best = max(best, layerCounter);
                        break;
                    }
                }
            }
            whiteturn = false;
        }
        cout << best << endl;
    }
    return 0;
}