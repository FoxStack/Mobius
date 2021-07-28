#include "DB.h"
#include <fstream>
#include <iostream>
#include <string>

DB::DB(std::string path) { PATH = path; }

DB::~DB() {}

/*
 * This class is really simple, the JSON object is convenient and this class
 * follows a similar structure to a JS reducer. In JS you can create an immutable object for example
 * User: { authid: "...", cookies: "..." ...} and using the reducer hook you can modify the data elegantly.
 *
 * This class will probably be modified in the future to closely resemble the redux structure. Why? Idk I think the json class is cool
 * and I want to makes some C++ tools for the future.
 */

/**
 * @brief Write - Writes a single json object to the first line of a txt file. The json contains child objects and is stringified on insertion.
 * @param object type json
 */

/*
 * For this project once you read the JSON you can do anything you want with it, the idea is that you read it, you modify it and when you plan to save the object
 * or close the program, you write the entire object to the txt file.
 */
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

/**
 * @brief Read - Reads the json from storage. The string literal is converted to an object.
 * @return json
 */
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