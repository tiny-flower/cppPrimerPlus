//
// Created by kk on 2021/12/31.
//
#include <iostream>

using namespace std;


void  ex1()
{
    cout<<"Name: "<<"Xin Xiao"<<endl;
    cout<<"Address: "<<"Beijing"<<endl;
}

void ex2()
{
    //输入long 输出码=220*long
    int incomeLong;
    cout << "请输入一个long为单位的距离" <<endl;
    cin >> incomeLong;
    cout << "为： " << incomeLong*220 <<"码"<<endl;
}

void out1()
{
    cout << "Three blind mice. " <<endl;
}
void out2()
{
    cout << "see how they run. "<<endl;
}
void ex3()
{
    out1();
    out1();
    out2();
    out2();

}

void ex4()
{
    //用户输入年龄，显示该年龄包含的月数
    int ages;
    cout<<"Please enter your ages: ";
    cin >> ages;
    cout << "Your months are: "<<ages*12<<endl;
}

void ex5()
{
    //用户输入摄氏温度，返回华氏温度
    float sheshidu;
    cout<<"Please enter a celsius value: ";
    cin>>sheshidu;
    cout<<sheshidu<<"degrees Celesius is "<<1.8*sheshidu+32<<" degrees Farenheit"<<endl;

}

void ex6()
{
    //用户输入光年值 输出距离
    float distance;
    cout<<"Enter the numbers of light years: ";
    cin >> distance;
    cout <<distance<<"light years = "<<distance*63240<<" astronomical units"<<endl;
}

void ex7()
{
    int hours;
    int minnutes;
    cout<<"Enter the number of hours: ";
    cin >>hours;
    cout<<"Enter the number of minutes: ";
    cin >>minnutes;
    cout<<"Time: "<<hours<<":"<<minnutes<<endl;
}

