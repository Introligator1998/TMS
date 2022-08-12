#include "TMS.h"



TMS::TMS(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    CreateAddDriverButton();
    CreateAddCarButton();
}

void TMS::CreateAddDriverButton()
{

    addDriverBtn = new QPushButton(this);
    addDriverBtn->setText(QString("Dodaj nowego kierowce"));
    addDriverBtn->setGeometry(0, 0,150,60);
    addDriverBtn->setStyleSheet("background-color: blue");
    connect(addDriverBtn, &QPushButton::clicked, this, &TMS::OnAddDriverButton);
}

void TMS::CreateAddCarButton()
{
    
    addCarBtn = new QPushButton(this);
    addCarBtn->setText(QString("Dodaj nowy samochod"));
    addCarBtn->setGeometry(0, 80, 150, 60);
    addCarBtn->setStyleSheet("background-color: blue");
    connect(addCarBtn, &QPushButton::clicked, this, &TMS::OnAddCarButton );

}

void TMS::OnAddDriverButton()
{
    AddDriverDlg* addDriverDlg = new AddDriverDlg(this);
    addDriverDlg->SetupDriverDlg(this);
    addDriverDlg->show();
}

void TMS::OnAddCarButton()
{
}

TMS::~TMS()
{}
