// Author -- Taraas
// Created at July, 20 on Eee PC 1015 on Ubuntu Linux
// Path direcory: /usr/include/c++/

//Special commands for compiler


//Basic include
#include <cstdio>
#include <iostream>
#include <fstream>
#include <clocale>
#include <ctime>

//Math include
#include <algorithm>
#include <cmath>

//STL Data structures
#include <vector>
#include <queue>
#include <map>
#include <deque>
#include <stack>
#include <set>
#include <iterator>

//Data Structures
#include <cstring>
#include <string>
#include <sstream>

//Global variables
using namespace std;

void Swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort (std::vector<int> &array)
{
  for (int i = 0; i < array.size(); i++)
    {
        for(int j = 0; j < array.size() - 1; j++)
        {   
            if (array[j] > array[j+1]) Swap(&array[j], &array[j+1]);
        }
    }
}

int main()
{
int mas[10];
srand(time(NULL));
vector<int> vec;
cout<< "1. Automatically." << endl;
cout<< "2. By hands." <<endl;
cout<< "------------------" << endl;
cout<< "Your answer: ";
int ch;
cin>> ch;
cout<<endl;
if (ch == 2)
{
	for (size_t i = 0; i<9; i++)
	{
		cout<< "Enter element number "<<i<<" : ";
		cin>> mas[i];
		cout<<endl;
		vec.push_back(mas[i]);
	}
}
if (ch == 1)
{
	for (size_t i = 0; i<10; i++)
	{
		int a =rand() % 40;
		mas[i]= a;
		vec.push_back(mas[i]);
	}
};
	cout<<endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	cout<<"Mas:"<<endl;
	for (size_t i=0; i<10; i++)
		cout << mas[i]<<"  ";
	cout<<endl<<endl<<"Vector"<<endl;
	for (size_t i=0; i<10; i++)
		cout << vec[i]<<"  ";
	cout<<endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl<<endl;	
cout<<"After sort:"<<endl;
int temp;
for (int i = 0; i < 9; i++) 
{ for (int j = 0; j < 10 - i - 1; j++) 
	{if (mas[j] > mas[j + 1]) 
		{
          temp = mas[j];
          mas[j] = mas[j + 1];
          mas[j + 1] = temp;
        }
     }
};
BubbleSort(vec);
cout<<endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	cout<<"Mas:"<<endl;
	for (size_t i=0; i<10; i++)
		cout << mas[i]<<"  ";
	cout<<endl<<endl<<"Vector:"<<endl;
	for (size_t i=0; i<10; i++)
		cout << vec[i]<<"  ";
	cout<<endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl<<endl;		
return 0;
}
