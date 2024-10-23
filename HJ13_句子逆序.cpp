// 描述
// 将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”
// 所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符
// 数据范围：输入的字符串长度满足 1≤n≤1000 
// 注意本题有多组输入
// 输入描述：
// 输入一个英文语句，每个单词用空格隔开。保证输入只包含空格和字母。
// 输出描述：
// 得到逆序的句子

//两次reverse
#include <algorithm>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    reverse(str.begin(), str.end());
    for(int i=0;i<str.length();++i){
        int j=i;
        while(j<str.size()&&str[j]!=' '){
            ++j;
        }
        reverse(str.begin()+i, str.begin()+j);
        i=j;
    }
    cout<<str<<endl;
    return 0;
}