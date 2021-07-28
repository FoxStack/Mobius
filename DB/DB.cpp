#include "DB.h"
#include <fstream>
#include <iostream>
#include <string>

DB::DB(std::string path) { PATH = path; }

DB::~DB() {}

void DB::write(nlohmann::json object) {
  try {
    std::ofstream file;
    // Wipe the whole file and reinsert the new JSON string literal.
    file.open(PATH, std::ofstream::out | std::ofstream::trunc);
    if (file.is_open()) {
      file << object.dump();
    }
    file.close();
  } catch (std::exception const &e) {
    std::cout << "Error unable to access file at " << PATH << std::endl;
  }
}

nlohmann::json DB::read() {
  try {
    std::string data;
    std::ifstream file;
    file.open(PATH);
    getline(file, data);
    file.close();
    return nlohmann::json::parse(data);
  } catch (std::exception const &e) {
    std::cout << "Error unable to read file at " << PATH << std::endl;
  }
}