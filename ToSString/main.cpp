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
template <typename T>
inline bool FromString(const string& sString, T &tX)
{
    istringstream iStream(sString);
    return (iStream >> tX) ? true : false; // extract value into tX, return success or not
}
int main()
{
    cout << "Hello world!" << endl;
    cout << Tostring(4) << endl;
    float f=FromString("4.5",f);
    cout << f << endl;
    return 0;
}
