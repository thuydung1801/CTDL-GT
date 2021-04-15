#include<bits/stdc++.h>
using namespace std;
long long n,t;
	int main(){
		cin>>t;
		while(t--){
			long long sum1=0,sum2=0;
			cin>>n;
			long long a[n+1];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			sort(a,a+n);
			for(int i=0;i<n;i++){
				if(i%2==0) sum1=sum1*10+a[i];
				else sum2=sum2*10+a[i];	
			}
			cout<<sum1+sum2<<endl;	
		}

		return 0;
	}

