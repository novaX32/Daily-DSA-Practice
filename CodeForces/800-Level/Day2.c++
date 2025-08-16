// DAY1 16/08/2025
// Line Trip Codeforces 1901A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> inter_points;
        
        inter_points.push_back(0);
        for(int i=0;i<n;i++){
            int int_pt;
            cin>>int_pt;
            inter_points.push_back(int_pt);

        }
        inter_points.push_back(x);
        int ans=INT_MIN;
        int m=inter_points.size();
        for(int i=1;i<m;i++){
            if(i==m-1){
                ans=max(ans,2*(inter_points[i]-inter_points[i-1]));
            }
            else{
                ans=max(ans,inter_points[i]-inter_points[i-1]);
            }
        }
        cout<<ans<<endl;
        

    }
    return 0;
}

