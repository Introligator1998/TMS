#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TMS.h"
#include <qpushbutton.h>
#include <qdialog.h>
#include "AddDriverDlg.h"

class TMS : public QMainWindow
{
    Q_OBJECT

public:
    TMS(QWidget *parent = nullptr);

    void CreateAddCarButton();
    void CreateAddDriverButton();
    void OnAddDriverButton();
    void OnAddCarButton();
    ~TMS();

private:
    Ui::TMSClass ui;
    QPushButton* addDriverBtn;
    QPushButton* addCarBtn;
    AddDriverDlg* addDriverDlg;
};
