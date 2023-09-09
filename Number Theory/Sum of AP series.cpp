#include<iostream>
using namespace std;
float sum(float a,float d, int n){
float sum=0;
float r;
for(int i=0;i<=n;i++){
    r=a+(n-1)*d;
    sum=sum+r;
}
return sum;



}

int main(){

    float a=2,d=2;
    int n=4;
    cout<<"Sum of Given AP Series"<<sum(a,d,n);





return 0;
}
