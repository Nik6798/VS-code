#include<iostream>
#include<math.h>
using namespace std;
int subsequences(string str,string* output){
    if(str.length()==0){
        output[0]="";
        return 1;
    }
   int smallSize= subsequences(str.substr(1),output);
    for (int i = 0; i < smallSize; i++)
    {
        output[i+smallSize]=str[0]+output[i];
    }
    return 2*smallSize;
}
int main(){
    string str;
    cin>>str;
    string* output =new string[pow(2,str.length())];
    int s=subsequences(str,output);
    return 0;
}
