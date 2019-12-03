#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
ios_base :: fmtflags flags = cout.flags();
    cout << setw(0) << "0x" << hex << nouppercase <<right <<  (long long) A  << endl;
    cout.flags(flags);
    cout << setw(15) << setfill('_') << setprecision(2) << fixed << showpos <<right << B << endl;
    cout.flags(flags);
    cout << setw(15) << uppercase << noshowpos << scientific << setprecision(9)<< right << C << endl;
    cout.flags(flags);
	}
	return 0;

}