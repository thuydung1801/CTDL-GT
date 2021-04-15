#include<bits/stdc++.h>
using namespace std;
	int main(){
		string s;
		stack<int> stk;
		while(cin>>s){
			if(s=="push"){
				int so;
				cin>>so;
				stk.push(so);
			}
			else if(s=="show"){
				vector<int> a;
				if(stk.size()==0){
					cout<<"empty"<<endl;
					continue;
				} 
				while(stk.size()>0){
					a.push_back(stk.top());
					stk.pop();
				}
				reverse(a.begin(),a.end());
				for(int i=0;i<a.size();i++){
					cout<<a[i]<<" ";
					stk.push(a[i]);
				}
				cout<<endl;
			}
			else if(s=="pop" ) stk.pop();
			
		}


		return 0;
	}

