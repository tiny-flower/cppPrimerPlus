//
// Created by kk on 2021/12/29.
//
#include <iostream>
int getinfo()
{
    using namespace std;
    int carrots;
    cout << "How many carrots do you have?"<< endl;
    cin >> carrots;
    cout << "Here are two more.";
    carrots += 2;
    cout << "Now You Have " << carrots << "carrots."<<endl;
    return 0;
}

