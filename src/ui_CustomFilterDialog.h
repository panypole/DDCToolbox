/********************************************************************************
** Form generated from reading UI file 'CustomFilterDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMFILTERDIALOG_H
#define UI_CUSTOMFILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_customfilterdialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QDoubleSpinBox *a0;
    QDoubleSpinBox *a1;
    QDoubleSpinBox *a2;
    QDoubleSpinBox *b0;
    QDoubleSpinBox *b1;
    QDoubleSpinBox *b2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QDoubleSpinBox *a0_48;
    QDoubleSpinBox *a1_48;
    QDoubleSpinBox *a2_48;
    QDoubleSpinBox *b0_48;
    QDoubleSpinBox *b1_48;
    QDoubleSpinBox *b2_48;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *customfilterdialog)
    {
        if (customfilterdialog->objectName().isEmpty())
            customfilterdialog->setObjectName(QString::fromUtf8("customfilterdialog"));
        customfilterdialog->resize(446, 289);
        verticalLayout = new QVBoxLayout(customfilterdialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        groupBox_2 = new QGroupBox(customfilterdialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(13);
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(0, -1, -1, 0);
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        a0 = new QDoubleSpinBox(groupBox_2);
        a0->setObjectName(QString::fromUtf8("a0"));
        a0->setDecimals(16);
        a0->setMinimum(-100.000000000000000);
        a0->setMaximum(100.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, a0);

        a1 = new QDoubleSpinBox(groupBox_2);
        a1->setObjectName(QString::fromUtf8("a1"));
        a1->setDecimals(16);
        a1->setMinimum(-100.000000000000000);
        a1->setMaximum(100.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, a1);

        a2 = new QDoubleSpinBox(groupBox_2);
        a2->setObjectName(QString::fromUtf8("a2"));
        a2->setDecimals(16);
        a2->setMinimum(-100.000000000000000);
        a2->setMaximum(100.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, a2);

        b0 = new QDoubleSpinBox(groupBox_2);
        b0->setObjectName(QString::fromUtf8("b0"));
        b0->setDecimals(16);
        b0->setMinimum(-100.000000000000000);
        b0->setMaximum(100.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, b0);

        b1 = new QDoubleSpinBox(groupBox_2);
        b1->setObjectName(QString::fromUtf8("b1"));
        b1->setDecimals(16);
        b1->setMinimum(-100.000000000000000);
        b1->setMaximum(100.000000000000000);

        formLayout->setWidget(4, QFormLayout::FieldRole, b1);

        b2 = new QDoubleSpinBox(groupBox_2);
        b2->setObjectName(QString::fromUtf8("b2"));
        b2->setDecimals(16);
        b2->setMinimum(-100.000000000000000);
        b2->setMaximum(100.000000000000000);

        formLayout->setWidget(5, QFormLayout::FieldRole, b2);


        horizontalLayout_3->addLayout(formLayout);


        horizontalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(customfilterdialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(13);
        formLayout_2->setVerticalSpacing(6);
        formLayout_2->setContentsMargins(0, -1, -1, 0);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_12);

        a0_48 = new QDoubleSpinBox(groupBox);
        a0_48->setObjectName(QString::fromUtf8("a0_48"));
        a0_48->setDecimals(16);
        a0_48->setMinimum(-100.000000000000000);
        a0_48->setMaximum(100.000000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, a0_48);

        a1_48 = new QDoubleSpinBox(groupBox);
        a1_48->setObjectName(QString::fromUtf8("a1_48"));
        a1_48->setDecimals(16);
        a1_48->setMinimum(-100.000000000000000);
        a1_48->setMaximum(100.000000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, a1_48);

        a2_48 = new QDoubleSpinBox(groupBox);
        a2_48->setObjectName(QString::fromUtf8("a2_48"));
        a2_48->setDecimals(16);
        a2_48->setMinimum(-100.000000000000000);
        a2_48->setMaximum(100.000000000000000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, a2_48);

        b0_48 = new QDoubleSpinBox(groupBox);
        b0_48->setObjectName(QString::fromUtf8("b0_48"));
        b0_48->setDecimals(16);
        b0_48->setMinimum(-100.000000000000000);
        b0_48->setMaximum(100.000000000000000);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, b0_48);

        b1_48 = new QDoubleSpinBox(groupBox);
        b1_48->setObjectName(QString::fromUtf8("b1_48"));
        b1_48->setDecimals(16);
        b1_48->setMinimum(-100.000000000000000);
        b1_48->setMaximum(100.000000000000000);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, b1_48);

        b2_48 = new QDoubleSpinBox(groupBox);
        b2_48->setObjectName(QString::fromUtf8("b2_48"));
        b2_48->setDecimals(16);
        b2_48->setMinimum(-100.000000000000000);
        b2_48->setMaximum(100.000000000000000);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, b2_48);


        horizontalLayout->addLayout(formLayout_2);


        horizontalLayout_2->addWidget(groupBox);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(customfilterdialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(customfilterdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), customfilterdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), customfilterdialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(customfilterdialog);
    } // setupUi

    void retranslateUi(QDialog *customfilterdialog)
    {
        customfilterdialog->setWindowTitle(QCoreApplication::translate("customfilterdialog", "Custom filter", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("customfilterdialog", "44100Hz", nullptr));
        label->setText(QCoreApplication::translate("customfilterdialog", "A0", nullptr));
        label_2->setText(QCoreApplication::translate("customfilterdialog", "A1", nullptr));
        label_3->setText(QCoreApplication::translate("customfilterdialog", "A2", nullptr));
        label_4->setText(QCoreApplication::translate("customfilterdialog", "B0", nullptr));
        label_5->setText(QCoreApplication::translate("customfilterdialog", "B1", nullptr));
        label_6->setText(QCoreApplication::translate("customfilterdialog", "B2", nullptr));
        groupBox->setTitle(QCoreApplication::translate("customfilterdialog", "48000Hz", nullptr));
        label_7->setText(QCoreApplication::translate("customfilterdialog", "A0", nullptr));
        label_8->setText(QCoreApplication::translate("customfilterdialog", "A1", nullptr));
        label_9->setText(QCoreApplication::translate("customfilterdialog", "A2", nullptr));
        label_10->setText(QCoreApplication::translate("customfilterdialog", "B0", nullptr));
        label_11->setText(QCoreApplication::translate("customfilterdialog", "B1", nullptr));
        label_12->setText(QCoreApplication::translate("customfilterdialog", "B2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customfilterdialog: public Ui_customfilterdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMFILTERDIALOG_H
