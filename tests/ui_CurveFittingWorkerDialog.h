/********************************************************************************
** Form generated from reading UI file 'CurveFittingWorkerDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVEFITTINGWORKERDIALOG_H
#define UI_CURVEFITTINGWORKERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "plot/QCustomPlot.h"
#include "widget/QTintableProgressBar.h"

QT_BEGIN_NAMESPACE

class Ui_CurveFittingWorkerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QFrame *rmseFrame;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *rmsePlot;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QFrame *rmseTextFrame;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *stat_iteration;
    QLabel *label_2;
    QLabel *stat_mse;
    QLabel *label_3;
    QLabel *stat_algo;
    QLabel *label_4;
    QLabel *stat_stage;
    QFrame *previewFrame;
    QVBoxLayout *verticalLayout_4;
    QCustomPlot *previewPlot;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_2;
    QLabel *progressText;
    QHBoxLayout *horizontalLayout;
    QTintableProgressBar *progressBar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CurveFittingWorkerDialog)
    {
        if (CurveFittingWorkerDialog->objectName().isEmpty())
            CurveFittingWorkerDialog->setObjectName(QString::fromUtf8("CurveFittingWorkerDialog"));
        CurveFittingWorkerDialog->resize(613, 620);
        CurveFittingWorkerDialog->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(CurveFittingWorkerDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rmseFrame = new QFrame(CurveFittingWorkerDialog);
        rmseFrame->setObjectName(QString::fromUtf8("rmseFrame"));
        rmseFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(208, 204, 201) "));
        rmseFrame->setFrameShape(QFrame::StyledPanel);
        rmseFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(rmseFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rmsePlot = new QCustomPlot(rmseFrame);
        rmsePlot->setObjectName(QString::fromUtf8("rmsePlot"));
        verticalLayout_3 = new QVBoxLayout(rmsePlot);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 163, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_2->addWidget(rmsePlot);


        horizontalLayout_2->addWidget(rmseFrame);

        rmseTextFrame = new QFrame(CurveFittingWorkerDialog);
        rmseTextFrame->setObjectName(QString::fromUtf8("rmseTextFrame"));
        rmseTextFrame->setMinimumSize(QSize(165, 0));
        rmseTextFrame->setStyleSheet(QString::fromUtf8("#rmseTextFrame {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border: 1px solid rgb(208, 204, 201);\n"
"}"));
        rmseTextFrame->setFrameShape(QFrame::StyledPanel);
        rmseTextFrame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(rmseTextFrame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label = new QLabel(rmseTextFrame);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        stat_iteration = new QLabel(rmseTextFrame);
        stat_iteration->setObjectName(QString::fromUtf8("stat_iteration"));

        formLayout->setWidget(0, QFormLayout::FieldRole, stat_iteration);

        label_2 = new QLabel(rmseTextFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        stat_mse = new QLabel(rmseTextFrame);
        stat_mse->setObjectName(QString::fromUtf8("stat_mse"));

        formLayout->setWidget(1, QFormLayout::FieldRole, stat_mse);

        label_3 = new QLabel(rmseTextFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        stat_algo = new QLabel(rmseTextFrame);
        stat_algo->setObjectName(QString::fromUtf8("stat_algo"));

        formLayout->setWidget(2, QFormLayout::FieldRole, stat_algo);

        label_4 = new QLabel(rmseTextFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        stat_stage = new QLabel(rmseTextFrame);
        stat_stage->setObjectName(QString::fromUtf8("stat_stage"));

        formLayout->setWidget(3, QFormLayout::FieldRole, stat_stage);


        horizontalLayout_2->addWidget(rmseTextFrame);

        horizontalLayout_2->setStretch(0, 5);
        horizontalLayout_2->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_2);

        previewFrame = new QFrame(CurveFittingWorkerDialog);
        previewFrame->setObjectName(QString::fromUtf8("previewFrame"));
        previewFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(208, 204, 201) "));
        previewFrame->setFrameShape(QFrame::StyledPanel);
        previewFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(previewFrame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        previewPlot = new QCustomPlot(previewFrame);
        previewPlot->setObjectName(QString::fromUtf8("previewPlot"));
        verticalLayout_5 = new QVBoxLayout(previewPlot);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 163, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        verticalLayout_4->addWidget(previewPlot);


        verticalLayout->addWidget(previewFrame);

        progressText = new QLabel(CurveFittingWorkerDialog);
        progressText->setObjectName(QString::fromUtf8("progressText"));
        progressText->setMinimumSize(QSize(120, 0));

        verticalLayout->addWidget(progressText);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        progressBar = new QTintableProgressBar(CurveFittingWorkerDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setMinimumSize(QSize(0, 0));
        progressBar->setSizeIncrement(QSize(0, 0));
        progressBar->setBaseSize(QSize(0, 0));
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);

        buttonBox = new QDialogButtonBox(CurveFittingWorkerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CurveFittingWorkerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CurveFittingWorkerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CurveFittingWorkerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CurveFittingWorkerDialog);
    } // setupUi

    void retranslateUi(QDialog *CurveFittingWorkerDialog)
    {
        CurveFittingWorkerDialog->setWindowTitle(QCoreApplication::translate("CurveFittingWorkerDialog", "Curve fitting", nullptr));
        label->setText(QCoreApplication::translate("CurveFittingWorkerDialog", "Iteration:", nullptr));
        stat_iteration->setText(QCoreApplication::translate("CurveFittingWorkerDialog", "0", nullptr));
        label_2->setText(QCoreApplication::translate("CurveFittingWorkerDialog", "Mean square error:", nullptr));
        stat_mse->setText(QCoreApplication::translate("CurveFittingWorkerDialog", "0", nullptr));
        label_3->setText(QCoreApplication::translate("CurveFittingWorkerDialog", "Current algorithm:", nullptr));
        stat_algo->setText(QCoreApplication::translate("CurveFittingWorkerDialog", "?", nullptr));
        label_4->setText(QCoreApplication::translate("CurveFittingWorkerDialog", "Current stage:", nullptr));
        stat_stage->setText(QCoreApplication::translate("CurveFittingWorkerDialog", "0", nullptr));
        progressText->setText(QCoreApplication::translate("CurveFittingWorkerDialog", "Preparing...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CurveFittingWorkerDialog: public Ui_CurveFittingWorkerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVEFITTINGWORKERDIALOG_H
