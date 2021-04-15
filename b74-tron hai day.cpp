#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			int n,m;
			cin>>n>>m;
			vector <int> arr;
			arr.clear();
			int a[n+1],b[m+2];
			for(int i=0;i<n;i++){
				cin>>a[i];
				arr.push_back(a[i]);
			}
			for(int i=0;i<m;i++){
				cin>>b[i];
				arr.push_back(b[i]);
			}
			sort(arr.begin(),arr.end());
			for(int i=0;i<m+n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
			
		}


		return 0;
	}

