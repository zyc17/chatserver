#include "json.hpp"
using json=nlohmann::json;

#include <iostream>
#include <vector>
#include <map>
using namespace std;

//json序列化示例1
void func1(){
    json js;
    js["msg_type"]=2;
    js["from"]="zhang san";
    js["to"]="li si";
    js["msg"]="hello,what are you doing now?";
    cout<<js<<endl;
}

int main(){
    func1();
    return 0;

}