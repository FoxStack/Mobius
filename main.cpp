#include "mainwindow.h"

#include "./Vector/Vector.hpp"
#include "DB/DB.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <iostream>

int main(int argc, char *argv[])
{

  //DB is in cmake-build-debug for reference.
  DB db("DB.txt");
  //https://github.com/nlohmann/json#projects-using-json-for-modern-c
  nlohmann::json j2 =
      {
          {"S001", { {"x", 0}, {"y", 0}, {"scale", 15}, {"color", "#343434"} } },
          {"S002", { {"x", 15.4}, {"y", 10}, {"scale", 25} } },
          {"S003", { {"x", 17.23}, {"y", 60.115}, {"scale", 5} } },
          {"S004", { {"x", 17.23}, {"y", 60.115}, {"scale", 5} } },
          {"S005", { {"x", 17.23}, {"y", 60.115}, {"scale", 5} } },
          {"S006", { {"x", 11231237.23}, {"y", 61230.115}, {"scale", 544} } },
          {"S007", { {"x", 17.23}, {"y", 60.115}, {"scale", 5} } },
          {"S008", { {"x", 17.23}, {"y", 60.115}, {"scale", 5} } },
      };
  db.write(j2);
  nlohmann::json t = db.read();
  std::cout << t.at("S006") << std::endl;

  QApplication a(argc, argv);

    //Why do we have i18n? We don't even have translations to use? -Raf
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "project_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    w.show();
    return a.exec();
}
