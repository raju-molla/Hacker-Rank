#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<ll>v(5);
    for(ll i=0; i<5; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll mn=0;
    for(ll i=0; i<5-1; i++){
        mn+=v[i];
    }
    ll mx=0;
    for(ll i=1; i<5; i++)
    {
        mx+=v[i];
    }
    cout<<mn<< " "<<mx<<endl;
    

}
