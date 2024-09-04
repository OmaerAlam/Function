#include<bits/stdc++.h>
using namespace std;

long long pow(int n, int p){
    long long result = 1;
    for(int i=0;i<p;i++) result *= n;

    return result;

}

int main(){
    int a=2, b=3;
    cout<<pow(a,b)<<endl;

return 0;
}




