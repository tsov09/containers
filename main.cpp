#include <iostream>
#include <string>
#include <bits/stdc++.h>


class A {
public:
	int a;
	char b;
	A(int x, char y) : a(x), b(y) {};

	bool operator==(const A& obj) const {
		if (a == obj.a && b == obj.b) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator>(const A& obj) const {
		if (a > obj.a) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator<(const A& obj) const {
		if (a < obj.a) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main() {
	
	/*std::map<std::string, std::string> countries;

	countries.insert(std::make_pair("Armenia", "Yerevan"));
	countries.insert(std::make_pair("Greece", "Athens"));
	countries.insert(std::make_pair("Germany", "Berlin"));
	countries.insert(std::make_pair("France", "Paris"));
	countries.insert(std::make_pair("China", "Beijing"));
	countries.insert(std::make_pair("Russia", "Moscow"));
	countries.insert(std::make_pair("Australia", "Canberra"));

	for (auto elem : countries)
	{
		std::cout << elem.first << " " << elem.second << " " << std::endl;
	}*/

	std::map<A, int> map_a;
	map_a.insert(std::make_pair(A (7, 'f'), 1));
	map_a.insert(std::make_pair(A (1, 'a'), 2));
	map_a.insert(std::make_pair(A (6, 'n'), 3));
	map_a.insert(std::make_pair(A (9, 'l'), 4));
	map_a.insert(std::make_pair(A (3, 'r'), 5));
	for (auto it: map_a) {
		std::cout << it.first.a << ", " << it.first.b << std::endl;
	}

	return 0;
}