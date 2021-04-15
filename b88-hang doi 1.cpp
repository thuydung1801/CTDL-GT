#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		
		while(t--){
			int k,res=0;
			cin>>k;
			deque<int> dq;
			while(k--){
				int so;
				cin>>so;
				if(so==1) cout<<dq.size()<<endl;
				else if(so==2) {
					if(dq.size()>0) cout<<"NO"<<endl;
					else cout<<"YES"<<endl;
				}
				else if(so==3){
					int val;
					cin>>val;
					dq.push_back(val);
				}
				else if(so==4 && dq.size()>0) dq.pop_front();
				else if(so==5){
					if(dq.size()>0 ) cout<<dq.front()<<endl;
					else cout<<"-1"<<endl;
				}
				else if(so==6){
					if(dq.size()>0 ) cout<<dq.back()<<endl;
					else cout<<"-1"<<endl;
				}
				res=so;
			}
			if(res==3|| res==4 ) cout<<endl;
		}


		return 0;
	}

