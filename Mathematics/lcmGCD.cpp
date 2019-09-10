// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
long long GCD(long long a, long long b)
{
    if(b==0)
        return a;
    else GCD(b,a%b);
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
        long long int res = a*b;
        cout<<(a*b)/GCD(a,b)<<" "<<GCD(a,b)<<endl;
    }
	//code
	return 0;
}
