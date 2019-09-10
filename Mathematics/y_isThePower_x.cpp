// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
#include<bits/stdc++.h>
#include<math.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
long long solve(long long x, long long y)
{
    long long ans = log(y)/log(x);
    double ans2 = log(y)/log(x);
    
    return (ans==ans2);
}
int main()
 {
    fast 
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b;
        cin >> a >> b;
        cout<<solve(a,b)<<endl;
    }
	//code
	return 0;
}
