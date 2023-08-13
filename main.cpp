#include <iostream>
#include <string>
#include <bits/stdc++.h>


int main() {
	
	std::map<std::string, std::string> countries;

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
	}
	return 0;
}