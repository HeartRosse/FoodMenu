#pragma once
#include <string>
using namespace std;
string product[9] = { "Пицца","Гамбургер","Картошка-Фри", "Пончик", "Шаурма", "Кока-Кола", "Пепси", "Наггетсы", "Чизбургер" };
int price[9] = { 85,50,65,40,75,55,55,60,55 };
int size_price = sizeof(price) / sizeof(price[0]);
int size_product = sizeof(product) / sizeof(product[0]);
void print_product_price() {
	for (int i = 0; i < size_price; i++) {
		cout << product[i] << " " << price[i] << " рублей." << endl;
	}
}
