#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if (n ==0)
    {
        return 1;
    }
    int small_output = fact(n-1);
    return n*small_output;
    

}

int main(){
    int n;
    cin>>n;
    int result = fact(n);
    cout<<result<<endl;
}