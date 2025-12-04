#include <iostream>
#include <iomanip>
using namespace std;

double pow(double x, int y)
{
    double z = x;
    for(int i = 0; i < y - 1; i++)
    {
        x *= z;
    }
    return x;
}

double sqrt(double x)
{
    double y = 0;
    while(y * y < x)
    {
        y++;
    }

    if(y * y > x)
    {
        y--;
    }

    if(x == y * y)
    {
        return y;
    }

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            y += pow(.1, i);
            if(y * y > x)
            {
                y -= pow(.1, i);
            }
        }
    }

    return y;
}

int main()
{
    double x;
    cin >> x;
    cout << fixed << setprecision(5);
    cout << "The square root of " << x << " is " << sqrt(x) << endl;
    return 0;
}