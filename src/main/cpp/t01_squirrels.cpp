//Белочки и орешки - 1
//
//N белочек нашли K орешков и решили разделить их поровну. Определите, сколько орешков достанется каждой белочке.
//
//Формат входных данных
//
//        На вход дается два целых положительных числа N и K, каждое из которых не превышает 10000.
//
//Формат выходных данных
//
//        Выведите одно целое число - ответ на задачу.
//
//Sample Input:
//
//3
//14
//Sample Output:
//
//4

#include "t01_squirrels.h"
#include <iostream>

using namespace std;

int t01_squirrels() {
  int squirrels;
	int nuts;
	cin >> squirrels >> nuts;
	int res = nuts / squirrels;
	cout << res;
	return 0;
};
