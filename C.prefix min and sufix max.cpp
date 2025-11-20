#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;


while(t--){
int n;
cin >> n;

vector<int> a(n);

for(int i=0;i<n;i++)  cin >> a[i];

vector<int > prefixsum(n),suffixsum(n);


prefixsum[0] = a[0];
for(int i=1;i<n;i++){
prefixsum[i] = min(prefixsum[i-1],a[i]);

}
suffixsum[n-1] = a[n-1];
for(int i=n-2;i >= 0;i--){
suffixsum[i] = max(suffixsum[i+1],a[i]);

}


string ans = " ";

for(int i=0;i<n;i++){

if(a[i] == prefixsum[i]  || a[i] == suffixsum[i]){
ans += '1';



}else{

ans += '0';

}







}

cout << ans << "\n";















}
}
