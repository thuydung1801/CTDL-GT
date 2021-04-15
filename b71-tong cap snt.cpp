#include<bits/stdc++.h>
using namespace std;
int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
	int main(){
		int t,n,m,k;
		cin>>t;
		while(t--){
			cin>>n;
			int a[n+5],dem=0,k=0;
			vector <int> arr;
			arr.clear();
			for(int i=2;i<n;i++){
				if(snt(i)&&snt(n-i)) {
					cout<<i<<" "<<n-i<<endl;
					k=1;
					break;
				}
				
			}
			if(k==0) cout<<"-1"<<endl;
			
		}


		return 0;
	}

