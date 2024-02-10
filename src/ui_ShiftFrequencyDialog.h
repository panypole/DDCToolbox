/********************************************************************************
** Form generated from reading UI file 'ShiftFrequencyDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHIFTFREQUENCYDIALOG_H
#define UI_SHIFTFREQUENCYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_shiftfreq
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *shift;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *shiftfreq)
    {
        if (shiftfreq->objectName().isEmpty())
            shiftfreq->setObjectName(QString::fromUtf8("shiftfreq"));
        shiftfreq->resize(285, 106);
        shiftfreq->setMinimumSize(QSize(255, 0));
        shiftfreq->setMaximumSize(QSize(2550, 200));
        verticalLayout_3 = new QVBoxLayout(shiftfreq);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 5, -1, -1);
        groupBox = new QGroupBox(shiftfreq);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(9);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 3, 6, 3);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(3, 0, -1, -1);
        label = new QLabel(shiftfreq);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        shift = new QSpinBox(shiftfreq);
        shift->setObjectName(QString::fromUtf8("shift"));
        shift->setMinimum(-24000);
        shift->setMaximum(24000);

        formLayout->setWidget(0, QFormLayout::FieldRole, shift);


        verticalLayout_3->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(shiftfreq);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(shiftfreq);
        QObject::connect(buttonBox, SIGNAL(accepted()), shiftfreq, SLOT(confirm()));
        QObject::connect(buttonBox, SIGNAL(rejected()), shiftfreq, SLOT(reject()));

        QMetaObject::connectSlotsByName(shiftfreq);
    } // setupUi

    void retranslateUi(QDialog *shiftfreq)
    {
        shiftfreq->setWindowTitle(QCoreApplication::translate("shiftfreq", "Shift", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("shiftfreq", "Shift frequency values", nullptr));
        label->setText(QCoreApplication::translate("shiftfreq", "Shift by", nullptr));
        shift->setSuffix(QCoreApplication::translate("shiftfreq", "Hz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shiftfreq: public Ui_shiftfreq {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIFTFREQUENCYDIALOG_H
