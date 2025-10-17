#include<vector>
#include<cmath>
#include<algorithm>
#include <string>
#include<iostream>
#include<iomanip>
#include<stack>
#include<array>
#include <set>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include <bits/stdc++.h>
using namespace std;

// static int counter=0;

// void splitNumber(string number){
//      cout<<number[counter]<<" ";
//      counter++;
//      if(counter==number.length()-1)return;
//      splitNumber(number);
// }


void binary_code(int num,string&binary_num){

     binary_num +=to_string(num%2);
     
     if(num<=1)return;

     binary_code(num/2,binary_num);
}


//O(n)
int main(){
     int t;
     cin>>t;

     while(t--){
          int number;
          cin>>number;
          string binary_num="";
          //convert to binary
          binary_code(number,binary_num);
          
          for(int i=binary_num.length()-1;i>=0;i--)
               cout<<binary_num[i];
          //reverse string here;
          cout<<endl;
     }
     return 0;
}