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

void even_postion(int n,int a[]);


int main(){
     int n;
     cin>>n;
     int a[n];

     for(int i=0;i<n;i++)
          cin>>a[i];

     even_postion(n-1,a);
     cout<<a[0]<<endl;

     return 0;
}

void even_postion(int n,int a[]){
     if(n<=0)return;
     
     
     //4      1 2 3 4
     //  3 1

     if(n%2==0)
          cout<<a[n]<<' ';
          
     even_postion(n-1,a);
}