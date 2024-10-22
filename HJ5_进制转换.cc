// erase函数
// std::string& erase(size_t pos = 0, size_t len = npos);
// 参数：
// pos：要开始删除的字符位置，默认为 0。
// len：要删除的字符数，默认为 npos（表示删除到字符串末尾）。
// 描述
// 写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。

// 数据范围：保证结果在 
// 1≤n≤2^31 −1 
// 输入描述：
// 输入一个十六进制的数值字符串。

// 输出描述：
// 输出该数值的十进制字符串。不同组的测试用例用\n隔开。
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    long long sum=0;
    getline(cin,str);
    for(int i=2;i<str.length();++i){
        int tmp=0;
        if(str[i]>='0'&&str[i]<='9'){
            tmp=str[i]-'0';
        }else{
            tmp=str[i]-'A'+10;
        }
        sum=sum*16+tmp;
    }
    cout<<sum<<endl;
    return 0;
}