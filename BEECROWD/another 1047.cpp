#include <iostream>
using namespace std;

int main() {
    int start_h, start_m, end_h, end_m;
    cin >> start_h >> start_m >> end_h >> end_m;

    int total_minutes = 0;

    if (end_h > start_h || (end_h == start_h && end_m >= start_m)) {
        // Same day
        total_minutes = (end_h - start_h) * 60 + (end_m - start_m);
    } else {
        // Different day
        total_minutes = (24 - start_h + end_h) * 60 + (end_m - start_m);
    }

    int hours = total_minutes / 60;
    int minutes = total_minutes % 60;

    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;

    return 0;
}

