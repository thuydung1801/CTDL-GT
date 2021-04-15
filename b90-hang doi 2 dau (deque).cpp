#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		deque<int> dq;
		while(t--){
			string s;
			cin>>s;
			if(s=="PUSHFRONT"){
				int so;
				cin>>so;
				dq.push_front(so);
			}
			else if(s=="PUSHBACK"){
				int so;
				cin>>so;
				dq.push_back(so);
			}
			else if(s=="PRINTFRONT"){
				if(dq.size()>0) cout<<dq.front()<<endl;
				else cout<<"NONE"<<endl;
			}
			else if(s=="PRINTBACK"){
				if(dq.size()>0) cout<<dq.back()<<endl;
				else cout<<"NONE"<<endl;
			}
			else if(s=="POPFRONT" &&dq.size()>0) dq.pop_front();
			else if(s=="POPBACK" &&dq.size()>0) dq.pop_back();
		}


		return 0;
	}

