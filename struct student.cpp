#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;


struct Student {
	int age;
	char average;
	string name;
	string univercity_name;

};

void show(Student array_students[], int size, string name);



int main() {
	int qanakstudent;
	cout << "qani usanox eq uzum avelacnel" << endl;
	cin >> qanakstudent;
	Student* array_students = new Student[qanakstudent];
	for (int i = 0; i < qanakstudent; i++) {
		Student studentss;
		cout << "greq anun@ , tariq@, mijin gnahatakan@ , buh@ " << endl;
		cin >> studentss.name >> studentss.age >> studentss.average >> studentss.univercity_name;
		array_students[i] = studentss;
	}
	cout << "um eq uzum" << endl;
	string namewant;
	cin >> namewant;

	show(array_students, qanakstudent, namewant);



};

void show(Student array_students[], int size, string name) {
	bool a = false;
	for (int i = 0; i < size; i++) {

		if (array_students[i].name == name) {
			cout << i + 1 << "- erord usaonoxi annun e: " << array_students[i].name << " tariqn e" << array_students[i].age << " mijin gnahatakany " << array_students[i].average << endl;
			a = true;
		}
		if (!a) {
			cout << "chka";
		}
	}
}