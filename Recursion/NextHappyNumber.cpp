// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// Next Happy Number
// Beginning with the name of Almighty God Allah
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int helper(int n)
{
    int sum =0;
    while(n)
    {
        sum+=((n%10)*(n%10));
        n/=10;
    }
    return sum;
}
bool solve(int n)
{
    int l,r;
    l = n;
    r = n;
    do
    {
        l = helper(l);
        r = helper(helper(r));
    }while(l!=r);
    
    if(l==1)
        return true;
    
    return false;
}
int main()
 {
    fast
    int t;
    cin >> t;
    bool * table = new bool[2000];
    for(int i=0;i<2000;i++)
    {
        table[i] = solve(i);
    }
    while(t--)
    {
        int n;
        cin >> n;
        int temp;
        for(int j=n+1;;j++)
        {
            if(table[j]){
                temp=j;
                break;
            }
        }
        cout<<temp<<endl;
    }
	//code
	return 0;
}
