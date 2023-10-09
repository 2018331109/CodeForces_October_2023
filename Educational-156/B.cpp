#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
    int t;
    cin >> t;
    cout << fixed << setprecision(10);  // Set output precision

    while (t--)
    {
        double px, py, ax, ay, bx, by;
        cin >> px >> py >> ax >> ay >> bx >> by;
        double ox=0.0, oy=0.0;

        double d1 = distance(px, py, ax, ay);
        double d2 = distance(px, py, bx, by);
        double d3 = distance(ax, ay, bx, by);
        double d4 = distance(ax, ay, ox, oy);
        double d5 = distance(bx, by, ox, oy);
        double org=min(d4, d5);
        double orp=min(d1, d2);
        if(org==d4 && orp==d1)
        {
            cout<<max(d1, d4)<<endl;
        }
        else if(org==d5 && orp==d2)
        {
            cout<<max(d5, d2)<<endl;
        }
        else
        {
            double ans1=(distance(ax, ay, bx, by)/2.0);
            double ans=max(ans1, max(org, orp));
            cout<<ans<<endl;
        }





    }

    return 0;
}

