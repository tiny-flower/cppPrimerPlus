#include <iostream>
#include <cmath>

#define eps 0.0001
int ch2sqrt()
{
    using namespace std;
    double area;
    cout << "Enter the floor area, in square feet, of your home:";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << "feet to the side. " << endl;
    cout << "How fascinating!";
    return 0;
}

float sqrtByBisection(float n)
{
    if(n < 0)
        return n;
    float mid,last;
    float low,up;
    low = 0, up = n;
    mid =(low+up)/2;
    do {
        if(mid*mid>n)
            up = mid;
        else
            low = mid;
        last = mid;
        mid = (up+low)/2;
    }
    while (abs(mid-last) > eps);
    return mid;
}
float sqrtByNewton(float x)
{
    float val = x;
    float last;
    do {
        last = val;
        val = (val + x/val)/2;
    } while (abs(val-last)>eps);
    return val;
}
float invSqrt(float x)
{
    float xhalf = 0.5f*x;
    long i = *(long*)&x;
    i = 0x5f375a86 - (i >> 1);
    x = *(float *)&i;
    x = (1.5f -xhalf*x*x);
    x = (1.5f -xhalf*x*x);
    x = (1.5f -xhalf*x*x);

    return x;
}