// 描述
// 数据表记录包含表索引index和数值value（int范围的正整数），请对
// 表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照index值升序进行输出。
// 提示:
// 0 <= index <= 11111111
// 1 <= value <= 100000
// 输入描述：
// 先输入键值对的个数n（1 <= n <= 500）
// 接下来n行每行输入成对的index和value值，以空格隔开
// 输出描述：
// 输出合并后的键值对（多行）
#include <iostream>
#include<map>
using namespace std;
int main(){
    int num;
    cin>>num;
    map<int,int>map;
    int k,v;
    while(num--){
        cin>>k>>v;
        map[k]+=v;
    }
    for(auto it=map.begin();it!=map.end();++it){
        cout<<it->first<<' '<<it->second<<endl;
    }
    return 0;
}