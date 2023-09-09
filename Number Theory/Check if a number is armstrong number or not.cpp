#include<iostream>
using namespace std;
int main(){

    int n,arm,r,c;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    c=n;
    while(n>0){
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm){
        cout<<"Armstrong Number";
    }
    else{
        cout<<" Not a armstrong Number";
    }



return 0;
}
