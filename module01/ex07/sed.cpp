#include <iostream>
#include <string>
#include <fstream>

static int ft_error(std::string s)
{
	std::cout << s << std::endl;
	return (0);
}

int main(int ac, char **av)
{
	std::string b = "";
	std::string content = "";
	unsigned long i = 0;

	if (ac != 4)
		return (ft_error("Not enough Arguments: Must be: [File] [str1] [str2]"));

	std::string s1 = av[2];
	std::string s2 = av[3];

	std::ifstream src(av[1]);

	if (!src)
		return (ft_error("Path name isn't a valid one, abort ..."));

	if (s1.size() == 0 || s2.size() == 0)
	{
		src.close();
		return (ft_error("S1 or S2 is empty, abort ..."));
	}

	std::ofstream dest(std::string(av[1]) + ".replace");

	if (!dest)
	{
		src.close();
		return (ft_error("Error while creating destination file"));
	}

	while (std::getline(src, b))
		content.append(b + "\n");

	while (i < content.size() && s1.size() > 0)
	{
		i = content.find(s1, i);
		if (i < content.size())
		{
			content.replace(i, s1.size(), s2);
			i += s1.size();
		}
	}
	dest << content;
	dest.close();
	src.close();
	return (0);
}
