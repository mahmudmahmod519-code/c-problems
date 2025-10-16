

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

static int counter=0;

void splitNumber(string number){
     cout<<number[counter]<<" ";
     counter++;
     if(counter==number.length()-1)return;
     splitNumber(number);
}


void printnum(int num){
     int number;
     cin>>number;
     string string_number=to_string(number);
     splitNumber(string_number);
     cout<<string_number[string_number.length()-1]<<endl;
     counter=0;
     if(num==1)return;
     printnum(num-1);
}


//O(n)
int main(){
     int number;
     cin>>number;
     printnum(number);
     return 0;
}