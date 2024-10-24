//通过sort进行字典序排序
// 描述
// 给定 n 个字符串，请对 n 个字符串按照字典序排列。
// 数据范围： 1≤n≤1000  ，字符串长度满足 1≤len≤100 
// 输入描述：
// 输入第一行为一个正整数n(1≤n≤1000),下面n行为n个字符串(字符串长度≤100),字符串中只含有大小写字母。
// 输出描述：
// 数据输出n行，输出结果为按照字典序排列的字符串。


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> words;
    while(n--){
        string word;
        cin>>word;
        words.push_back(word);
    }
    sort(words.begin(),words.end());
    for(auto str:words){
        cout<<str<<endl;
    }
    return 0;
}