// Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.
#include<iostream>
using namespace std;
class larNum
{
    private:
        int Num_1;
        int Num_2;
        int Num_3;
        int largestNum;
    public:
        void setNum_1(int x)
        {
            Num_1 = x;
        }
        void setNum_2(int y)
        {
            Num_2 = y;
        }
        void setNum_3(int z)
        {
            Num_3 = z;
        }
        int getNum_1()
        {
            return Num_1;
        }
        int getNum_2()
        {
            return Num_2;
        }
        int getNum_3()
        {
            return Num_3;
        }
        void calc()
        {
            int comp_1;
            comp_1 = Num_1 > Num_2 ? Num_1 : Num_2;
            largestNum = comp_1 > Num_3 ? comp_1 : Num_3;
        }
        int getLargestNum()
        {
            return largestNum;
        }
};

int main()
{
    larNum l_1;
    l_1.setNum_1(141);
    l_1.setNum_2(223);
    l_1.setNum_3(353);
    l_1.calc();
    cout << "The largest Num is " << l_1.getLargestNum();
    return 0;
}