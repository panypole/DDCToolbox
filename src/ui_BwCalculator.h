/********************************************************************************
** Form generated from reading UI file 'BwCalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BWCALCULATOR_H
#define UI_BWCALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_calc
{
public:
    QLabel *label;
    QLabel *label_3;
    QDoubleSpinBox *bw;
    QDoubleSpinBox *q;
    QLabel *label_2;

    void setupUi(QDialog *calc)
    {
        if (calc->objectName().isEmpty())
            calc->setObjectName(QString::fromUtf8("calc"));
        calc->resize(231, 79);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        calc->setWindowIcon(icon);
        label = new QLabel(calc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 71, 21));
        label_3 = new QLabel(calc);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 10, 91, 21));
        bw = new QDoubleSpinBox(calc);
        bw->setObjectName(QString::fromUtf8("bw"));
        bw->setGeometry(QRect(10, 40, 81, 26));
        bw->setDecimals(6);
        bw->setMinimum(-100.000000000000000);
        bw->setMaximum(100.000000000000000);
        q = new QDoubleSpinBox(calc);
        q->setObjectName(QString::fromUtf8("q"));
        q->setGeometry(QRect(140, 40, 81, 26));
        q->setDecimals(6);
        q->setMinimum(-10000000.000000000000000);
        q->setMaximum(10000000.000000000000000);
        label_2 = new QLabel(calc);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 40, 31, 20));
        QFont font;
        font.setPointSize(13);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(calc);
        QObject::connect(bw, SIGNAL(valueChanged(double)), calc, SLOT(updatedBW(double)));
        QObject::connect(q, SIGNAL(valueChanged(double)), calc, SLOT(updatedQ(double)));

        QMetaObject::connectSlotsByName(calc);
    } // setupUi

    void retranslateUi(QDialog *calc)
    {
        calc->setWindowTitle(QCoreApplication::translate("calc", "Q/BW Calculator", nullptr));
        label->setText(QCoreApplication::translate("calc", "<html><head/><body><p>Bandwidth</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("calc", "<html><head/><body><p>Quality factor</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("calc", "\342\206\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calc: public Ui_calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BWCALCULATOR_H
