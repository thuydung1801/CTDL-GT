#include<bits/stdc++.h>
using namespace std;

	int main(){
		int t,n,m;
		cin>>t;
		
		while(t--){
			vector <int> arr;
			arr.clear();
			cin>>n>>m;
			int a[n+5],b[m+5],d[m+n],dem=0,c[m+2];
			for(int i=0;i<n;i++){
				cin>>a[i];
				arr.push_back(a[i]);
			}
			for(int i=0;i<m;i++){
				cin>>b[i];
				c[i]=1;
				arr.push_back(b[i]);
			}
			sort(arr.begin(),arr.end());
			
			for(int i=0;i<m+n;i++){
				while(arr[i]==arr[i+1]) i++;
				cout<<arr[i]<<" ";
			}
			cout<<endl;
			
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(a[i]==b[j]&&c[j]){
						d[dem++]=a[i];
						c[j]=0;
						break;
					}
				}
			}
			sort(d,d+dem);
			for(int i=0;i<dem;i++){
				 cout<<d[i]<<" ";
			}
			cout<<endl;
		}


		return 0;
	}

