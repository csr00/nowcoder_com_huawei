// 描述
// 接受一个只包含小写字母的字符串，然后输出该字符串反转后的字符串。（字符串长度不超过1000）
// 输入描述：
// 输入一行，为一个只包含小写字母的字符串。
// 输出描述：
// 输出该字符串反转后的字符串。
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    reverse(str.begin(), str.end());
    cout<<str<<endl;
    return 0;
}