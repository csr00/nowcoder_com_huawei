//unordered_set的常见函数
//begin()返回指向容器中第一个元素的迭代器
//end()返回指向容器中最后一个元素的迭代器
//empty()如果容器为空则返回true
//size()返回容器中元素的个数
//insert()向容器中添加新元素
//erase()删除指定元素
//clear()清空容器
//count()统计某个值元素的个数
//find()查找某个值元素的个数
//emplace()向容器中添加新元素



// 描述
// 输入一个 int 型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。
// 保证输入的整数最后一位不是 0 。
// 数据范围： 
// 1≤n≤10 8
// 输入描述：
// 输入一个int型整数
// 输出描述：
// 按照从右向左的阅读顺序，返回一个不含重复数字的新的整数
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> set_num;
    int num,sum;
    cin>>num;
    while(num){
        if(set_num.count(num%10)==0){
            set_num.insert(num%10);
            sum=sum*10+num%10;
        }
        num/=10;
    }
    cout<<sum<<endl;
    return 0;
}