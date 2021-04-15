#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			int n,a[1000],sum=0;
			cin>>n;
			for(int i=1;i<=n;i++){
				cin>>a[i];
			}
			for(int i=1;i<=n;i++){
				sum+=a[i];
			}
			if(sum%2==0) cout<<"YES";
			else cout<<"NO";
			cout<<endl;
		}


		return 0;
	}

