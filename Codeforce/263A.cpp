#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r = 5, c = 5, i, j, x, y;
    int ar[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> ar[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (ar[i][j] == 1)
            {
                if (i <= 2)
                    x = 2 - i;
                else if (i > 2)
                    x = i - 2;
            }
            if (ar[i][j] == 1)
            {
                if (j <= 2)
                    y = 2 - j;
                else if (j > 2)
                    y = j - 2;
            }
        }
        
    }
    cout<<x+y<<endl;
}