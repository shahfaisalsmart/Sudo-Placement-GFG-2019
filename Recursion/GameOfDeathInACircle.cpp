// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// Problem: Game of Death in a circle
// Beginning with the name of Almighty GOD ALLAH SUBHANA-WATAA-ALLAH.
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int solve(int n, int k)
{
    if(n==1)
        return 1;
    else
        return (solve(n-1,k)+k-1)%n+1;
}
int main()
 {
    fast
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int res = solve(n,k);
        cout<<res<<endl;
    }
	//code
	return 0;
}
