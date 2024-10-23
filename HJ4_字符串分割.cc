// getline函数位于<string>头文件中，用于从输入流中读取一行，直到
// 遇到换行符为止，并将读取的内容存储在指定的字符串中。
// getline(cin, str);
// 1. 基本操作
// 构造函数

// std::string str;：创建一个空字符串。
// std::string str("Hello");：创建一个包含指定字符的字符串。
// std::string str(size_t n, char c);：创建一个包含 n 个字符 c 的字符串。
// 赋值

// str.assign("New String");：将新字符串赋值给 str。
// str = "Another String";：使用赋值运算符进行赋值。
// 2. 字符串连接
// 连接
// std::string result = str1 + str2;：使用 + 运算符连接两个字符串。
// str.append(" World");：在 str 的末尾追加字符串。
// 3. 字符串大小和容量
// 大小
// str.size() 或 str.length()：返回字符串的长度（字符数）。
// 容量
// str.capacity()：返回字符串的当前容量（可以容纳的字符数）。
// 4. 字符串访问
// 访问单个字符
// char c = str[0];：访问字符串中的第一个字符。
// char c = str.at(0);：使用 at() 方法访问字符，提供边界检查。
// 5. 查找和替换
// 查找

// str.find("substring")：返回子字符串首次出现的位置，未找到返回 std::string::npos。
// str.rfind("substring")：返回子字符串最后一次出现的位置。
// 替换

// str.replace(pos, len, "new substring")：从 pos 开始替换 len 个字符为新字符串。
// 6. 子字符串
// 获取子字符串
// str.substr(pos, len)：返回从 pos 开始的长度为 len 的子字符串。
// 7. 字符串比较
// 比较
// str1.compare(str2)：比较两个字符串，返回负数、零或正数，表示 str1 小于、等于或大于 str2。
// 8. 转换
// 转换为 C 风格字符串
// const char* c_str = str.c_str();：返回指向字符串内容的指针。
// 转换为整数
// std::stoi(str)：将字符串转换为整数。
// std::stof(str)：将字符串转换为浮点数。
// 9. 其他操作
// 清空字符串
// str.clear();：清空字符串内容。
// 检查是否为空
// str.empty()：检查字符串是否为空。
// 描述
// •输入一个字符串，请按长度为8拆分每个输入字符串并进行输出；

// •长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
// 输入描述：
// 连续输入字符串(每个字符串长度小于等于100)

// 输出描述：
// 依次输出所有分割后的长度为8的新字符串

#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int str_len=str.length();
    int rem=str_len%8;
    if(rem!=0){
        rem=8-rem;
        string new_str;
        for(int i=0;i<rem;++i){
            new_str.append("0");
        }
        str.append(new_str);
    }
    int len=str.length();
    for(int i=0;i<len;i+=8){
        string sub_str;
        sub_str=str.substr(i,8);
        cout<<sub_str<<endl;
    }
    return 0;
}