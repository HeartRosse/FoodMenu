#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string choice;
    int sum,count;
    cout << "Добро пожаловать" << endl;
    choice = "0";
    sum = 0;
    count = 0;
    cout << "Выберите один из пунктов: \n1.Пицца \n2.Гамбургер \n3.Картошка - Фри \n4.Пончик \n5.Шаурма\n6.Кока - Кола\n7.Пепси\n8.Наггетсы\n9.Чизбургер\n0.Выход" << endl;
    for (int loop = 0; ; loop++)
    {
        cout << "\n";
        getline(cin, choice);
        if (choice == "1") {
            cout << "\n";
            cout << "Вы выбрали пиццу\n";
            sum += 85;
            count++;
        }
        if (choice == "2") {
            cout << "\n";
            cout << "Вы выбрали гамбургер\n";
            sum += 50;
            count++;
        }
        if (choice == "3") {
            cout << "\n";
            cout << "Вы выбрали картошку-фру\n";
            sum += 65;
            count++;
        }
        if (choice == "4") {
            cout << "\n";
            cout << "Вы выбрали пончик\n";
            sum += 40;
            count++;
        }
        if (choice == "5") {
            cout << "\n";
            cout << "Вы выбрали шаурму\n";
            sum += 75;
            count++;
        }
        if (choice == "6") {
            cout << "\n";
            cout << "Вы выбрали кока-колу\n";
            sum += 55;
            count++;
        }
        if (choice == "7") {
            cout << "\n";
            cout << "Вы выбрали пепси\n";
            sum += 55;
            count++;
        }
        if (choice == "8") {
            cout << "\n";
            cout << "Вы выбрали наггетсы\n";
            sum += 60;
            count++;
        }
        if (choice == "9") {
            cout << "\n";
            cout << "Вы выбрали чизбургер\n";
            sum += 55;
            count++;
        }
        if (choice == "0") {
            break;
        }
    }
    cout << "Ваша финальная цена: " << sum<< " рублей." << endl;
    cout << "Вы взяли: " << count << " блюд(а)."<<endl;
    return 0;

}
