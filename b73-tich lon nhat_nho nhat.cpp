#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t,n,m,k;
		cin>>t;
		while(t--){
			cin>>n>>m;
			long long a[n+5],sum=1,b[m+5];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			sort(a,a+n);
			for(int i=0;i<m;i++){
				cin>>b[i];
			}
			sort(b,b+m);
		//	int k=a[n-1],d=b[0];
			sum=a[n-1]*b[0];
			cout<<sum<<endl;
		}


		return 0;
	}

