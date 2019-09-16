// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
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
        string s;
        cin >> s;
        string t;
        t = s;
        reverse(t.begin(),t.end());
        (t==s) ? cout<<"Yes": cout<<"No";
        cout<<endl;
    }
	//code
	return 0;
}
