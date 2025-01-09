#include<iostream>
#include<string>
#include<iterator>
#include<algorithm>

using namespace std;

enum Char_Types{
    NUMBER = 0,
    UPPERCASE,
    LOWERCASE

};
int HJ2(){

    string Get_From_Cin;
    char Get_From_Cin_Char ='\0';
    getline(cin,Get_From_Cin);
    cin>>Get_From_Cin_Char;
    int Char_Type = -1;
    if(Get_From_Cin_Char>='0' && Get_From_Cin_Char<='9'){
        Char_Type = NUMBER;
    }
    else if(Get_From_Cin_Char>='A' && Get_From_Cin_Char<='Z'){
        Char_Type = UPPERCASE;
    }
    else if (Get_From_Cin_Char>='a' && Get_From_Cin_Char<='z')
    {
       Char_Type = LOWERCASE;
    }


    switch(Char_Type){
        case NUMBER:
            break;
        case UPPERCASE:
            Get_From_Cin_Char = Get_From_Cin_Char +32;
            break;
        case LOWERCASE:
            break;
        default:
            break;
    }
    //转换String为小写表示
    transform(Get_From_Cin.begin(),Get_From_Cin.end(),Get_From_Cin.begin(),::tolower);
    int Get_From_Cin_Char_NUMBER = 0;
    // cout<<Get_From_Cin<<endl;
    // cout<<Get_From_Cin_Char<<endl;
    //寻找对应的字符的个数
    size_t charPos = Get_From_Cin.find(Get_From_Cin_Char,0);
    //cout<<charPos<<endl;
    while (charPos != string::npos)
    {
        //没找到一个++
        Get_From_Cin_Char_NUMBER++;
        size_t nSearchPosition = charPos + 1;
        charPos = Get_From_Cin.find(Get_From_Cin_Char,nSearchPosition);
        
    }

    

    cout<<Get_From_Cin_Char_NUMBER<<endl;
    //注意输出时候记得去掉




    return 0;
}
