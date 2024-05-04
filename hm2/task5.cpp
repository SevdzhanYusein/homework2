#include <iostream>
#include <vector>
#include <string> 

int main(int argc, char *argv[])
{

    if (argc >= 2)
    {
        countLine = std::stoi(argv[1]);
    }

    int count = 0;


    int lineCount = 0;
    int wordCount = 0;
    int charCount = 0;
    std::string line;
    while (std::getline(std::cin, line)) {
        lineCount++;
        charCount += line.length(); /
        size_t pos = 0;
        while ((pos = line.find_first_not_of(" \t", pos)) != std::string::npos) {
            wordCount++; 
            pos = line.find_first_of(" \t", pos); 
            if (pos == std::string::npos) {
                break;
            }
        }
    }

    std::cout << lineCount << " " << wordCount << " " << charCount << " " << argv[1] << std::endl;
    return 0;
}