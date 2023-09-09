#include<iostream>
using namespace std;
int reverse(int X){
int y=0;
while(X>0){
    int digit=X%10;
    y=y*10+digit;
    X=X/10;

}
return y;

}
int main(){
    int X=235;
    int dummy=X;
    int y=reverse(X);
    if(dummy==y){
        cout<<"Number is Palindrome";
    }
    else{
        cout<<"Number is not Palindrome";
    }




return 0;
}
