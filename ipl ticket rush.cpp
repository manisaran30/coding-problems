#include <bits/stdc++.h>
using namespace std;

int main() {
	int m;
	cin>>m;
	while(m--){
	    int x,y;
	    cin>>x>>y;
	    if(x>y||x==y){
	        cout<<x-y<<endl;
	    }
	    else {
	        cout<<"0"<<endl;
	    }
	}
	return 0;

}
