//
// Created by kk on 2021/12/31.
//
#include <iostream>

int stonetolb(int);

int convert()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << "stone = ";
    cout << pounds << "pounds."<< endl;
    return 0;
}

int stonetolb(int sts)
{
    return 14*sts;
}
