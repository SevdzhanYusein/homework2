#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    int countLine = 10;

    if (argc >= 2)
    {
        countLine = std::stoi(argv[1]);
    }

    int lineCount = 0;
    int wordCount = 0;
    int byteCount = 0;

    std::string line;
    while (std::getline(std::cin, line))
    {
        lineCount++;

        size_t pos = 0;
        while ((pos = line.find_first_not_of(" \t", pos)) != std::string::npos)
        {
            wordCount++;
            pos = line.find_first_of(" \t", pos);
            if (pos == std::string::npos)
            {
                break;
            }
        }

        byteCount += line.length() + 1;


    }

    std::cout << " \t " << lineCount << " \t " << wordCount << " \t " << byteCount << " \t "  << std::endl;

    return 0;
}