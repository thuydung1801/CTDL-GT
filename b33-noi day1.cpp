#include<bits/stdc++.h>
using namespace std;
priority_queue <int,vector<int> ,greater<int> > arr;
int n;
	int main(){
		int t;
		cin>>t;
		while(t--){
			cin>>n;
			long long a[n+1],dem=0;
			priority_queue <long long,vector<long long> ,greater<long long> > arr;
			for(int i=0;i<n;i++){
				int k;
				cin>>k;
				arr.push(k);
			}
			int sum=0;
			while(arr.size()>1){
				long long first=arr.top();
				arr.pop();
				long long second=arr.top();
				arr.pop();
				long long sum=first+second;
				arr.push(sum);
				dem+=sum;
			}
			
			cout<<dem<<endl;
		}


		return 0;
	}

