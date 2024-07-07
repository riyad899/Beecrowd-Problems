
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int H, M;
    cin >> H >> M;


    double hour = 0.5 * (60 * H + M);
    double minute = 6 * M;


    double angle = abs(hour- minute);
    angle = min(360 -angle, angle);

    cout<<fixed <<setprecision(6) << angle << endl;

    return 0;
}