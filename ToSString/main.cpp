#include <iostream>
#include <string>
#include <sstream>
using namespace std;

template <typename T>
inline string Tostring(T tx)
{
    ostringstream ostreamx;
    ostreamx << tx;
    return ostreamx.str();
}

int main()
{
    cout << "Hello world!" << endl;
    cout << Tostring(4);
    return 0;
}
