

#include <bits/stdc++.h> 
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define pb push_back
#define mp make_pair
#define sp(x) fixed<<setprecision(x)
#define p_q priority_queue
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    fast_io;

    int t;
    cin>>t;
while(t--)
{

    int n;
    cin>>n;
    vector<int> v(n);

    for(int &i : v)
    cin>>i;

    reverse(v.begin(),v.end());

    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";

    cout<<endl;
}

return 0;
}
