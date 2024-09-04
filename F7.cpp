#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
int a[mx];
int n;

void swap(int &a, int &b){
    int tmp=a;
    a=b;
    b=tmp;
}

void reverse(){
    for(int i=1,j=n; i<j; i++,j--) swap(a[i],a[j]);
}

int main(){

    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    reverse();
    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

return 0;
}


