#include "replace.hpp"

std::string replacing(std::string s1, std::string s2, std::string rawStr)
{
	int s1_len = s1.length();
	std::string result = "";
	int i = 0;
	while (i <= int(rawStr.length()) - s1_len)
	{
		std::string tmp = rawStr.substr(i, (s1_len));
		if (tmp == s1)
		{
			result.append(s2);
			i += s1.length();
		}
		else
		{
			result.append(std::string(1, (char)(rawStr[i])));
			i++;
		}
	}
	return result;
}


replace::replace(std::string s1, std::string s2, const char * filename)
{
	std::ifstream	file;
	file.open(filename);
	std::string		rawStr;
	while (!file.eof())
	{
		rawStr += file.get();
	}
	file.close();
	rawStr.resize(rawStr.size() - 1);
	std::string result = replacing(s1, s2, rawStr);
	std::string	resFilename = "";
	resFilename.append(filename);
	resFilename.append(".replace");
	std::ofstream	replFile;
	const char * clear_str = resFilename.c_str();
	replFile.open(clear_str);
	replFile << result;
	replFile.close();
}

replace::~replace()
{
}

