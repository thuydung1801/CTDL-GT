#include<bits/stdc++.h>
using namespace std;
long long n,t,k;
	int main(){
		cin>>t;
		while(t--){
			long long sum1=0,sum2=0;
			cin>>n>>k;
			long long a[n+1];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			sort(a,a+n);
			for(int i=0;i<n;i++){
				if(k<=n/2){
					if(i<k) sum1+=a[i];
					else sum2+=a[i];
				}
				else{
					if(i>=n-k)	sum2+=a[i];
				 	else sum1+=a[i];
				} 	
			}
			cout<<sum2-sum1<<endl;	
		}

		return 0;
	}

