#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    // cin>>m;
    for(int i = 1; i<=n; i++){
        // cout<<"*****"<<endl;
        for(int j=1; j<=m; j++){
            cout<<"*";
        }
        cout<<endl;
   }
   
    return 0;
}