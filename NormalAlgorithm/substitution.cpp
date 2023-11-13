#include "substitution.h"

substitution::substitution(std::string s, std::string p, bool flag)
{
	this->search = s;
	this->put = p;
	this->flag = flag;
}

bool substitute(std::string& str, substitution subst)
{
	size_t pos = str.find(subst.search);
	if (pos != std::string::npos)
	{
		str.replace(pos, subst.search.length(), subst.put);
		return true;
	}
	return false;
}

void algorithm(std::string& str, std::vector<substitution> scheme)
{
	while (true)
	{
		std::string start = str;
		for (auto sub : scheme)
		{
			if (substitute(str, sub))
			{
				std::cout << str << "\n";
				if (sub.flag) return;
				break;
			}
		}
		if (str == start) return;
	}
}
