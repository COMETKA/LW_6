

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << showpos << setw(15) << 6 << endl;
    cout << setw(15) << fixed << setprecision(7) << internal << 62.032343 << endl;
    cout << showpos << setw(10) << right << 11 << endl;
    cout << hex << 3409 << dex << endl;
    cout << setprecision(3) << internal << -11.0000 << endl;
    cout << 6 << endl;
    
    return 0;
    

}
    