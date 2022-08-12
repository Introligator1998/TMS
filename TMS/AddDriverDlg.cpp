#include "AddDriverDlg.h"

AddDriverDlg::AddDriverDlg(QWidget* parent)
{
	addDriverDlg = new QDialog(parent);

    driverNameLineEdit = new QLineEdit(this);
    driverSurnameLineEdit = new QLineEdit(this);
    driverAgeLineEdit = new QLineEdit(this);
    driverLicenceNoLineEdit = new QLineEdit(this);

    driverName = new QString();
    driverSurname = new QString();
    driverAge = new QString();
    driverLicenceNo = new QString();

    driverNameLabel = new QLabel("Imie:",this);
    driverSurnameLabel = new QLabel("Nazwisko:", this);
    driverAgeLabel =  new QLabel("Wiek:", this);
    driverLicenceNoLabel = new QLabel("Numer prawa jazdy", this);
    confirmBtn = new QPushButton("Zatwierdz");
}

void AddDriverDlg::SetupDriverDlg(QWidget* parent)
{
	addDriverLayout = new QGridLayout(this);
	addDriverLayout->addWidget(driverNameLabel);
    addDriverLayout->addWidget(driverNameLineEdit);
    addDriverLayout->addWidget(driverSurnameLabel);
    addDriverLayout->addWidget(driverSurnameLineEdit);
    addDriverLayout->addWidget(driverAgeLabel);
    addDriverLayout->addWidget(driverAgeLineEdit);
    addDriverLayout->addWidget(driverLicenceNoLabel);
    addDriverLayout->addWidget(driverLicenceNoLineEdit);
    addDriverLayout->addWidget(confirmBtn);
}
