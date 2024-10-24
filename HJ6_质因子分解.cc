//从小到大循环判断
// 描述
// 功能:输入一个正整数，按照从小到大的顺序输出它的所有质因子
// （重复的也要列举）（如180的质因子为2 2 3 3 5 ）
// 数据范围： 1≤n≤2×10 9
// 输入描述：
// 输入一个整数
// 输出描述：
// 按照从小到大的顺序输出它的所有质数的因子，以空格隔开。

#include<iostream>
using namespace std;
int main(){
    long num;
    cin>>num;
    for(int i=2;i*i<=num;++i){
        while(num%i==0){
            cout<<i<<' ';
            num/=i;
        }
    }
    if(num!=1) cout<<num<<' ';
    return 0;
}