

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << showpos << setw(15) << 4 << endl;
    cout << setw(15) << fixed << setprecision(7) << internal << 62.095323 << endl;
    cout << showpos << setw(15) << right << 25 << endl;
    cout << hex << 2209 << dex << endl;
    cout << setprecision(3) << internal << -11.0 << endl;
    cout << 4 << endl;
    
    return 0;
    

}
    