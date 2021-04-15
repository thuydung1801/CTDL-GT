#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		deque<int> dq;
		while(t--){
			string s;
			cin>>s;
			if(s=="PUSH"){
				int so;
				cin>>so;
				dq.push_back(so);
			}
			else if(s=="PRINTFRONT"){
				if(dq.size()>0) cout<<dq.front()<<endl;
				else cout<<"NONE"<<endl;
			}
			else if(s=="POP" && dq.size()>0) dq.pop_front();
			
		}


		return 0;
	}

