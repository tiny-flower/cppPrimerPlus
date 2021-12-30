//
// Created by kk on 2021/12/30.
//
#include <iostream>

void simon(int);

int outfunc()
{
    using namespace std;
    simon(3);
    cout << "Pick an interger.";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!. ";
    return 0;
}
void simon(int n)
{
    using namespace std;
    cout << "Simon says touch your toes " << n << "times" <<endl;
}
