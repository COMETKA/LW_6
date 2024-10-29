

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << showpos << setw(9) << 1 << endl;
    cout << setw(15) << fixed << setprecision(3) << internal << -67.09124 << endl;
    cout << showpos << setw(9) << right << 23 << endl;
    cout << hex << 2209 << dec << endl;
    cout << fixed << setprecision(2) << -11.0 << endl;
    cout << 1 << endl;
    
    return 0;
    

}
    