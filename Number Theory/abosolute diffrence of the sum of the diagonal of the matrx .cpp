#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cin>>arr[i][j];

        }
    }
    int sum1=0;
    int sum2=0;

    // sum of the left diagonal is
    int i=0;
    int j=0;
    while(i!=n && j!=n){
        sum1+=arr[i][j];
        i++;
        j++;
    }

    // sum of the right diagonal is
     i=0;
     j=n-1;
    while(i!=n&& j>=0){
        sum2+=arr[i][j];
        i++;
        j--;

    }
cout<<"The absolute diffrence is "<<abs(sum1-sum2)<<endl;


return 0;
}
