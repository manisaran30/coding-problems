#include <bits/stdc++.h>
using namespace std;

int main() {
	int m;
	cin>>m;
	int a,b,c;
	while(m--){
	    cin>>a>>b>>c;
	    if(a+b+c==180){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
