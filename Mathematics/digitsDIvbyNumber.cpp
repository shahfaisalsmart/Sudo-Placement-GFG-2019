/*
Given an integer N, the task is to check whether the sum of digits of the given number is divisible by all of its digits or not. If divisible then print Yes else print No.

Examples:

Input: N = 12
Output: No
Sum of digits = 1 + 2 = 3
3 is divisble by 1 but not 2.

Input: N = 123
Output: Yes
*/
// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
#include<bits/stdc++.h>
using namespace std;
bool solve(int n)
{
    int temp = n;

    int sum =0;
    while(n)
    {
        int t = n%10;
        sum+=t;
        n/=10;
    }
    n=temp;
    while(n)
    {
        int l = n%10;
        if(sum%l!=0)
            return false;
        n/=10;
    }
    return true;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        bool res;
        res = solve(n);
        (!res) ? cout<<"NO": cout<<"YES";
        cout<<endl;
    }
    return 0;
}
