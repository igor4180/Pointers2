#include<iostream>
using namespace std;

#define tab "\t"
//#define even odd

void main()
{
	setlocale(LC_ALL, "");
	int n = 5;
	cout << "Введите размер массива:"; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
			cout << arr[i] << tab;
	}cout << endl;

    
#define even odd
    int even = 0, odd = 0; 

    for (int i = 0; i <= n - 1; i++)
    {
        arr[i] = 1 + rand() % 99; 

        if (arr[i] % 2 == 0) 
            even++;
        if (arr[i] % 2 != 0)  
            odd++;
    }
    cout << " Четных элементов: " << even << endl;
    cout << " Нечетных элементов: " << odd << endl;
    

    int* Even_arr = new int[even]; 
    int* Odd_arr = new int[odd];   

    int Counter_even = 0, Counter_odd = 0;

    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] % 2 == 0) 
        {
            Even_arr[Counter_even] = arr[i];
            Counter_even++;
        }

        if (arr[i] % 2 != 0) 
        {
            Odd_arr[Counter_odd] = arr[i];
            Counter_odd++;
        }
    }
#endif

    bool Print_array = false;
    cout << " Вывести на экран массив с четными элементами? 0 - нет | 1 - да : ";
    cin >> Print_array;

    if (Print_array == true)
    {
        for (int i = 0; i <= Counter_even - 1; i++)
        {
            cout << i << " элемент четного массива = " << Even_arr[i] << endl;
        }
        Print_array = false;
    }

    system("pause");
    system("cls");

    cout << " Вывести на экран массив с нечетными элементами? 0 - нет | 1 - да : ";
    cin >> Print_array;

    if (Print_array == true)
    {
        for (int i = 0; i <= Counter_odd - 1; i++)
        {
            cout << i << " элемент нечетного массива = " << Odd_arr[i] << endl;
        }
        Print_array = false;
    }
    
           
}