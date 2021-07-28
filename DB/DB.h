#ifndef MOBIUS_DB_H
#define MOBIUS_DB_H
#include "../Lib/Json/json.hpp"
#include <string>
class DB {
private:
  std::string PATH;
  nlohmann::json obj;
public:
  DB(std::string path);
  virtual ~DB();

  void write(nlohmann::json object);
  nlohmann::json read();
};

#endif // MOBIUS_DB_H
