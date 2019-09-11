// Author: Mohammad Faisal
// Email:: mohammad.faisal78612@gmail.com
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
 {
    fast
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int x;
        cin >> x;
        int ans = x;
        for(int i=1;i<n;i++)
        {
            cin >> x;
            ans^=x;
        }
        cout<<ans<<endl;
    }
	return 0;
}
