#include <bits/stdc++.h>

using namespace std;
long long int a,b,c;
long long int recu(int k){
    if(k==1){
        return a % c;
    }
    long long int r = recu(k/2);
    r = r*r  % c;
    if(k%2==0){//짝수이면
        return r;
    }
    else{
        return r*a%c;
    }
}

int main(){
    cin>>a>>b>>c;
    cout<<recu(b);
    return 0;
}