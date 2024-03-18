#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=4;
	int a[n];
	int c=0;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	    if(a[i]>=10){
	        c++;
	    }
	}
	cout<<c;
	return 0;
	
}
