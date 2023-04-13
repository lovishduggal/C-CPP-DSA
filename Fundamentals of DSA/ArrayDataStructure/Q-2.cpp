#include "Q-1.cpp"
class ExtendedArray : public Array
{
public:
    ExtendedArray(int);
    void sort();
    int greatest();
    int smallest();
    int sumOf();
    double averageOf();
    void rotate();
    void removeDuplicate();
    int secLar();
    void swapItems(int, int);
};
void ExtendedArray::swapItems(int i, int j)
{
    int temp;
    if (i >= 0 && i < count() && j < count() && j >= 0)
    {
        temp = get(i);
        edit(i, get(j));
        edit(j, temp);
    }
}
int ExtendedArray::secLar()
{
    if (isEmpty())
    {
        cout << "Array is Empty" << endl;
        return -1;
    }
    else
    {
        sort();
        int max_1 = get(0), max_2 = 0;
        for (int i = 2; i < count(); i++)
        {
            if (get(i) > max_1)
            {
                max_2 = max_1;
                max_1 = get(i);
            }
        }
        return max_2;
    }
}
void ExtendedArray::removeDuplicate()
{
    for (int i = 0; i < count(); i++)
    {
        for (int j = i + 1; j < count(); j++)
        {
            if (get(i) == get(j))
            {
                del(j);
                j--;
            }
        }
    }
}
void ExtendedArray::rotate()
{
    int temp = get(count() - 1);
    for (int i = count() - 1; i > 0; i--)
    {
        edit(i, get(i - 1));
    }
    edit(0, temp);
}
double ExtendedArray::averageOf()
{
    return sumOf() / 10;
}
int ExtendedArray::sumOf()
{
    int total = 0;
    for (int i = 0; i < count(); i++)
    {
        total += get(i);
    }
    return total;
}

int ExtendedArray::smallest()
{
    if (isEmpty())
    {
        cout << "Array is Empty!! ";
        return -1;
    }
    int min = get(0);
    for (int i = 1; i < count(); i++)
    {
        if (get(i) < min)
            min = get(i);
    }
    return min;
}
int ExtendedArray::greatest()
{
    if (isEmpty())
    {
        cout << "Array is Empty!!"
             << " ";
        return -1;
    }
    int max = get(0);
    for (int i = 1; i < count(); i++)
    {
        if (max < get(i))
        {
            max = get(i);
        }
    }
    return max;
}
void ExtendedArray::sort()
{
    if (isEmpty())
    {
        cout << "Array is Empty!!" << endl;
    }
    else
    {
        int c = 1, N = count();
        while (c != count())
        {
            for (int i = 0; i < count() - c; i++)
            {
                if (get(i) > get(i + 1))
                {
                    int temp = get(i);
                    edit(i, get(i + 1));
                    edit(i + 1, temp);
                }
            }
            c++;
        }
    }
}
ExtendedArray::ExtendedArray(int cap) : Array(cap) {}
