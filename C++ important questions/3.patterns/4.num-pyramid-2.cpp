#include<iostream>
// 1
// 22
// 333
// 4444
// 55555
using namespace std;
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}