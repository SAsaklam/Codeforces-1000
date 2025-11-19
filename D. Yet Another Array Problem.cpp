#include<bits/stdc++.h>

using namespace std;
int main(){

int t;
cin >> t;
while(t--){
int n;
cin >> n;


vector<long long > a(n);

for(int i=0;i<n;i++) cin >> a[i];

long long x = 2;
bool ok = false;

while(true){


for(long long v: a){

if(__gcd(v,x) == 1){

ok = true;
break;

}


}

if(ok){

cout << x << "\n";
break;
}
x++;

}



}


return 0;

}































