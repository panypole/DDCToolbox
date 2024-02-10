/********************************************************************************
** Form generated from reading UI file 'CustomFilterListItem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMFILTERLISTITEM_H
#define UI_CUSTOMFILTERLISTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomFilterItem
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *coeffText;
    QPushButton *configure;

    void setupUi(QWidget *CustomFilterItem)
    {
        if (CustomFilterItem->objectName().isEmpty())
            CustomFilterItem->setObjectName(QString::fromUtf8("CustomFilterItem"));
        CustomFilterItem->resize(377, 57);
        horizontalLayout = new QHBoxLayout(CustomFilterItem);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        coeffText = new QTextBrowser(CustomFilterItem);
        coeffText->setObjectName(QString::fromUtf8("coeffText"));

        horizontalLayout->addWidget(coeffText);

        configure = new QPushButton(CustomFilterItem);
        configure->setObjectName(QString::fromUtf8("configure"));

        horizontalLayout->addWidget(configure);


        retranslateUi(CustomFilterItem);

        QMetaObject::connectSlotsByName(CustomFilterItem);
    } // setupUi

    void retranslateUi(QWidget *CustomFilterItem)
    {
        CustomFilterItem->setWindowTitle(QCoreApplication::translate("CustomFilterItem", "Form", nullptr));
        coeffText->setHtml(QCoreApplication::translate("CustomFilterItem", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif';\">a0 = 0.98, a1 = 1.77, a2 = 0.99, b0 = 1.45, b1 = 2.09, b2 = 0.78</span></p></body></html>", nullptr));
        configure->setText(QCoreApplication::translate("CustomFilterItem", "Configure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomFilterItem: public Ui_CustomFilterItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMFILTERLISTITEM_H
