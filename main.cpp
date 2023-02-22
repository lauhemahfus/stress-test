#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    ll n;cin >>n;
    int arr[n];
    ll sum =0;
    for(ll i =0; i<n; i++)cin>>arr[i];
    for(ll i =0; i<n; i++)sum+=arr[i];
    if(sum%2)sum--;
    cout <<sum <<endl;
}
int main(){

	ios_base::sync_with_stdio(false);cin.tie(0);
	solve();
	return 0;
}



