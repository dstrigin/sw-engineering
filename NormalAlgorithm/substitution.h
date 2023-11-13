#pragma once

#include <string>
#include <vector>
#include <iostream>

struct substitution {
	
	// искомая подстрока
	std::string search;
	
	// подстановка вместо искомой подстроки
	std::string put;
	
	// флаг заключительности
	bool flag;
	
	// конструктор объекта
	substitution(std::string s, std::string p, bool flag);
};

bool substitute(std::string& str, substitution subst);

void algorithm(std::string& str, std::vector<substitution> scheme);
