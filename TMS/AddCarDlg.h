#pragma once
#include <qwidget.h>
#include <qlineedit.h>
#include <qboxlayout.h>
#include <qpushbutton.h>


class AddCarDlg:QWidget
{
private:
    QLineEdit* carBrandLineEdit;
    QLineEdit* carModelLineEdit;
    QLineEdit* carIdNoLineEdit;
    QLineEdit* carCapacityLineEdit;

    QString* carBrand;
    QString* carModel;
    QString* carIdNo;
    QString* carCapacity;

    QPushButton* confirmBtn;
    QDialog* addCarDlg;


public:
	AddCarDlg(QWidget*);
	
};

