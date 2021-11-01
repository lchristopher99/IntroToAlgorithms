#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
long length = 10;
const long max_length = 100;
 
int list[max_length];
 
void read()
{
    ifstream fin("random.dat", ios::binary);
    for (long i = 0; i < length; i++)
    {
        fin.read((char*)&list[i], sizeof(int));
    }
    fin.close();
}
 
void insertionSort()
{
    int temp;
    for(long i = 1; i < length; i++)
    {
        temp = list[i];
        long j;
        for(j = i-1; j >= 0 && list[j] > temp; j--)
        {
            list[j+1] = list[j];
        }
        list[j+1] = temp;
    }
}
 
long partition(long left, long right)
{
    int pivot_element = list[left];
    int lb = left, ub = right;
    int temp;
 
    while (left < right)
    {
        while(list[left] <= pivot_element)
            left++;
        while(list[right] > pivot_element)
            right--;
        if (left < right)
        {
            temp        = list[left];
            list[left]  = list[right];
            list[right] = temp;
        }
    }
    list[lb] = list[right];
    list[right] = pivot_element;
    return right;
}
 
void quickSort(long left, long right)
{
    if (left < right)
    {
        long pivot = partition(left, right);
        quickSort(left, pivot-1);
        quickSort(pivot+1, right);
    }
}
 
int main()
{
    double t1, t2;
 
    for (length = 10; length <= max_length; )
    {
        cout << "\nLength\t: " << length << '\n';
 
        read();
        t1 = clock();
        insertionSort();
        t2 = clock();
        cout << "Insertion Sort\t: " << (t2 - t1)/CLK_TCK << " sec\n";
 
        read();
        t1 = clock();
        quickSort(0, length - 1);
        t2 = clock();
        cout << "Quick Sort\t: " << (t2 - t1)/CLK_TCK << " sec\n";
 
        switch (length)
        {
        case 10 :
            length = 20;
            break;
        case 20 :
            length = 30;
            break;
        case 30 :
            length = 40;
            break;
        case 40 :
            length = 50;
            break;
        case 50 :
            length = 60;
            break;
        case 60 :
            length = 70;
            break;
        case 70 :
            length = 80;
            break;
        case 80 :
            length = 90;
            break;
        case 90 :
            length = 100;
            break;
        case 100 :
            length = 101;
            break;
                
        }
    }
 
    return 0;
}
