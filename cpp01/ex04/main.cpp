#include <iostream>
#include <fstream>
#include <string>

void	my_sed(std::string & str, std::string const & old_word, std::string
const & new_word) {
	size_t		pos;
	std::string	tmp;

	if (old_word.compare(new_word) == 0)
		return ;
	while ((pos = str.find(old_word)) != std::string::npos)
	{
		tmp.clear();
		tmp.append(str, 0, pos);
		tmp += new_word;
		tmp.append(str, pos + old_word.size(), str.size() - pos - old_word
		.size());
		str.clear();
		str.assign(tmp);
	}
}

int main(int argc, char **argv) {
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		file_name;
	std::string		str;

	if (argc != 4)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	if (!argv[2][0] || !argv[3][0])
	{
		std::cerr << "Error: empty string" << std::endl;
		return (1);
	}
	ifs.open(argv[1]);
	if (!ifs.is_open())
	{
		std::cerr << "File error" << std::endl;
		return (1);
	}
	file_name.assign(argv[1]);
	file_name += ".replace";
	ofs.open(file_name);
	if (!ofs.is_open())
	{
		std::cerr << "File error" << std::endl;
		return (1);
	}
	while (!ifs.eof())
	{
		std::getline(ifs, str);
		my_sed(str, argv[2], argv[3]);
		ofs << str;
		if (!ifs.eof())
			ofs << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}