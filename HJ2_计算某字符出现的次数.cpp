/*描述
写出一个程序，接受一个由字母、数字和空格组成的字符串，和一个字符，然后
输出输入字符串中该字符的出现次数。（不区分大小写字母）

数据范围： 1≤n≤1000
  
输入描述：
第一行输入一个由字母、数字和空格组成的字符串，第二行输入一个字符（保证该字符不为空格）。

输出描述：
输出输入字符串中含有该字符的个数。（不区分大小写字母）*/


//#include <cctype> 是 C++ 中用于包含字符处理函数的头文件
//一些常见函数如下：
// 字符分类函数

// std::isalpha(int ch)：检查字符是否为字母（a-z 或 A-Z）。
// std::isdigit(int ch)：检查字符是否为数字（0-9）。
// std::isspace(int ch)：检查字符是否为空白字符（如空格、制表符、换行符等）。
// std::islower(int ch)：检查字符是否为小写字母。
// std::isupper(int ch)：检查字符是否为大写字母。
// std::ispunct(int ch)：检查字符是否为标点符号。
// 字符转换函数

// std::tolower(int ch)：将字符转换为小写字母，如果该字符是字母。
// std::toupper(int ch)：将字符转换为大写字母，如果该字符是字母。

#include <cctype>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    char ch;
    getline(cin,str);
    cin>>ch;
    ch=tolower(ch);
    int cnt=0;
    for(char tmp:str){
        if(tolower(tmp)==ch){
            ++cnt;
        }
    }
    cout<<cnt<<endl;
    return 0;
}