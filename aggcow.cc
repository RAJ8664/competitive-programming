#include<bits/stdc++.h>
using namespace std;



const int N=1e5+5;
long long n,k;
bool canplace(int num,vector<int> &stalls){
    int last=-1,cows=k;
    for(int i=0;i<n;i++){
        if(last==-1||(stalls[i]-last>=num)){
            cows--;
            last=stalls[i];
        }
        if(cows==0) break;
    }
    return cows==0;


}


int aggressiveCows(vector<int> &stalls, int k) {
    int hi=1e9 ,lo=0,mid;
    while(hi-lo>1){
        mid=(hi+lo)/2;
        if(canplace(mid,stalls)){
            lo=mid;


        }
        else{
            hi=mid-1;
        }
    }
    if(canplace(hi,stalls)){
        return hi;
    }
    else{
        return lo;
    }



}
int main(){
    cin>>n>>k;
    vector<int> stalls(n);
    int i;
    for(i=0;i<n;i++){
        cin>>stalls[i];

    }
    sort(stalls.begin(),stalls.end());
    cout<<aggressiveCows(stalls,k);

    


}
