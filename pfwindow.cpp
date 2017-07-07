#include "pfwindow.h"
#include "ui_pfwindow.h"

pfWindow::pfWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::pfWindow)
{
  ui->setupUi(this);
}

pfWindow::~pfWindow()
{
  delete ui;
}
