#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			long long n,k=0,sum=0;
			cin>>n;
			long long a[n+1],b[n+1],c[n+1];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			for(int i=0;i<n;i++){
				cin>>b[i];
			}
			sort(a,a+n);
			sort(b,b+n);
			for(int i=n-1;i>=0;i--){
				c[k++]=b[i];
			}
			for(int i=0;i<n;i++){
				sum+=a[i]*c[i];
			}
			cout<<sum<<endl;
		}


		return 0;
	}

