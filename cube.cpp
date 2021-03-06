﻿
#include <iostream>
#include <string>
#include <map>
using namespace std;

	
	
void turnRight(std::map<string, char> &coube) {
	char  a, b, c, d , e , f ,g ,h;
	a = coube["000"];
	b = coube["100"];
	c = coube["110"];
	d = coube["010"];
	e = coube["001"];
	f = coube["101"];
	g = coube["111"];
	h = coube["011"];

	coube["000"] = e;
	coube["100"] = a;
	coube["110"] = d;
	coube["010"] = h;
	coube["001"] = f;
	coube["101"] = b;
	coube["111"] = c;
	coube["011"] = g;
}

void turnLeft(std::map<string, char> &coube) {
	char  a, b, c, d, e, f, g, h;
	a = coube["000"];
	b = coube["100"];
	c = coube["110"];
	d = coube["010"];
	e = coube["001"];
	f = coube["101"];
	g = coube["111"];
	h = coube["011"];

	coube["000"] = b;
	coube["100"] = f;
	coube["110"] = g;
	coube["010"] = c;
	coube["001"] = a;
	coube["101"] = e;
	coube["111"] = h;
	coube["011"] = d;
}
void turnUp(std::map<string, char> &coube) {
	char  a, b, c, d, e, f, g, h;
	a = coube["000"];
	b = coube["100"];
	c = coube["110"];
	d = coube["010"];
	e = coube["001"];
	f = coube["101"];
	g = coube["111"];
	h = coube["011"];

	coube["000"] = e;
	coube["100"] = f;
	coube["110"] = b;
	coube["010"] = a;
	coube["001"] = h;
	coube["101"] = g;
	coube["111"] = c;
	coube["011"] = d;
}
void turnDown(std::map<string, char> &coube) {
	char  a, b, c, d, e, f, g, h;
	a = coube["000"];
	b = coube["100"];
	c = coube["110"];
	d = coube["010"];
	e = coube["001"];
	f = coube["101"];
	g = coube["111"];
	h = coube["011"];

	coube["000"] = d;
	coube["100"] = c;
	coube["110"] = g;
	coube["010"] = h;
	coube["001"] = a;
	coube["101"] = b;
	coube["111"] = f;
	coube["011"] = e;
}

void print(std::map<string, char> &coube) {

	cout << coube["000"]<< coube["100"]<< coube["110"] << coube["010"] << coube["001"] << coube["101"] << coube["111"] << coube["011"] << endl;
}

int main() {
	string bar = "liverpol";
	std::map<string, char> coube;
	coube["000"] = bar[0];
	coube["100"] = bar[1];
	coube["110"] = bar[2];
	coube["010"] = bar[3];
	coube["001"] = bar[4];
	coube["101"] = bar[5];
	coube["111"] = bar[6];
	coube["011"] = bar[7];

	turnRight(coube);
	turnLeft(coube);
	turnUp(coube);
	turnDown(coube);
	print(coube);
}



