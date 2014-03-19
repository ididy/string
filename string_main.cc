#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "qh_string.h"

using namespace std;
using namespace qh;

int main(int argc, char* argv[])
{
    //TODO 在这里添加单元测试，越多越好，代码路径覆盖率越全越好
    qh::string str("abc");
    cout<<str.size()<<endl;
    cout<<str.data()<<endl;
    // return 0;
    cout<<str.c_str()<<endl;
    cout<<str[1]<<endl;

    qh::string str1 = "abc";
    cout<<str.c_str()<<endl;

    qh::string str2 = str;
    cout<<str2[1]<<endl;

    char tmp[] = "abc";
    qh::string str3(tmp, 2);
    cout<<str3.size()<<endl;

    const qh::string str4 = str3;
    cout<<str.data()<<endl;

#ifdef WIN32
    system("pause");
#endif

	return 0;
}
