// 描述
// 写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小
// 数点后数值大于等于 0.5 ,向上取整；小于 0.5 ，则向下取整。
// 数据范围：保证输入的数字在 32 位浮点数范围内
// 输入描述：
// 输入一个正浮点数值
// 输出描述：
// 输出该数值的近似整数值

#include<iostream>
using namespace std;
int main(){
    double num;
    cin>>num;
    int a=(int)num;
    if((num-a)*10>=5){
        cout<<a+1<<endl;
    }else{
        cout<<a<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    double num;
    cin>>num;
    cout<<(int)(num+0.5)<<endl;
    return 0;
}