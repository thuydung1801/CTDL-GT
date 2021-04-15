#include <bits/stdc++.h>

using namespace std;


int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        long long a[n+5];
        long long m = 1e9+7;
        for(int i=1; i<=n; i++) cin>>a[i];
        sort(a+1, a+n+1);
        long long sum=0;
        for(int i=1; i<=n; i++)
        {
            sum+=(a[i]%m)*((i-1)%m)%m;
        }
        cout<<sum;
        cout<<endl;
    }
    return 0;
}
