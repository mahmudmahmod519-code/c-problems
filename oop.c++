// #include <iostream>
// // #include "car.h"
// #include<string>
// using namespace std;
// class culc{
//     private:
//     int num1,num2,num3;
//     public:
//     static int add(int num1,int num2){
//         return num1+num2;
//     }
//     static int add(float num1,float num2){
//         return num1+num2;
//     }
//     static int add(int num1,int num2,int num3){
//         return num1+num2+num3;
//     }
//     static int substraction(int num1,int num2){
//         return num1-num2;
//     }
//     static int substraction(float num1,float num2){
//         return num1-num2;
//     }
//     static int substraction(int num1,int num2,int num3){
//         return num1-num2-num3;
//     }
//     culc(int n1,int n2,int n3=0):num1(n1),num2(n2),num3(n3)
//     {}
//     ~culc(){
//         cout<<"thank you on your work";
//     }
// };



// class car{
//     private:
//     string color;
//     int price;
//     public:
//     int get_price(){
//         return price;
//     }
//     int sumprice(int num1,int num2,int num3){
//         return culc::add(num1,num2,num3);
//     }
//     int sumprice(int num1,int num2){
//         return culc::add(num1,num2);
//     }
//     int subprice(int num1,int num2,int num3){
//         return culc::substraction(num1,num2,num3);
//     }
//     int subprice(int num1,int num2){
//         return culc::substraction(num1,num2);
//     }
//     string get_color(){
//         return color;
//     }

//     car():color(""),price(0){

//     };
//     car(string co,int pr):color(co),price(pr){
        
//     };
//     ~car(){
//     };
 

// };
// int main(){

//     return 0;
// }





















#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;

void to_binary(string);

int main()
{
string massage;
    while (true)
    { 
cin>>massage;
to_binary(massage);
massage.clear();
    }
    

    return 0;
}




void to_binary(string massage){
for(int i=0;i<massage.length();i++){
int number=(int)massage[i];
while(number!=0){
(number%2==0)? cout<<0:cout<<1;
number=number/2;
        }
    }
}










//-=======================================================




void convertbinary(int number){

while (number!=0)
{
number%2==0 ?cout<<'0':cout<<'1';
number=number/2;
}
}

void reverse(string&massage){
       string result="";
       for(int i=massage.length()-1;i>=0;i--)result+=massage[i];
}





void converttomassage(string number){
       reverse(number);
string massage="";
       for(int i=0;i<number.length();){

int count=0;
int result=0;
while(count<=7&&i<number.length()){
int n=number[count]=='1'?2^count:0;
       result+=n;
       count++;
       i++;
}

massage+=(char)result;

       }
       cout<<massage;
}
