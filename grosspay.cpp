#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int employee_no[4] = {101, 102, 103, 104};
    float hours[4] = {40, 42, 35, 30};
    float rate[4] = {15, 15, 12.50, 12.50};
    float grosspay[4];

    cout << " ___________________________________________" << endl;
    cout << "|Employee No \t Hours Worked \t Hourly Rate|" << endl;

    for(int i = 0; i < 4; i++){
        cout << "|" << setw(5) << employee_no[i] << setw(18) << fixed << setprecision(2) << hours[i] << setw(16) << rate[i] << setw(5) << "|" << endl;
    }
    cout << endl;
    for (int a = 0; a < 4; a++){
        grosspay[a] = hours[a] * rate[a];
        cout << "Employee " << employee_no[a] << " has a gross pay of " << grosspay[a] <<  endl;
    }
    return 0;
}
