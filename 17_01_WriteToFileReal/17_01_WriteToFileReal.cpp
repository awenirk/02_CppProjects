#include <iostream>
#include <fstream>
using namespace std;
const char* file = "MyHumanBase.txt";
struct Human {
private:
    char name[50];
    char surname[50];
    int age;
public:
    void Show() {
        cout << " Name: " << name << endl << " Surname: " << surname << endl << " Age: " << age << endl;;
    }
    void Fill() {
        cout << "Enter name: "; cin >> name;
        cout << "Enter surname: "; cin >> surname;
        cout << "Enter age: "; cin >> age;
    }
    void copy(Human h) {
        strcpy_s(name, h.name);
        strcpy_s(surname, h.surname);
        age = h.age;
    }
    void SaveToFile() {
        ofstream out(file, ios_base::app);
        out << name;
        out << ": ";
        out << surname;
        out << ": ";
        out << age;
        out << "| ";
        out.close();
    }
    void FillFromFile(char* nameF, char* surnameF, int ageF) {
        strcpy_s(name, nameF);
        strcpy_s(surname, surnameF);
        age = ageF;
    }
};
int menu() {
    int choice;
    cout << "--------- Menu ---------" << endl;
    cout << "1. Add new person" << endl;
    cout << "2. Show All persons" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice: "; cin >> choice;
    return choice;
}
}
enum MENU { EXIT, ADD = 1, SHOW };

void addNewHuman(Human*& arr, int &size) {
    Human* temp = new Human[size + 1];
    for (int i = 0; i < size; i++) {
        temp[i].copy(arr[i]);
    }
    temp[size].Fill();
    delete[] arr;
    arr = temp;
    size++;
    arr[size - 1].SaveToFile();
}
void showPeople(Human* h, int size) {
    for (int i = 0; i < size; i++) {
        h[i].Show();
    }
    cout << endl;
}

void ReadFromFile(Human*& arr, int& size) {
    ifstream in(file, ios_base::in);
    char buf_name[250], buf_surname[250], buf_age[250];
    while (!in.eof()) {
        in.getline(buf_name, 250,  ':');
        if (in.eof()) break;
        in.getline(buf_surname, 250,  ':');
        in.getline(buf_age, 250,  '|');
        int age = atoi(buf_age);
        Human readHuman;
        readHuman.FillFromFile(buf_name, buf_surname, age );

        Human* temp = new Human[size + 1];
        for (int i = 0; i < size; i++) {
            temp[i].copy(arr[i]);
        }
        temp[size] = readHuman;
        delete[] arr;
        arr = temp;
        size++;
    }
}



int main()
{
    /*
    
    ofstream out("test.txt", ios_base::out); // save to file
    if (out.is_open()) {
        out << "Hello World!" << endl;
        out << "Hello World!" << endl;
        out << "Hello World!" << endl;
        out << "Hello World!" << endl;

    }
    else cout << "Error!" << endl;
    out.close();
    

    // ifstream in; // read from file
    // in.open("test.txt", ios_base::in);
    char buf[50];

    ifstream in("test.txt", ios_base::in);
    if (in.is_open()) {
        // in >> buf;
        // in.getline(buf, 50);
        // cout << buf << endl;
        while (!in.eof()) {
            in.getline(buf, 50);
            cout << buf << endl;
        }


    }
    else cout << "File not exist!" << endl;

    in.close();
    */
    // Human human{};
    // human.Fill();
    // human.Show();
    // cout << endl << endl;

    int size = 0;
    Human* people = new Human[size];

    ReadFromFile(people, size);

    bool isExit = false;
    while (!isExit) {
        switch (menu())
        {
        case EXIT:
            cout << "Have a good day!" << endl;
            isExit = true;
            break;
        case ADD:
            addNewHuman(people, size);
            break;
        case SHOW:
            showPeople(people, size);
            break;
        default:
            break;
        }
    }


    delete[] people;






}