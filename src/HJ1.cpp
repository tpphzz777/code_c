#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

int HJ1() {
    cout<<"HJ1执行中:"<<endl;

    string Get_From_Cin;
    
    //cin >> Get_From_Cin;
    getline(cin, Get_From_Cin);

    //利用string的iterator 迭代器 倒置字符串 如果是全单词就直接输出length

    //利用累加进行计算
    //cout<<Get_From_Cin;
    string::reverse_iterator itString = Get_From_Cin.rbegin();
    for(;itString != Get_From_Cin.rend();itString++){
        //cout<<*itString;
        if(*itString == ' '){
            break;
        }
    }
    //string::iterator itString_c = itString.base();
    string::iterator itString2 = Get_From_Cin.end();
    string childString(itString.base(),itString2);
    int stringLenght;
    stringLenght = childString.length();
        
        cout << stringLenght<< endl;
    return 0;
}
// 64 位输出请用 printf("%lld")
