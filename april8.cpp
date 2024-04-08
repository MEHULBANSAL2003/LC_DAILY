#include <bits/stdc++.h>
using namespace std;

int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt1=0;
        int cnt2=0;
         for(int i=0;i<students.size();i++){
            if(students[i]==1){ cnt1++;
            }
            else{ 
            cnt2++;
            }
        }

     int cnt=0;
        for(int i=0;i<sandwiches.size();i++){
            if(sandwiches[i]==1){
                if(cnt1==0){
                    break;
                }
                cnt1--;
                cnt++;

            }
            else{
                if(cnt2!=0){
                    cnt2--;
                    cnt++;
                }
                else{
                    break;
                }

            }
        }
        return students.size()-cnt;
        


    }

int main(){
    int n;
    cin>>n;

    vector<int> students(n);
    vector<int> sandwiches(n);

    for(int i=0;i<n;i++){
        cin>>students[i];
    }

    
    for(int i=0;i<n;i++){
        cin>>sandwiches[i];
    }

    int ans=countStudents(students,sandwiches);

    cout<<ans<<endl;
}