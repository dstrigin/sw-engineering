#include "substitution.h"
#include <string>
#include <iostream>

int main() {
	setlocale(LC_ALL, "");
	
	std::cout << "Пример из википедии\n\n";

	substitution sub1{ "А", "апельсин", false };
	substitution sub2{ "кг", "килограмм", false };
	substitution sub3{ "М", "магазинчике", false };
	substitution sub4{ "Т", "том", false };
	substitution sub5{ "магазинчике", "ларьке", true };
	substitution sub6{ "в том ларьке", "на том рынке", false };
	
	std::string s = "Я купил кг Аов в Т М.";
	std::cout << "source: " << s << "\n";
	algorithm(s, { sub1, sub2, sub3, sub4, sub5, sub6 });
	std::cout << "\n\n";

	std::cout << "Пример №1\n\n";

	substitution s1{ "b", "a", true };
	substitution s2{ "a", "b", false };

	s = "aaa";
	std::cout << "source: " << s << "\n";
	algorithm(s, { s1, s2 });
	std::cout << "\n\n";
	
	std::cout << "Пример №2\n\n";

	substitution subs1{ "ab", "", false };
	substitution subs2{ "a", "b", false };

	s = "aababab";
	std::cout << "source: " << s << "\n";
	algorithm(s, { subs1, subs2 });
	std::cout << "\n";
}
