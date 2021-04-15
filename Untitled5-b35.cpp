#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			int d;
			cin>>d;
			string s;
			cin>>s;
			
			int a[1000]={0},dem=0;
			for(int i=0;i<s.size();i++){
				a[s[i]]++;
				if(dem<a[s[i]]) dem=a[s[i]];
			}
			if(s.size()%2==0 && dem<=s.size()-dem&&dem>=s.size()-d) cout<<"1";
			else if(s.size()%2!=0 && dem<=s.size()/2 +1&&dem>=s.size()-d) cout<<"1";
			else cout<<"-1";
			cout<<endl;
		}


		return 0;
	}

