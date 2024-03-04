#include <bits/stdc++.h>
using  namespace std;
int bagsofTokenScore(vector<int>& tokens,int power){

     sort(tokens.begin(),tokens.end());
        int i=0;
        int j=tokens.size()-1;
        int ans=0;
        while(i<=j){
            if(tokens[i]<=power){
                power-=tokens[i];
                i++;
                ans++;
            }
            else if(i<j && ans>0){
              power+=tokens[j];
              ans--;
              j--;
            }
            else{
                break;
            }

            
        }
        return ans;
}
int main(){

int n;
cin>>n;
vector<int> tokens(n);
for(int i=0;i<n;i++){
    cin>>tokens[i];
}
int power;
cin>>power;

cout<<bagsofTokenScore(tokens,power)<<endl;
}