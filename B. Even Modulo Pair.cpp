#include<bits/stdc++.h>

using namespace std;
int main(){

int t;
cin >> t;
while(t--){

long long n;
cin >> n;
vector<long long > v(n);
long long ans1 = 0, ans2 = 0;
for(int i=0;i<n;i++){

cin >> v[i];


}

for(int i=0;i<n;i++){

for(int j=i+1;j<n;j++){


if((v[j] % v[i] % 2 ) == 0){

ans1 = v[i];
ans2 = v[j];
break;
}


}

if(ans1 and ans2) break;
}


if(ans1 and ans2){

cout << ans1 << " " << ans2 << endl;
}

else{

cout << "-1" << endl;
}
















}




}
