#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    (void)av;
    if (ac != 4)
    {
        std::cout << "invalid arg" <<std::endl;
        return (1);
    }
    else
    {
        std::string file_name = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        char c;
        if (s1.empty())
        {
            std::cout << "Error: s1 cannot be empty" << std::endl;
            return (1);
        }

        std::ifstream read_file(file_name.c_str());
        if (!read_file.is_open())
        {
            std::cout << "file not exist" <<std::endl;
            return (1);
        }
        std::string write_file = file_name + ".replace";
        std::ofstream creat_file(write_file.c_str());
        if (!creat_file.is_open())
        {
            std::cout << "file not exist" <<std::endl;
            read_file.close();
            return (1);
        }
        std::string befor;
        while (read_file.get(c))
        {
            befor += c;
        }
        size_t			pos = 0;
	    size_t			found;
        while ((found = befor.find(s1, pos)) != std::string::npos)
        {
            creat_file << befor.substr(pos, found - pos);
            creat_file << s2;
            pos = found + s1.length();
        }
        creat_file << befor.substr(pos);
        creat_file.close();
    }
    return (0);
}