// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int solve(double hh, double mm)
{
    if(hh==12) hh = 0;
    if(mm==60) mm = 0;
    
    double hour = 0.5 * (60 * hh + mm);
    double minutes = 6 * mm;
    
    double angle = abs(hour-minutes);
    
    return (int)min(360-angle,angle);
}
int main()
 {
    fast
    int t;
    cin >> t;
    while(t--)
    {
        double h,m;
        cin >> h >> m;
        
        cout<<solve(h,m)<<endl;
    }
	//code
	return 0;
}
