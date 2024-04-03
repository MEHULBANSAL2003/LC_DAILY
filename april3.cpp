#include <bits/stdc++.h>
using namespace std;

  bool helper(vector<vector<char>>& board,int i,int j,string word,int len){
       if(len==word.length()){
        return true;
       }
       if(i<0||j<0||i>=board.size()||j>=board[0].size()|| board[i][j]!=word[len]){
        return false;
       }
        char temp = board[i][j];                    
        board[i][j] = '#'; 

        bool a=helper(board,i-1,j,word,len+1);
        bool b=helper(board,i+1,j,word,len+1);
        bool c=helper(board,i,j-1,word,len+1);
        bool d=helper(board,i,j+1,word,len+1);    
           board[i][j]=temp;  // backtrack

           return a ||b||c||d;
       

    }


bool exist(vector<vector<char>>& board, string word) {
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                char c=board[i][j];
                if(word[0]==c && helper(board,i,j,word,0)){
                    return true;
                }
            }
        }
        return false;
    }
  


int main(){

int m,n;
cin>>m>>n;

vector<vector<char>> v(m,vector<char>(n,'#'));

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>v[i][j];
    }
}

string word;
cin>>word;

bool ans=exist(v,word);

cout<<ans<<endl;



}