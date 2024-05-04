#include <iostream>
#include <string> 

int main(int argc, char *argv[])
{

    int countLine = 10;

    if (argc >= 2)
    {
        countLine = std::stoi(argv[1]);
    }

    std::string line;

    for (int i = 0; i < countLine && std::getline(std::cin, line); ++i)
    {
        std::cout << line << std::endl;
    }

    return 0;
}