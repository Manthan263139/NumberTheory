#include<iostream>
using namespace std;
void MinMax(int n){
int d,mini=INT_MAX,maxi=INT_MIN;
while(n!=0){
        d=n%10;

    mini=min(mini,d);
    maxi=max(maxi,d);
    n=n/10;
}
cout<<"The Minimum Number is "<<mini<<endl;
cout<<"The Maximum Number is"<<maxi<<endl;

}

int main(){
    int n=5678;
    MinMax(n);




return 0;
}
