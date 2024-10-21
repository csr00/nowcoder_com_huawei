/*描述
计算字符串最后一个单词的长度，单词以空格隔开，字符串长度小于5000。（注：字符串末尾不以空格为结尾）
输入描述：
输入一行，代表要计算的字符串，非空，长度小于5000。

输出描述：
输出一个整数，表示输入字符串最后一个单词的长度*/

//本题关键在于cin的用法，cin遇到空格会停止读取，getline遇到换行符停止读取
//因此使用getline读取整行，然后从后往前遍历，遇到空格就停止，输出长度即可


// 读取整行：getline 会读取直到换行符（\n）为止的所有字符，包括空格。
// 自动处理空格：与 std::cin 不同，getline 不会忽略输入中的空格。
// 换行符处理：读取后，换行符不会被存储到 str 中。

#include <iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int length=0;
    for(int i=str.length()-1;str[i]!=' '&&i>=0;--i){
        ++length;
    }
    cout<<length<<endl;
    return 0;
}