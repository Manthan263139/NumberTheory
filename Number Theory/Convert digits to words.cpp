#include<iostream>
using namespace std;
void numintoword(string str){
string singledigit[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
string twodigit[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string tensmultiple[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
string tenspower[]={"hundred","thousand"};
if(str.length()==0){
    cout<<""<<endl;
    return;

}
else if(str.length()==1){
        cout<<singledigit[str[0]-'0']<<endl;
return;

}
int len=str.length();
for(int i=0;i<str.length();i++){
    if(len>2){
        if(str[i]-'0'!=0){
            cout<<singledigit[str[i]-'0']<<" ";
            cout<<tenspower[len-3]<<" ";
        }
        len--;
    }
    else {
        if(str[i]-'0'==1){
            cout<<twodigit[str[i+1]-'0']<<" ";
            return;
        }
           else if(str[i]-'0'!=0){
            cout<<tensmultiple[str[i]-'0']<<" ";
            if(str[i+1]-'0'!=0)
                cout<<singledigit[str[i+1]-'0']<<" ";
            return;
           }

        }
    }
}




int main(){
    string str="";
    cin>>str;
    numintoword(str);





return 0;
}
