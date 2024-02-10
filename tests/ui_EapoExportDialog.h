/********************************************************************************
** Form generated from reading UI file 'EapoExportDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EAPOEXPORTDIALOG_H
#define UI_EAPOEXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SamplerateChooseDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *rateInput;
    QPushButton *rateInsert;
    QPushButton *rateRemove;
    QLabel *label;
    QListWidget *rateList;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SamplerateChooseDialog)
    {
        if (SamplerateChooseDialog->objectName().isEmpty())
            SamplerateChooseDialog->setObjectName(QString::fromUtf8("SamplerateChooseDialog"));
        SamplerateChooseDialog->resize(361, 273);
        verticalLayout_2 = new QVBoxLayout(SamplerateChooseDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 5, -1, -1);
        groupBox = new QGroupBox(SamplerateChooseDialog);
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
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 10);

        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        rateInput = new QSpinBox(SamplerateChooseDialog);
        rateInput->setObjectName(QString::fromUtf8("rateInput"));
        rateInput->setMinimum(8000);
        rateInput->setMaximum(384000);
        rateInput->setValue(44100);

        horizontalLayout_2->addWidget(rateInput);

        rateInsert = new QPushButton(SamplerateChooseDialog);
        rateInsert->setObjectName(QString::fromUtf8("rateInsert"));

        horizontalLayout_2->addWidget(rateInsert);

        rateRemove = new QPushButton(SamplerateChooseDialog);
        rateRemove->setObjectName(QString::fromUtf8("rateRemove"));
        rateRemove->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(rateRemove);

        horizontalLayout_2->setStretch(0, 9);

        verticalLayout_2->addLayout(horizontalLayout_2);

        label = new QLabel(SamplerateChooseDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        rateList = new QListWidget(SamplerateChooseDialog);
        new QListWidgetItem(rateList);
        new QListWidgetItem(rateList);
        rateList->setObjectName(QString::fromUtf8("rateList"));
        rateList->setSelectionMode(QAbstractItemView::ContiguousSelection);
        rateList->setSelectionBehavior(QAbstractItemView::SelectItems);

        verticalLayout_2->addWidget(rateList);

        label_4 = new QLabel(SamplerateChooseDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        verticalLayout_2->addWidget(label_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SamplerateChooseDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SamplerateChooseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SamplerateChooseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SamplerateChooseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SamplerateChooseDialog);
    } // setupUi

    void retranslateUi(QDialog *SamplerateChooseDialog)
    {
        SamplerateChooseDialog->setWindowTitle(QCoreApplication::translate("SamplerateChooseDialog", "Select a sampling rate", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("SamplerateChooseDialog", "Export as EqualizerAPO configuration", nullptr));
        label_3->setText(QCoreApplication::translate("SamplerateChooseDialog", "Select target sampling rates", nullptr));
        rateInput->setSuffix(QCoreApplication::translate("SamplerateChooseDialog", "Hz", nullptr));
        rateInsert->setText(QCoreApplication::translate("SamplerateChooseDialog", "Insert", nullptr));
        rateRemove->setText(QCoreApplication::translate("SamplerateChooseDialog", "Remove selection", nullptr));
        label->setText(QCoreApplication::translate("SamplerateChooseDialog", "Selected values:", nullptr));

        const bool __sortingEnabled = rateList->isSortingEnabled();
        rateList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = rateList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("SamplerateChooseDialog", "44100", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = rateList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("SamplerateChooseDialog", "48000", nullptr));
        rateList->setSortingEnabled(__sortingEnabled);

        label_4->setText(QCoreApplication::translate("SamplerateChooseDialog", "<html><head/><body><p>Generated configurations contain dynamic expressions that automatically select the correct set of coefficients based on the current sampling rate.<br/>Please add all sampling rates you want it to support above.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SamplerateChooseDialog: public Ui_SamplerateChooseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EAPOEXPORTDIALOG_H
