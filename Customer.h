#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

class Customer : public Person {
private:
    string address;
    string phone;      

public:
    Customer() : Person(), address(""), phone("") {}

    void input() override {
        Person::input();
        cout << "Nhap dia chi: "; getline(cin, address);
        cout << "Nhap so dien thoai: "; getline(cin, phone);
    }

    void display() const override {
        cout << "Khach hang:\n";
        Person::display();
        cout << ", Dia chi: " << address << ", SDT: " << phone << endl;
    }

    friend ostream& operator<<(ostream& os, const Customer& c) {
        c.display();
        return os;
    }
};

#endif
