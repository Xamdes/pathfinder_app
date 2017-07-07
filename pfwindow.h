#ifndef PFWINDOW_H
#define PFWINDOW_H

#include <QMainWindow>

namespace Ui {
  class pfWindow;
}

class pfWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit pfWindow(QWidget *parent = 0);
  ~pfWindow();

private:
  Ui::pfWindow *ui;
};

#endif // PFWINDOW_H
