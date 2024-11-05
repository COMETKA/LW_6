

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << showpos << setw(20) << 4 << endl;
    cout << setw(20) << fixed << setprecision(4) << internal << 62.09 << endl;
    cout << showpos << setw(20) << right << -14 << endl;
    cout << hex << 2209 << endl;
    cout << setprecision(3) << -11.0 << endl;
    cout << 4 << endl;
    
    return 0;
    

}
    