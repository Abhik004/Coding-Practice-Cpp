#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int maximumOnesRow(vector<vector<int> >&v){
    int maxones=INT_MIN;
    int maxonesrow=-1;
    int columns=v[0].size();
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j==1]){
                int numberofones=columns-j;
                if(numberofones>maxones){
                    maxones=numberofones;
                    maxonesrow=i;
                }
                break;
            }
        }
    }
    return maxonesrow;
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int> > vec(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }

    int res=maximumOnesRow(vec);
    cout<<res<<endl;
    return 0;
}