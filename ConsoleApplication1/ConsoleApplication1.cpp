#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string choice;
    int sum,count;
    cout << "����� ����������" << endl;
    choice = "0";
    sum = 0;
    count = 0;
    cout << "�������� ���� �� �������: \n1.����� \n2.��������� \n3.�������� - ��� \n4.������ \n5.������\n6.���� - ����\n7.�����\n8.��������\n9.���������\n0.�����" << endl;
    for (int loop = 0; ; loop++)
    {
        cout << "\n";
        getline(cin, choice);
        if (choice == "1") {
            cout << "\n";
            cout << "�� ������� �����\n";
            sum += 85;
            count++;
        }
        if (choice == "2") {
            cout << "\n";
            cout << "�� ������� ���������\n";
            sum += 50;
            count++;
        }
        if (choice == "3") {
            cout << "\n";
            cout << "�� ������� ��������-���\n";
            sum += 65;
            count++;
        }
        if (choice == "4") {
            cout << "\n";
            cout << "�� ������� ������\n";
            sum += 40;
            count++;
        }
        if (choice == "5") {
            cout << "\n";
            cout << "�� ������� ������\n";
            sum += 75;
            count++;
        }
        if (choice == "6") {
            cout << "\n";
            cout << "�� ������� ����-����\n";
            sum += 55;
            count++;
        }
        if (choice == "7") {
            cout << "\n";
            cout << "�� ������� �����\n";
            sum += 55;
            count++;
        }
        if (choice == "8") {
            cout << "\n";
            cout << "�� ������� ��������\n";
            sum += 60;
            count++;
        }
        if (choice == "9") {
            cout << "\n";
            cout << "�� ������� ���������\n";
            sum += 55;
            count++;
        }
        if (choice == "0") {
            break;
        }
    }
    cout << "���� ��������� ����: " << sum<< " ������." << endl;
    cout << "�� �����: " << count << " ����(�)."<<endl;
    return 0;

}
