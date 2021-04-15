#include<bits/stdc++.h>
using namespace std;
long long n,t;
	int main(){
		cin>>t;
		while(t--){
			long long sum=0,d=1e9+7;
			cin>>n;
			long long a[n+1];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			sort(a,a+n);
			for(int i=0;i<n;i++)
				sum+=a[i]*i;
			sum%=d;	
			cout<<sum<<endl;
		}

		return 0;
	}

