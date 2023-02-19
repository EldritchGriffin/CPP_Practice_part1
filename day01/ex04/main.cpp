#include <iostream>
#include <fstream>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return;
    }
    std::ofstream outputFile(filename + ".replace");
    if (!outputFile) {
        std::cerr << "Error: Unable to create output file " << filename << ".replace" << std::endl;
        return;
    }
    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();
}

int main(int ac, char   **av) 
{
    if(ac == 4)
    {
        std::string filename, s1, s2;
        filename = av[1];
        s1 = av[2];
        s2 = av[3];
        replaceInFile(filename, s1, s2);
        return (0);
    }
    std::cout << "invalid program arguments" << std::endl;
    return 0;
}
