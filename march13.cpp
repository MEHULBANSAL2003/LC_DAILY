#include <bits/stdc++.h>
using namespace std;
int pivot_int(int n){
      int sum=0;
       for(int i=1;i<=n;i++){
        sum+=i;
       } 
       int prefsum=0;
       for(int i=1;i<=n;i++){
        prefsum+=i;
        if(prefsum==(sum-prefsum)+i){
            return i;
        }
       }
       return -1;
}
int main(){

    int n;
    cin>> n;
    int ans=pivot_int(n);
    cout<<ans<<endl;
}