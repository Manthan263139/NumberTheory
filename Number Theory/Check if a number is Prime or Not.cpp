#include<iostream>
using namespace std;
int main(){

    int n;
    int cnt=0;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
        if(cnt==2){
                cout<<"The Number is Prime Number"<<endl;

        }
        else{
            cout<<"Not a prime Number ";
        }





return 0;
}
