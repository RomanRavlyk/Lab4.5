#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		double x, y, R;
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		if (y >= 0 && x <= 0 && (x + R) * (x + R) + (y - R) * (y - R) >= R * R
			&& y <= 0 && x >= 0 && (x - R) * (x - R) + (y + R) * (y + R) >= R * R
			&& x >= 0 && x <= R && y >= 0 && y <= R
			&& x <= 0 && x >= -R && y <= 0 && y >= -R)
		{
			cout << "yes" << endl;
		}
		else cout << "no" << endl;
		cout << endl << fixed;
	}

	for (int j = 0; j < 10; j++) {
		double x, y, R;
		R = abs((4.0 * rand() / RAND_MAX) - 2.0);
		x = (4.0 * R * rand() / RAND_MAX) - (2.0 * R);
		y = (4.0 * R * rand() / RAND_MAX) - (2.0 * R);

		cout << "R = " << setprecision(4) << fixed << R;
		cout << ", x = " << setprecision(4) << fixed << x;
		cout << ", y = " << setprecision(4) << fixed << y;

		if ((x >= -2.0 * R) && (x <= 2.0 * R) && (y >= -2.0 * R) && (y <= 2.0 * R)) {
			if (y >= 0 && x <= 0 && (x + R) * (x + R) + (y - R) * (y - R) >= R * R
				&& y <= 0 && x >= 0 && (x - R) * (x - R) + (y + R) * (y + R) >= R * R
				&& x >= 0 && x <= R && y >= 0 && y <= R
				&& x <= 0 && x >= -R && y <= 0 && y >= -R)
			{
				cout << " yes" << endl;
			}
			else cout << " no" << endl;
		}
	}
	return 0;
}
