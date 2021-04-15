#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			int n;
			cin>>n;
			deque<string> q;
			q.push_back("6");
			q.push_back("8");
			vector <long long> arr;
			arr.clear();
			while(q.size()>0){
				long long tmp1=0,tmp2=0;
				string a=q.front(); q.pop_front();
				for(int i=0;i<a.size();i++){
					tmp1=tmp1*10 +(long long)(a[i]-'0');
				}
				arr.push_back(tmp1);
				if(a.size()<n ){
					q.push_back(a+"6");
					q.push_back(a+"8");

				}
			}
			sort(arr.begin(),arr.end());
			cout<<arr.size()<<endl;
			for(int i=0;i<arr.size();i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}


		return 0;
	}

