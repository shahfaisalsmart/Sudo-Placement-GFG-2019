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
        unsigned long long int n;
        cin >> n;
        if(n==0)
        {
            cout<<"NO"<<endl;
        }
        else if((n&(n-1))==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
	//code
	return 0;
}
