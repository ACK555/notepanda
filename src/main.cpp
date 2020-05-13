#include <QApplication>
#include <QDebug>
#include <QStyleFactory>

#include "./ui/mainwindow.h"

int main(int argc, char *argv[])
{
  QApplication App(argc, argv);
  App.setOrganizationName("ChungZH");
  App.setApplicationName("Notepanda");
  App.setApplicationVersion("0.0.1-rc.1");

  MainWindow notepanda;
  notepanda.show();
  return App.exec();
}
