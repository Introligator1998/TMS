#pragma once
#include <qwidget.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include <qdialog.h>
#include <qboxlayout.h>
#include <qlabel.h>
class AddDriverDlg :
    public QWidget
{
public:
    AddDriverDlg(QWidget* parent);
    void SetupDriverDlg(QWidget* parent);;

private:
    QLineEdit* driverNameLineEdit;
    QLineEdit* driverSurnameLineEdit;
    QLineEdit* driverAgeLineEdit;
    QLineEdit* driverLicenceNoLineEdit;

    QString* driverName;
    QString* driverSurname;
    QString* driverAge;
    QString* driverLicenceNo;

    QLabel* driverNameLabel;
    QLabel* driverSurnameLabel;
    QLabel* driverAgeLabel;
    QLabel* driverLicenceNoLabel;

    QPushButton* confirmBtn;
    QDialog* addDriverDlg;
    QGridLayout* addDriverLayout;
};

