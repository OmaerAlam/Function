#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
    int mx;
    if(a>b) mx=a;
    else mx=b;

    return mx;

}

int main(){

    int value = max(10,12);
    cout<<"Max Value is: "<<value<<endl;

return 0;
}
