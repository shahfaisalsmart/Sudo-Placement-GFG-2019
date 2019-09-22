/*
Reverse words in a given string
Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots.

Input:
The first line contains T denoting the number of testcases. T testcases follow. Each case contains a string S containing characters.

Output:
For each test case, in a new line, output a single line containing the reversed String.

Constraints:
1 <= T <= 100
1 <= |S| <= 2000

Example:
Input:
2
i.like.this.program.very.much
pqr.mno

Output:
much.very.program.this.like.i
mno.pqr

*/
// Author:: Mohammad Faisal
// beginning with the name of Almighty GOD ALLAH SUBHANA-WATA-A-ALLAH.
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
        string s;
        cin >> s;
        vector<string> st;
        string t="";
        int len = s.length();
        for(int i=0;i<len;i++)
        {
            if(s[i]=='.')
            {
                st.push_back(t);
                t="";
            }
            else{
            t+=s[i];}
        }
        st.push_back(t);
        int l = st.size();
        for(int i=l-1;i>=1;i--)
            cout<<st[i]<<".";
        cout<<st[0]<<endl;
    }
	//code
	return 0;
}
