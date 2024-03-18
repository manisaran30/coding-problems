#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;cin>>m;while(m--){
        int n;cin>>n;int a[n];int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==0){
          cout<<abs(sum)/2<<endl;
        }
        else
        cout<<"-1"<<endl;
    }
    return 0;
}
