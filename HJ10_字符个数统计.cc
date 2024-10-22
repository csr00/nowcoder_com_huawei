// 描述
// 编写一个函数，计算字符串中含有的不同字符的个数。字符在 ASCII 码范围内( 0~127 ，包括 0 和 127 )，换行表示结束符，不算在字符里。不在范围内的不作统计。多个相同的字符只计算一次
// 例如，对于字符串 abaca 而言，有 a、b、c 三种不同的字符，因此输出 3 。
// 数据范围： 1≤n≤500 
// 输入描述：
// 输入一行没有空格的字符串。
// 输出描述：
// 输出 输入字符串 中范围在(0~127，包括0和127)字符的种数。
#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;
int main(){
    string str;
    unordered_set<char> set_char;
    getline(cin,str);
    for(auto ch:str){
        set_char.insert(ch);
    }
    cout<<set_char.size()<<endl;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    bool hash[128]={false};
    int cnt=0;
    for(auto ch:str){
        if(hash[ch]){
            continue;
        }else{
            hash[ch]=true;
            ++cnt;
        }
    }
    cout<<cnt<<endl;
    return 0;
}