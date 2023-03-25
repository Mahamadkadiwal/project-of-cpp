#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

using namespace std;

class BCA {
    int rollno;
    char name[30];
    float age;
    char address[40];
public: 
    void getdata(void);
    void putdata(void);
};

void BCA::getdata(void) {
    cout << "Enter the Rollno: " << endl;
    cin >> rollno;
    cout << "Enter the name: " << endl;
    cin >> name;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Enter the address: " << endl;
    cin >> address;
}

void BCA::putdata(void) {
    cout << "Roll no: " << rollno << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
}

int main() {
    int size;
    cout << "Enter the size of student: " << endl;
    cin >> size;

    BCA student[size];
    
    for(int i=0; i<size; i++) {
        cout << endl << "Details of Student " << i+1 << ":" << endl;
        student[i].getdata();
    }

    cout << endl;
    for(int i=0; i<size; i++) {
        cout << endl << "Student " << i+1 << ":" << endl;
        student[i].putdata();
    }

    getch();
    return 0;
}
