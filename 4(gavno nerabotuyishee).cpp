#include <iostream>
#include <iterator>
#include <vector>
#include <math.h>

using namespace std;

class tochka {
public:
	bool determenition;  // положение точки
	int* x;                // координата x
	int* y;               // координата y
	float* to_0;          // расстояние до нуля

	bool chetvert(int *x, int *y) // четверть 2 или нет?
	{
		if ((x < 0) && (y > 0))
		{
			determenition = 1;
		}
		else
		{
			determenition = 0;
		}

		return determenition;
	}

	float rasstoianie(int *x, int *y)  // нахождения расстояния до нуля
	{
		*to_0 = sqrt(x * x + y * y);
		return *to_0;
	}

	int vvod()                     // функция ввода значения координат
	{
		cin >> *x;
		cin >> *y;
		return *x, *y;
	}

	void vivod() // вывод точки
	{
		cout << "(" << x << "," << y << ")" << endl;
	}

};

int main()
{

	int n;
	cout << "Vvedite N" << endl;  // ввод количества точек
	cin >> n;

	vector<tochka> tjichka; //

	tochka max_tjichka;  //

	float* max = 0;         //

	for (int i = 0; i < n; i++)  //
	{
		tjichka[i].vvod();

		tjichka[i].chetvert(*tjichka[i].x, *tjichka[i].y);
		if (tjichka[i].determenition)  //
		{
			tjichka[i].rasstoianie(*tjichka[i].x, *tjichka[i].y);      //
			if (tjichka[i].to_0 > max)  //
			{
				*max = *tjichka[i].to_0;
				max_tjichka = tjichka[i];
			}
		}
	}

	if (max > 0)
	{
		max_tjichka.vivod();
	}
	else
	{
		cout << "(0;0)" << endl;
	}

	return 0;

}
