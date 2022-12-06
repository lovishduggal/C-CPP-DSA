#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
	private:
	int hr;
	int min;
	int sec;
    public:
	void setData(int x, int y, int z)
	{
		hr = x;
		min = y;
		sec = z;
	}
	void showData()
	{
		cout <<"The Time is " << setw(2) << setfill('0') << hr << ":" << setw(2) << setfill('0') << min << ":" << setw(2) << setfill('0') << sec << endl;
	}
};

int main()
{
	Time time_1;
	time_1.setData(10, 50, 20);
	time_1.showData();
	return 0;
}
