#include<iostream>
using namespace std;
int gcd(int a ,int b){
while(b!=0){
    int temp=b;
    b=a%b;
    a=temp;
}
return a;
}
int main(){
    int a=6,b=2;
    cout<<"The Gcd of two numbers is"<<gcd(a,b);





return 0;
}
