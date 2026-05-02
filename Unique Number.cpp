// Unique Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

int main()
{
    std::string path = "C:\\Users\\Austin\\source\\repos\\Unique Number\\UniqueNumberDoc.txt";
    //Open the file,
    std::ofstream writer(path,std::ios::app);
    std::ifstream reader(path);
    
    if (std::filesystem::is_empty(path)) {
        writer << "0" << std::endl;
    }


    //Get the number
    std::string line;
    std::getline(reader, line);
    
    int a;
    try {
        a = std::stoi(line);
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Invalid input!" << std::endl;
    }

    //Update the number.
    a++;
    line = std::to_string(a);
    writer.close();
    
    writer.open(path, std::ios::out | std::ios::trunc);
    writer << line << std::endl;
        
    //Display the output
    
    
    
    std::cout << "Unique number is: " << line;

    std::cin.ignore();
}
