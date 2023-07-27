//HomeTask 14
#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "Задача 14.1\nМассив:\n";
	int arr[10] = {
	9, 4, 6, 8, 7, 5, 3, 5, 3, 10
	};
	int sum = 0, n = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			sum += arr[i];
			n++;
		}
		std::cout << arr[i] << " ";
	}
	std::cout << "\nСр. арифм. = " << sum / n << "\n\n";

	std::cout << "Задача 14.2\nМассив:\n";
	int x = 70;
	int y = 50;
	const int size = 10;
	int arr1[size]{};
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr1[i] = rand() % (70 - 50) + 50;
		std::cout << arr1[i] << " ";
	}
	std::cout << "\n";
	std::cout << "\nВведите число -> ";
	int N;
	std::cin >> N;
	for (int i = 0; i < size; i++)
		if (arr1[i] + 4 <= N || arr1[i] - 4 >= N)
			std::cout << "";
		else std::cout << arr1[i] << " ";
	std::cout << "\n";
	return 0;
}