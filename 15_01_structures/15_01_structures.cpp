#include <iostream>
using namespace std;

struct Date
{
    int day, 
        month, 
        year;
    char mouth_name[15];
};
struct Worker {
    char name[20];
    char surname[20];
    char position[20];
    double salary;
    Date Birthdate;
    Date hiredate;
};
void InputWorker(Worker worker) {
    cout << "Enter name: "; cin >> worker.name;
    cout << "Enter surname: "; cin >> worker.surname;
    cout << "Enter position: "; cin >> worker.position;
    cout << "Enter salary: "; cin >> worker.salary;

    cout << "Birthdate day: "; cin >> worker.Birthdate.day;
    cout << "Birthdate month: "; cin >> worker.Birthdate.month;
    cout << "Birthdate year: "; cin >> worker.Birthdate.year;

    cout << "Hiredate day: "; cin >> worker.hiredate.day;
    cout << "Hiredate month: "; cin >> worker.hiredate.month;
    cout << "Hiredate year: "; cin >> worker.hiredate.year;
}






int main()
{
    int num = 100;
    Date Birthdate = { 25, 12, 2000, "December" };
    cout << "Hello World!\n";
    cout << "Day: " << Birthdate.day << endl;
    cout << "Month: " << Birthdate.month << endl;
    cout << "Year: " << Birthdate.year << endl;
    cout << "Mouth name: " << Birthdate.mouth_name << endl;

    cout << "Friend birthday";
    Date FriendBirth;
    cout << "Enter day: "; cin >> FriendBirth.day;
    cout << "Enter Month: "; cin >> FriendBirth.month;
    cout << "Enter Year: "; cin >> FriendBirth.year;
    cout << "Enter Mouth name: "; cin >> FriendBirth.mouth_name;
















}
