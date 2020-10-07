#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int r=n%5;
        if(n<38){
            cout<<n<<endl;
        }
        else if(r>=3){
            cout<<n+(5-r)<<endl;
        }
        else{
            cout<<n<<endl;
        }

    }
}
