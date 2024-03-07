#include <iostream>
using namespace std;

int arr[20];
int n;

void input()
{
    while (true) 
    {
        cout << "masukan banyaknya element pada array : " << endl;
        cin >> n;
        if (n <= 20)
            break;
        else 
        {
            cout << "array dapat mempunyai maksimal 20 element" << endl;

        }
    }
    cout << endl;
    cout << "=========================" << endl;
    cout << "masukan element array" << endl;
    cout << "=========================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + i) << "; ";
        cin >> arr[i];
    }
}

void bubblesortarray() //prosedur untuk mengurutkan array dengan 
{
    int pass = 1; //step 1
    do
    {
        for (int j = 0; j <= n - 1 - pass; j++) //step 2
        {
            if (arr[j] > arr[j + 1]) //step 3
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1; //step 4
    } 
    while (pass < - 1); //step 5
}


void display()
{
    cout << endl;
    cout << "=========================" << endl;
    cout << "element array telah tersusun" << endl;
    cout << "=========================" << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << endl; // output setiap element pada garis baru
    }
    cout << "jumlah pass = " << n - 1 << endl; // menampilkan total
    cout << endl;
}

int main()
{
    std::cout << "Hello World!\n";
}

