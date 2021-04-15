#include<bits/stdc++.h>
using namespace std;
int t,n,a[1000];

vector <vector <int> > arr;
void in(){
	cout<<"[";
	for(int i=1;i<=n;i++){
		if(i<n) cout<<a[i]<<" ";
		else cout<<a[i];
	}
	cout<<"]";
}

	int main(){
		cin>>t;
		while(t--){
			cin>>n;
			int dem=0;
			for(int i=1;i<=n;i++){
				cin>>a[i];
			}
			
			arr.clear();
			vector <int> l1;
			l1.clear();
			for(int i=1;i<=n;i++){
				l1.push_back(a[i]);
			}
			arr.push_back(l1);
			dem++;
			while(n>0){
				vector <int> l;
				l.clear();
		
				for(int i=1;i<=n-1;i++){
				a[i]=a[i]+a[i+1];
				l.push_back(a[i]);
			}
			arr.push_back(l);
				dem++;
				n--;

			}
			
			for(int i=dem-2;i>=0;i--){
				cout<<"[";
				for(int j=0;j<arr[i].size();j++){
					if(j<arr[i].size()-1)	cout<<arr[i][j]<<", ";
					else cout<<arr[i][j];
				}
				cout<<"] ";
			}
			cout<<endl;
			
		}

		return 0;
	}

