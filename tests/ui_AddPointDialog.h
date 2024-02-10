/********************************************************************************
** Form generated from reading UI file 'AddPointDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPOINTDIALOG_H
#define UI_ADDPOINTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addpoint
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QSpinBox *freq;
    QLabel *label_2;
    QDoubleSpinBox *bw;
    QLabel *label_3;
    QDoubleSpinBox *gain;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QComboBox *ftype;
    QPushButton *custom_configure;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *addpoint)
    {
        if (addpoint->objectName().isEmpty())
            addpoint->setObjectName(QString::fromUtf8("addpoint"));
        addpoint->resize(283, 292);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        addpoint->setWindowIcon(icon);
        addpoint->setModal(true);
        verticalLayout_3 = new QVBoxLayout(addpoint);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 5, -1, -1);
        groupBox = new QGroupBox(addpoint);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 50));
        groupBox->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(9);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 3, 6, 3);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(3, 0, 0, -1);
        label = new QLabel(addpoint);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        freq = new QSpinBox(addpoint);
        freq->setObjectName(QString::fromUtf8("freq"));
        freq->setMinimum(100);
        freq->setMaximum(24000);
        freq->setSingleStep(10);

        verticalLayout_4->addWidget(freq);

        label_2 = new QLabel(addpoint);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        bw = new QDoubleSpinBox(addpoint);
        bw->setObjectName(QString::fromUtf8("bw"));
        bw->setMaximum(100.000000000000000);
        bw->setSingleStep(0.200000000000000);
        bw->setValue(1.000000000000000);

        verticalLayout_4->addWidget(bw);

        label_3 = new QLabel(addpoint);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);

        gain = new QDoubleSpinBox(addpoint);
        gain->setObjectName(QString::fromUtf8("gain"));
        gain->setMinimum(-40.000000000000000);
        gain->setMaximum(40.000000000000000);
        gain->setSingleStep(0.200000000000000);

        verticalLayout_4->addWidget(gain);

        label_4 = new QLabel(addpoint);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        ftype = new QComboBox(addpoint);
        ftype->setObjectName(QString::fromUtf8("ftype"));

        horizontalLayout->addWidget(ftype);

        custom_configure = new QPushButton(addpoint);
        custom_configure->setObjectName(QString::fromUtf8("custom_configure"));

        horizontalLayout->addWidget(custom_configure);

        horizontalLayout->setStretch(0, 5);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(addpoint);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        QWidget::setTabOrder(ftype, custom_configure);

        retranslateUi(addpoint);
        QObject::connect(buttonBox, SIGNAL(accepted()), addpoint, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addpoint, SLOT(reject()));

        QMetaObject::connectSlotsByName(addpoint);
    } // setupUi

    void retranslateUi(QDialog *addpoint)
    {
        addpoint->setWindowTitle(QCoreApplication::translate("addpoint", "Add new filter", nullptr));
        groupBox->setTitle(QString());
        label_5->setText(QCoreApplication::translate("addpoint", "Add new filter", nullptr));
        label_6->setText(QCoreApplication::translate("addpoint", "Configure filter type and parameters", nullptr));
        label->setText(QCoreApplication::translate("addpoint", "Frequency (1 ~ 24000)", nullptr));
        label_2->setText(QCoreApplication::translate("addpoint", "Bandwidth (0.0 ~ 100.0)", nullptr));
        label_3->setText(QCoreApplication::translate("addpoint", "Gain (-40.0 ~ 40.0)", nullptr));
        label_4->setText(QCoreApplication::translate("addpoint", "Type", nullptr));
        custom_configure->setText(QCoreApplication::translate("addpoint", "Configure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addpoint: public Ui_addpoint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPOINTDIALOG_H
