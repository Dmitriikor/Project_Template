
#include <iostream>
#include <chrono>
#include <windows.h>
#include <fstream>
#include <string>
#include <format>
#include <boost/filesystem.hpp>
using namespace boost::filesystem;

int main()
{
  SetConsoleOutputCP(CP_UTF8);
    std::cout << "Usage: tut1 path\n";
  auto str = "Z:\\c++\\Project_Template\\SRC\\main.cpp";
  std::cout << " " << file_size(str) << '\n';
  std::string s;
  std::getline(std::cin, s);
  return 0;
}

// #include <boost/filesystem.hpp>
// #include <iostream>
// #include "glaze/glaze.hpp"
// #include <iostream>
// #include <fstream>
// namespace fs = boost::filesystem;

// struct dataCollector
// {
//     int i = 0;
//     std::string fileName = "";
// };

// void parseDirectory(const std::string &directoryPath, dataCollector &dataCollectorObj)
// {
//     dataCollectorObj.i++;
//     // Iterate through the directory
//     for (const auto &entry : fs::directory_iterator(directoryPath))
//     {
//         // Check if it's a directory
//         if (fs::is_directory(entry))
//         {
//             std::cout << "Directory: " << entry.path().filename() << std::endl;
//             // Check if the directory has a file inside
//             for (const auto &subEntry : fs::directory_iterator(entry.path()))
//             {
//                 if (fs::is_regular_file(subEntry))
//                 {
//                     std::cout << "Parsing file in directory: " << subEntry.path().filename() << std::endl;
//                 }
//             }
//         }
//         // If it's a file, just parse it
//         else if (fs::is_regular_file(entry))
//         {
//             std::cout << "Parsing file: " << entry.path().filename() << std::endl;
//         }
//     }
// }

// int main()
// {
//     std::cout << "insert directory path: \n";
//     std::string directoryPath;
//     std::getline(std::cin, directoryPath);
//     // directoryPath = "path/to/your/directory";
//     dataCollector dataCollectorObj;
//     parseDirectory(directoryPath, dataCollectorObj);


//     auto json = glz::write_json(dataCollector{});
//     std::string json2;
//     glz::prettify_json(json, json2);
//     std::cout << json2 << '\n';
//     dataCollector obj{};
//     std::cout << glz::write_json(obj) << '\n';
//     return 0;
// }
