/********************************************************************************
** Form generated from reading UI file 'DetailListItem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILLISTITEM_H
#define UI_DETAILLISTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_configitem
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QLabel *desc;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *configitem)
    {
        if (configitem->objectName().isEmpty())
            configitem->setObjectName(QString::fromUtf8("configitem"));
        configitem->resize(288, 65);
        verticalLayout_2 = new QVBoxLayout(configitem);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        title = new QLabel(configitem);
        title->setObjectName(QString::fromUtf8("title"));
        title->setStyleSheet(QString::fromUtf8("*{\n"
"	font-weight: 600;\n"
"}"));

        verticalLayout->addWidget(title);

        desc = new QLabel(configitem);
        desc->setObjectName(QString::fromUtf8("desc"));

        verticalLayout->addWidget(desc);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(configitem);

        QMetaObject::connectSlotsByName(configitem);
    } // setupUi

    void retranslateUi(QWidget *configitem)
    {
        configitem->setWindowTitle(QCoreApplication::translate("configitem", "Form", nullptr));
        title->setText(QCoreApplication::translate("configitem", "<html><head/><body><p>&lt;Name&gt; </p></body></html>", nullptr));
        desc->setText(QCoreApplication::translate("configitem", "<Desc>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class configitem: public Ui_configitem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILLISTITEM_H
