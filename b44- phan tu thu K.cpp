#include<bits/stdc++.h>
using namespace std;
vector <int> arr;
int m,n,k;

	int main(){
		int t;
		cin>>t;
		while(t--){
			arr.clear();
			cin>>m>>n>>k;
			int a[m+1],b[n+1];
			for(int i=0;i<m;i++){
				cin>>a[i];
				arr.push_back(a[i]);
			}
			for(int i=0;i<n;i++){
				cin>>b[i];
				arr.push_back(b[i]);
			}
			
			sort(arr.begin(),arr.end());
			for(int i=0;i<m+n;i++){
				if(i==k-1) cout<<arr[i]<<endl;
			}
			
		}


		return 0;
	}

