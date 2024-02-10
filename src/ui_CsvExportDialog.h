/********************************************************************************
** Form generated from reading UI file 'CsvExportDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSVEXPORTDIALOG_H
#define UI_CSVEXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CsvExportDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QFormLayout *formLayout;
    QLabel *label_3;
    QSpinBox *samplerate;
    QLabel *label_4;
    QComboBox *format;
    QLabel *label_5;
    QComboBox *delimiter;
    QLabel *label_6;
    QComboBox *includeHeader;
    QLabel *label_7;
    QComboBox *numericFormat;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CsvExportDialog)
    {
        if (CsvExportDialog->objectName().isEmpty())
            CsvExportDialog->setObjectName(QString::fromUtf8("CsvExportDialog"));
        CsvExportDialog->resize(400, 253);
        verticalLayout_2 = new QVBoxLayout(CsvExportDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 4, -1, -1);
        groupBox = new QGroupBox(CsvExportDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 50));
        groupBox->setFlat(false);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(9);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 3, 6, 3);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 10);

        verticalLayout_2->addWidget(groupBox);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(15);
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(3, 0, -1, -1);
        label_3 = new QLabel(CsvExportDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        samplerate = new QSpinBox(CsvExportDialog);
        samplerate->setObjectName(QString::fromUtf8("samplerate"));
        samplerate->setMinimum(8000);
        samplerate->setMaximum(384000);
        samplerate->setValue(44100);

        formLayout->setWidget(0, QFormLayout::FieldRole, samplerate);

        label_4 = new QLabel(CsvExportDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        format = new QComboBox(CsvExportDialog);
        format->addItem(QString());
        format->addItem(QString());
        format->setObjectName(QString::fromUtf8("format"));

        formLayout->setWidget(1, QFormLayout::FieldRole, format);

        label_5 = new QLabel(CsvExportDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        delimiter = new QComboBox(CsvExportDialog);
        delimiter->addItem(QString());
        delimiter->addItem(QString());
        delimiter->addItem(QString());
        delimiter->addItem(QString());
        delimiter->setObjectName(QString::fromUtf8("delimiter"));

        formLayout->setWidget(2, QFormLayout::FieldRole, delimiter);

        label_6 = new QLabel(CsvExportDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        includeHeader = new QComboBox(CsvExportDialog);
        includeHeader->addItem(QString());
        includeHeader->addItem(QString());
        includeHeader->setObjectName(QString::fromUtf8("includeHeader"));

        formLayout->setWidget(3, QFormLayout::FieldRole, includeHeader);

        label_7 = new QLabel(CsvExportDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        numericFormat = new QComboBox(CsvExportDialog);
        numericFormat->addItem(QString());
        numericFormat->addItem(QString());
        numericFormat->setObjectName(QString::fromUtf8("numericFormat"));

        formLayout->setWidget(4, QFormLayout::FieldRole, numericFormat);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(CsvExportDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(CsvExportDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CsvExportDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CsvExportDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CsvExportDialog);
    } // setupUi

    void retranslateUi(QDialog *CsvExportDialog)
    {
        CsvExportDialog->setWindowTitle(QCoreApplication::translate("CsvExportDialog", "Export coefficients as CSV", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("CsvExportDialog", "Export biquad coefficients as CSV dataset...", nullptr));
        label_2->setText(QCoreApplication::translate("CsvExportDialog", "Select your preferred format", nullptr));
        label_3->setText(QCoreApplication::translate("CsvExportDialog", "Sampling rate", nullptr));
        samplerate->setSuffix(QCoreApplication::translate("CsvExportDialog", "Hz", nullptr));
        label_4->setText(QCoreApplication::translate("CsvExportDialog", "Format", nullptr));
        format->setItemText(0, QCoreApplication::translate("CsvExportDialog", "b0, b1, b2, a0, a1, a2", nullptr));
        format->setItemText(1, QCoreApplication::translate("CsvExportDialog", "a0, a1, a2, b0, b1, b2", nullptr));

        label_5->setText(QCoreApplication::translate("CsvExportDialog", "Delimiter", nullptr));
        delimiter->setItemText(0, QCoreApplication::translate("CsvExportDialog", ",", nullptr));
        delimiter->setItemText(1, QCoreApplication::translate("CsvExportDialog", ";", nullptr));
        delimiter->setItemText(2, QCoreApplication::translate("CsvExportDialog", "<Space>", nullptr));
        delimiter->setItemText(3, QCoreApplication::translate("CsvExportDialog", "<Tab>", nullptr));

        label_6->setText(QCoreApplication::translate("CsvExportDialog", "Row header", nullptr));
        includeHeader->setItemText(0, QCoreApplication::translate("CsvExportDialog", "Include", nullptr));
        includeHeader->setItemText(1, QCoreApplication::translate("CsvExportDialog", "Exclude", nullptr));

        label_7->setText(QCoreApplication::translate("CsvExportDialog", "Numeric format", nullptr));
        numericFormat->setItemText(0, QCoreApplication::translate("CsvExportDialog", "Floating point", nullptr));
        numericFormat->setItemText(1, QCoreApplication::translate("CsvExportDialog", "Scientific", nullptr));

    } // retranslateUi

};

namespace Ui {
    class CsvExportDialog: public Ui_CsvExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSVEXPORTDIALOG_H
