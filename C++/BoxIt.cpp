#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Box
{
protected:
    int l, b, h;

public:
    Box()
    {
        this->l = 0;
        this->b = 0;
        this->h = 0;
    }
    Box(int length, int breadth, int height)
    {
        this->l = length;
        this->b = breadth;
        this->h = height;
    }
    Box(Box &B)
    {
        this->l = B.l;
        this->b = B.b;
        this->h = B.h;
    }
    int getLength() const
    {
        cout << l << " ";
        return l;
    }
    int getBreadth() const
    {
        cout << b << " ";
        return b;
    }
    int getheight() const
    {
        cout << h << endl;
        return h;
    }
    long long CalculateVolume()
    {
        long long v = (long long)(l) * (long long)(b) * (long long)(h);

        return v;
    }
    bool operator<(const Box &b2)
    {
        if (l < b2.l || (b < b2.b && l == b2.l) || (h < b2.h && b == b2.b && l == b2.l))
        {
            return true;
        }

        return false;
    }
    friend ostream &operator<<(ostream &os, const Box &B);
};
ostream &operator<<(ostream &os, const Box &B)
{
    os << B.l << " " << B.b << " " << B.h << endl;
    return os;
}
void check2()
{
    int n;
    cin >> n;
    Box bx;
    for (int i = 0; i < n; i++)
    {
        int o;
        cin >> o;
        if (o == 1)
        {
            cout << bx;
        }
        if (o == 2)
        {
            int n, l, b, h;
            cin >> l >> b >> h;
            Box b1(l, b, h);
            bx = b1;
            b1.getLength();
            b1.getBreadth();
            b1.getheight();
        }
        if (o == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box b1(l, b, h);
            if (b1 < bx)
            {
                cout << "LESSER" << endl;
            }
            else
            {
                cout << "GREATER" << endl;
            }
        }
        if (o == 4)
        {

            Box b1 = bx;
            long long v = b1.CalculateVolume();
            cout << v << endl;
        }
        if (o == 5)
        {
            cout << bx;
        }
    }
}
int main()
{
    check2();
    return 0;
}
