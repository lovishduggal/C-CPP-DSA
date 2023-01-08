// There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
// girls received grades "A" if 17 boys made up 80% of the students that received grades "A".
#include <iostream>
using namespace std;
int main()
{
    int boys = 17, GradeAStu, girls;
    GradeAStu = (45 * 80) / 100;
    girls = GradeAStu - boys;
    cout << "Girls having Grade A : " << girls;
    return 0;
}