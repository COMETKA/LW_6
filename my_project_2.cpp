

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << showpos << setw(10) << 4 << endl;
    cout << setw(10) << fixed << setprecision(7) << internal << 62.0323 << endl;
    cout << showpos << setw(15) << right << 13 << endl;
    cout << hex << 3309 << dex << endl;
    cout << setprecision(3) << internal << -11.00 << endl;
    cout << 4 << endl;
    
    return 0;
    

}
    