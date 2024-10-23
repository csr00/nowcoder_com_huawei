// 描述
// 输入一个整数，将这个整数以字符串的形式逆序输出
// 程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001
// 数据范围： 0≤n≤2 30 −1 
// 输入描述：
// 输入一个int整数
// 输出描述：
// 将这个整数以字符串的形式逆序输出

#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    string str;
    if(num==0){
        str="0";
    }
    while(num){
        char ch=num%10+'0';
        str+=ch;
        num/=10;
    }
    cout<<str<<endl;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    cin>>num;
    string str;
    if(num==0){
        str="0";
    }
    while(num){
        char ch=num%10+'0';
        str.push_back(ch);
        num/=10;
    }
    cout<<str<<endl;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    cin>>num;
    string str;
    if(num==0){
        str="0";
    }
    while(num){
        str.append(to_string(num%10));
        num/=10;
    }
    cout<<str<<endl;
    return 0;
}