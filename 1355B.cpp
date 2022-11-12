#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i = a; i<= b ; i++)
#define loopr(i,a,b) for(ll i = a; i>=b ; i--)
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nn <<"\n"
#define all(x) (x).begin(), (x).end()
#define in INT_MAX

int main(int argc,char const * argv[]){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        map<int,int> m;
        set<int> s;
        loop(i,0,n-1){
            cin>>a[i];
            s.insert(a[i]);
            m[a[i]]++;
        }
        int cnt=0;
        int sum=0;
        for(auto np:s){
            sum+=m[np];
            if(sum/np >0){
                cnt+=sum/np;
                sum-=(sum/np)*np;
            }
        }
        cout<<cnt nn;

    }
    
    return 0;
}