/********************************************************************************
** Form generated from reading UI file 'CurveFittingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVEFITTINGDIALOG_H
#define UI_CURVEFITTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plot/QCustomPlot.h"

QT_BEGIN_NAMESPACE

class Ui_CurveFittingDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *mainContainer;
    QWidget *mainPane;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *projectLink;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *filePath;
    QPushButton *fileSelection;
    QLabel *label_4;
    QComboBox *algorithmType;
    QLabel *iteration_label_a;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_9;
    QSpinBox *iterations;
    QLabel *iteration_label_b;
    QWidget *iteration_content_b;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_7;
    QSpinBox *iterations_b;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer_2;
    QDoubleSpinBox *modelComplex;
    QLabel *iteration_label_c;
    QWidget *iteration_content_c;
    QHBoxLayout *iteration_content_c_layout;
    QSpacerItem *horizontalSpacer_18;
    QSpinBox *iterations_c;
    QSpacerItem *verticalSpacer;
    QGroupBox *algo_de_container;
    QFormLayout *formLayout_6;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_12;
    QDoubleSpinBox *algo_de_probibound;
    QGroupBox *algo_chio_container;
    QFormLayout *formLayout_7;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_14;
    QSpinBox *algo_chio_maxsolsurvive;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_16;
    QSpinBox *algo_chio_c0;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_17;
    QDoubleSpinBox *algo_chio_spreadingrate;
    QGroupBox *fgrid_container;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_4;
    QLabel *label_13;
    QLabel *fgrid_axis_linearity;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *invert_gain;
    QCheckBox *fgrid_force_convert;
    QFormLayout *formLayout_5;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_8;
    QDoubleSpinBox *fgrid_avgbw;
    QGroupBox *algo_sgd_container;
    QFormLayout *formLayout_8;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_19;
    QDoubleSpinBox *sgd_lr_1;
    QLabel *label_26;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_20;
    QDoubleSpinBox *sgd_ldr_1;
    QHBoxLayout *horizontalLayout_23;
    QSpacerItem *horizontalSpacer_21;
    QDoubleSpinBox *sgd_lr_2;
    QLabel *label_29;
    QLabel *label_25;
    QHBoxLayout *horizontalLayout_24;
    QSpacerItem *horizontalSpacer_22;
    QDoubleSpinBox *sgd_ldr_2;
    QGroupBox *widget;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *adv_random_seed;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *adv_prob_density_func;
    QLabel *label_14;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_10;
    QSpinBox *rnd_pop_n;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_11;
    QSpinBox *rnd_pop_k;
    QWidget *previewSwitchLayout;
    QHBoxLayout *previewButtonLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *previewToggle;
    QWidget *footer;
    QHBoxLayout *horizontalLayout_5;
    QWidget *status_panel;
    QHBoxLayout *status_container;
    QLabel *status_img;
    QLabel *status_label;
    QSpacerItem *horizontalSpacer_4;
    QDialogButtonBox *buttonBox;
    QFrame *previewPlotContainer;
    QVBoxLayout *verticalLayout_7;
    QCustomPlot *previewPlot;

    void setupUi(QDialog *CurveFittingDialog)
    {
        if (CurveFittingDialog->objectName().isEmpty())
            CurveFittingDialog->setObjectName(QString::fromUtf8("CurveFittingDialog"));
        CurveFittingDialog->resize(873, 1069);
        CurveFittingDialog->setMinimumSize(QSize(385, 0));
        CurveFittingDialog->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_2 = new QVBoxLayout(CurveFittingDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 4, -1, 9);
        mainContainer = new QHBoxLayout();
        mainContainer->setObjectName(QString::fromUtf8("mainContainer"));
        mainContainer->setContentsMargins(-1, 0, 0, -1);
        mainPane = new QWidget(CurveFittingDialog);
        mainPane->setObjectName(QString::fromUtf8("mainPane"));
        mainPane->setMinimumSize(QSize(365, 0));
        mainPane->setMaximumSize(QSize(365, 16777215));
        verticalLayout_9 = new QVBoxLayout(mainPane);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(mainPane);
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

        projectLink = new QPushButton(groupBox);
        projectLink->setObjectName(QString::fromUtf8("projectLink"));

        horizontalLayout->addWidget(projectLink);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_9->addWidget(groupBox);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 4, 5, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 0, -1, -1);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(-1, 0, -1, 2);
        label_3 = new QLabel(mainPane);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        filePath = new QLineEdit(mainPane);
        filePath->setObjectName(QString::fromUtf8("filePath"));
        filePath->setReadOnly(true);

        horizontalLayout_2->addWidget(filePath);

        fileSelection = new QPushButton(mainPane);
        fileSelection->setObjectName(QString::fromUtf8("fileSelection"));
        fileSelection->setMinimumSize(QSize(0, 22));
        fileSelection->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_2->addWidget(fileSelection);

        horizontalLayout_2->setStretch(0, 10);
        horizontalLayout_2->setStretch(1, 1);

        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        label_4 = new QLabel(mainPane);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        algorithmType = new QComboBox(mainPane);
        algorithmType->addItem(QString());
        algorithmType->addItem(QString());
        algorithmType->addItem(QString());
        algorithmType->addItem(QString());
        algorithmType->addItem(QString());
        algorithmType->setObjectName(QString::fromUtf8("algorithmType"));

        formLayout->setWidget(1, QFormLayout::FieldRole, algorithmType);

        iteration_label_a = new QLabel(mainPane);
        iteration_label_a->setObjectName(QString::fromUtf8("iteration_label_a"));

        formLayout->setWidget(4, QFormLayout::LabelRole, iteration_label_a);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_9);

        iterations = new QSpinBox(mainPane);
        iterations->setObjectName(QString::fromUtf8("iterations"));
        iterations->setMinimumSize(QSize(107, 0));
        iterations->setMaximumSize(QSize(107, 16777215));
        iterations->setMaximum(1000000000);
        iterations->setValue(50000);

        horizontalLayout_13->addWidget(iterations);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_13);

        iteration_label_b = new QLabel(mainPane);
        iteration_label_b->setObjectName(QString::fromUtf8("iteration_label_b"));

        formLayout->setWidget(5, QFormLayout::LabelRole, iteration_label_b);

        iteration_content_b = new QWidget(mainPane);
        iteration_content_b->setObjectName(QString::fromUtf8("iteration_content_b"));
        horizontalLayout_9 = new QHBoxLayout(iteration_content_b);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        iterations_b = new QSpinBox(iteration_content_b);
        iterations_b->setObjectName(QString::fromUtf8("iterations_b"));
        iterations_b->setMinimumSize(QSize(107, 0));
        iterations_b->setMaximumSize(QSize(107, 16777215));
        iterations_b->setMinimum(1);
        iterations_b->setMaximum(1000000000);
        iterations_b->setValue(50000);

        horizontalLayout_9->addWidget(iterations_b);


        formLayout->setWidget(5, QFormLayout::FieldRole, iteration_content_b);

        label_23 = new QLabel(mainPane);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_23);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_2);

        modelComplex = new QDoubleSpinBox(mainPane);
        modelComplex->setObjectName(QString::fromUtf8("modelComplex"));
        modelComplex->setMinimumSize(QSize(107, 0));
        modelComplex->setMaximumSize(QSize(107, 16777215));
        modelComplex->setMinimum(10.000000000000000);
        modelComplex->setMaximum(120.000000000000000);
        modelComplex->setValue(100.000000000000000);

        horizontalLayout_20->addWidget(modelComplex);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout_20);

        iteration_label_c = new QLabel(mainPane);
        iteration_label_c->setObjectName(QString::fromUtf8("iteration_label_c"));

        formLayout->setWidget(6, QFormLayout::LabelRole, iteration_label_c);

        iteration_content_c = new QWidget(mainPane);
        iteration_content_c->setObjectName(QString::fromUtf8("iteration_content_c"));
        iteration_content_c_layout = new QHBoxLayout(iteration_content_c);
        iteration_content_c_layout->setSpacing(0);
        iteration_content_c_layout->setObjectName(QString::fromUtf8("iteration_content_c_layout"));
        iteration_content_c_layout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        iteration_content_c_layout->addItem(horizontalSpacer_18);

        iterations_c = new QSpinBox(iteration_content_c);
        iterations_c->setObjectName(QString::fromUtf8("iterations_c"));
        iterations_c->setMinimumSize(QSize(107, 0));
        iterations_c->setMaximumSize(QSize(107, 16777215));
        iterations_c->setMinimum(1);
        iterations_c->setMaximum(1000000000);
        iterations_c->setValue(50000);

        iteration_content_c_layout->addWidget(iterations_c);


        formLayout->setWidget(6, QFormLayout::FieldRole, iteration_content_c);


        verticalLayout_5->addLayout(formLayout);


        verticalLayout_3->addLayout(verticalLayout_5);

        verticalSpacer = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        algo_de_container = new QGroupBox(mainPane);
        algo_de_container->setObjectName(QString::fromUtf8("algo_de_container"));
        formLayout_6 = new QFormLayout(algo_de_container);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_17 = new QLabel(algo_de_container);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setWordWrap(true);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_17);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_12);

        algo_de_probibound = new QDoubleSpinBox(algo_de_container);
        algo_de_probibound->setObjectName(QString::fromUtf8("algo_de_probibound"));
        algo_de_probibound->setMinimumSize(QSize(90, 0));
        algo_de_probibound->setMaximum(1.000000000000000);
        algo_de_probibound->setSingleStep(0.010000000000000);
        algo_de_probibound->setValue(0.990000000000000);

        horizontalLayout_11->addWidget(algo_de_probibound);


        formLayout_6->setLayout(0, QFormLayout::FieldRole, horizontalLayout_11);


        verticalLayout_3->addWidget(algo_de_container);

        algo_chio_container = new QGroupBox(mainPane);
        algo_chio_container->setObjectName(QString::fromUtf8("algo_chio_container"));
        formLayout_7 = new QFormLayout(algo_chio_container);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        label_20 = new QLabel(algo_chio_container);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMinimumSize(QSize(165, 0));
        label_20->setWordWrap(true);

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_20);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_14);

        algo_chio_maxsolsurvive = new QSpinBox(algo_chio_container);
        algo_chio_maxsolsurvive->setObjectName(QString::fromUtf8("algo_chio_maxsolsurvive"));
        algo_chio_maxsolsurvive->setMinimumSize(QSize(90, 0));
        algo_chio_maxsolsurvive->setMinimum(1);
        algo_chio_maxsolsurvive->setMaximum(100000);
        algo_chio_maxsolsurvive->setValue(100);

        horizontalLayout_16->addWidget(algo_chio_maxsolsurvive);


        formLayout_7->setLayout(0, QFormLayout::FieldRole, horizontalLayout_16);

        label_21 = new QLabel(algo_chio_container);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_21);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_16);

        algo_chio_c0 = new QSpinBox(algo_chio_container);
        algo_chio_c0->setObjectName(QString::fromUtf8("algo_chio_c0"));
        algo_chio_c0->setMinimumSize(QSize(90, 0));
        algo_chio_c0->setMaximum(1000);
        algo_chio_c0->setValue(6);

        horizontalLayout_18->addWidget(algo_chio_c0);


        formLayout_7->setLayout(1, QFormLayout::FieldRole, horizontalLayout_18);

        label_22 = new QLabel(algo_chio_container);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_7->setWidget(2, QFormLayout::LabelRole, label_22);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_17);

        algo_chio_spreadingrate = new QDoubleSpinBox(algo_chio_container);
        algo_chio_spreadingrate->setObjectName(QString::fromUtf8("algo_chio_spreadingrate"));
        algo_chio_spreadingrate->setMinimumSize(QSize(90, 0));
        algo_chio_spreadingrate->setMinimum(0.000000000000000);
        algo_chio_spreadingrate->setMaximum(100.000000000000000);
        algo_chio_spreadingrate->setSingleStep(0.500000000000000);
        algo_chio_spreadingrate->setValue(0.050000000000000);

        horizontalLayout_19->addWidget(algo_chio_spreadingrate);


        formLayout_7->setLayout(2, QFormLayout::FieldRole, horizontalLayout_19);


        verticalLayout_3->addWidget(algo_chio_container);

        fgrid_container = new QGroupBox(mainPane);
        fgrid_container->setObjectName(QString::fromUtf8("fgrid_container"));
        verticalLayout_4 = new QVBoxLayout(fgrid_container);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 7, -1, 7);
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(-1, 0, -1, -1);
        label_13 = new QLabel(fgrid_container);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_13);

        fgrid_axis_linearity = new QLabel(fgrid_container);
        fgrid_axis_linearity->setObjectName(QString::fromUtf8("fgrid_axis_linearity"));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        fgrid_axis_linearity->setFont(font1);
        fgrid_axis_linearity->setStyleSheet(QString::fromUtf8("color: rgb(62, 62, 62);"));
        fgrid_axis_linearity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, fgrid_axis_linearity);


        verticalLayout_4->addLayout(formLayout_4);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, 0, -1, -1);
        invert_gain = new QCheckBox(fgrid_container);
        invert_gain->setObjectName(QString::fromUtf8("invert_gain"));

        verticalLayout_10->addWidget(invert_gain);

        fgrid_force_convert = new QCheckBox(fgrid_container);
        fgrid_force_convert->setObjectName(QString::fromUtf8("fgrid_force_convert"));

        verticalLayout_10->addWidget(fgrid_force_convert);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setContentsMargins(-1, 0, -1, -1);
        label_15 = new QLabel(fgrid_container);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_15);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        fgrid_avgbw = new QDoubleSpinBox(fgrid_container);
        fgrid_avgbw->setObjectName(QString::fromUtf8("fgrid_avgbw"));
        fgrid_avgbw->setMinimumSize(QSize(85, 0));
        fgrid_avgbw->setDecimals(6);
        fgrid_avgbw->setMinimum(1.000000000000000);
        fgrid_avgbw->setMaximum(5.000000000000000);
        fgrid_avgbw->setSingleStep(0.000001000000000);
        fgrid_avgbw->setValue(1.005000000000000);

        horizontalLayout_10->addWidget(fgrid_avgbw);


        formLayout_5->setLayout(0, QFormLayout::FieldRole, horizontalLayout_10);


        verticalLayout_10->addLayout(formLayout_5);


        verticalLayout_4->addLayout(verticalLayout_10);


        verticalLayout_3->addWidget(fgrid_container);

        algo_sgd_container = new QGroupBox(mainPane);
        algo_sgd_container->setObjectName(QString::fromUtf8("algo_sgd_container"));
        algo_sgd_container->setFlat(false);
        formLayout_8 = new QFormLayout(algo_sgd_container);
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        formLayout_8->setHorizontalSpacing(10);
        formLayout_8->setVerticalSpacing(4);
        formLayout_8->setContentsMargins(9, 7, 9, 7);
        label_24 = new QLabel(algo_sgd_container);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_24);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_19);

        sgd_lr_1 = new QDoubleSpinBox(algo_sgd_container);
        sgd_lr_1->setObjectName(QString::fromUtf8("sgd_lr_1"));
        sgd_lr_1->setMinimumSize(QSize(90, 0));
        sgd_lr_1->setMaximumSize(QSize(90, 16777215));
        sgd_lr_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        sgd_lr_1->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        sgd_lr_1->setAccelerated(false);
        sgd_lr_1->setProperty("showGroupSeparator", QVariant(false));
        sgd_lr_1->setDecimals(6);
        sgd_lr_1->setMinimum(0.000000000000000);
        sgd_lr_1->setMaximum(1.000000000000000);
        sgd_lr_1->setSingleStep(0.010000000000000);
        sgd_lr_1->setValue(0.010000000000000);

        horizontalLayout_21->addWidget(sgd_lr_1);


        formLayout_8->setLayout(0, QFormLayout::FieldRole, horizontalLayout_21);

        label_26 = new QLabel(algo_sgd_container);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        formLayout_8->setWidget(1, QFormLayout::LabelRole, label_26);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_20);

        sgd_ldr_1 = new QDoubleSpinBox(algo_sgd_container);
        sgd_ldr_1->setObjectName(QString::fromUtf8("sgd_ldr_1"));
        sgd_ldr_1->setMinimumSize(QSize(90, 0));
        sgd_ldr_1->setMaximumSize(QSize(90, 16777215));
        sgd_ldr_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        sgd_ldr_1->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        sgd_ldr_1->setAccelerated(false);
        sgd_ldr_1->setProperty("showGroupSeparator", QVariant(false));
        sgd_ldr_1->setDecimals(6);
        sgd_ldr_1->setMinimum(0.000000000000000);
        sgd_ldr_1->setMaximum(1.000000000000000);
        sgd_ldr_1->setSingleStep(0.010000000000000);
        sgd_ldr_1->setValue(0.999999000000000);

        horizontalLayout_22->addWidget(sgd_ldr_1);


        formLayout_8->setLayout(1, QFormLayout::FieldRole, horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_21);

        sgd_lr_2 = new QDoubleSpinBox(algo_sgd_container);
        sgd_lr_2->setObjectName(QString::fromUtf8("sgd_lr_2"));
        sgd_lr_2->setMinimumSize(QSize(90, 0));
        sgd_lr_2->setMaximumSize(QSize(90, 16777215));
        sgd_lr_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        sgd_lr_2->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        sgd_lr_2->setAccelerated(false);
        sgd_lr_2->setProperty("showGroupSeparator", QVariant(false));
        sgd_lr_2->setDecimals(6);
        sgd_lr_2->setMinimum(0.000000000000000);
        sgd_lr_2->setMaximum(1.000000000000000);
        sgd_lr_2->setSingleStep(0.010000000000000);
        sgd_lr_2->setValue(0.001000000000000);

        horizontalLayout_23->addWidget(sgd_lr_2);


        formLayout_8->setLayout(2, QFormLayout::FieldRole, horizontalLayout_23);

        label_29 = new QLabel(algo_sgd_container);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        formLayout_8->setWidget(2, QFormLayout::LabelRole, label_29);

        label_25 = new QLabel(algo_sgd_container);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_8->setWidget(3, QFormLayout::LabelRole, label_25);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_22);

        sgd_ldr_2 = new QDoubleSpinBox(algo_sgd_container);
        sgd_ldr_2->setObjectName(QString::fromUtf8("sgd_ldr_2"));
        sgd_ldr_2->setMinimumSize(QSize(90, 0));
        sgd_ldr_2->setMaximumSize(QSize(90, 16777215));
        sgd_ldr_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        sgd_ldr_2->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        sgd_ldr_2->setAccelerated(false);
        sgd_ldr_2->setProperty("showGroupSeparator", QVariant(false));
        sgd_ldr_2->setDecimals(6);
        sgd_ldr_2->setMinimum(0.000000000000000);
        sgd_ldr_2->setMaximum(1.000000000000000);
        sgd_ldr_2->setSingleStep(0.010000000000000);
        sgd_ldr_2->setValue(0.999999000000000);

        horizontalLayout_24->addWidget(sgd_ldr_2);


        formLayout_8->setLayout(3, QFormLayout::FieldRole, horizontalLayout_24);


        verticalLayout_3->addWidget(algo_sgd_container);

        widget = new QGroupBox(mainPane);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 30));
        formLayout_3 = new QFormLayout(widget);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setHorizontalSpacing(10);
        formLayout_3->setVerticalSpacing(3);
        formLayout_3->setContentsMargins(9, 7, 9, 7);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        adv_random_seed = new QLineEdit(widget);
        adv_random_seed->setObjectName(QString::fromUtf8("adv_random_seed"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(adv_random_seed->sizePolicy().hasHeightForWidth());
        adv_random_seed->setSizePolicy(sizePolicy);
        adv_random_seed->setMinimumSize(QSize(125, 0));
        adv_random_seed->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_3->addWidget(adv_random_seed);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        adv_prob_density_func = new QComboBox(widget);
        adv_prob_density_func->addItem(QString());
        adv_prob_density_func->addItem(QString());
        adv_prob_density_func->addItem(QString());
        adv_prob_density_func->setObjectName(QString::fromUtf8("adv_prob_density_func"));
        adv_prob_density_func->setMinimumSize(QSize(125, 0));

        horizontalLayout_4->addWidget(adv_prob_density_func);


        formLayout_3->setLayout(1, QFormLayout::FieldRole, horizontalLayout_4);

        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_14);

        label_16 = new QLabel(widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_16);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_10);

        rnd_pop_n = new QSpinBox(widget);
        rnd_pop_n->setObjectName(QString::fromUtf8("rnd_pop_n"));
        rnd_pop_n->setMinimumSize(QSize(60, 0));
        rnd_pop_n->setMinimum(3);
        rnd_pop_n->setMaximum(1000);
        rnd_pop_n->setValue(3);

        horizontalLayout_14->addWidget(rnd_pop_n);


        formLayout_3->setLayout(3, QFormLayout::FieldRole, horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_11);

        rnd_pop_k = new QSpinBox(widget);
        rnd_pop_k->setObjectName(QString::fromUtf8("rnd_pop_k"));
        rnd_pop_k->setMinimumSize(QSize(60, 0));
        rnd_pop_k->setMinimum(3);
        rnd_pop_k->setMaximum(1000);
        rnd_pop_k->setValue(5);

        horizontalLayout_15->addWidget(rnd_pop_k);


        formLayout_3->setLayout(2, QFormLayout::FieldRole, horizontalLayout_15);


        verticalLayout_3->addWidget(widget);

        previewSwitchLayout = new QWidget(mainPane);
        previewSwitchLayout->setObjectName(QString::fromUtf8("previewSwitchLayout"));
        previewButtonLayout = new QHBoxLayout(previewSwitchLayout);
        previewButtonLayout->setSpacing(6);
        previewButtonLayout->setObjectName(QString::fromUtf8("previewButtonLayout"));
        previewButtonLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        previewButtonLayout->addItem(horizontalSpacer);

        previewToggle = new QPushButton(previewSwitchLayout);
        previewToggle->setObjectName(QString::fromUtf8("previewToggle"));
        previewToggle->setCheckable(true);
        previewToggle->setChecked(false);

        previewButtonLayout->addWidget(previewToggle);


        verticalLayout_3->addWidget(previewSwitchLayout);

        footer = new QWidget(mainPane);
        footer->setObjectName(QString::fromUtf8("footer"));
        horizontalLayout_5 = new QHBoxLayout(footer);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 0, 0, 0);
        status_panel = new QWidget(footer);
        status_panel->setObjectName(QString::fromUtf8("status_panel"));
        status_container = new QHBoxLayout(status_panel);
        status_container->setObjectName(QString::fromUtf8("status_container"));
        status_container->setContentsMargins(0, 0, 0, 0);
        status_img = new QLabel(status_panel);
        status_img->setObjectName(QString::fromUtf8("status_img"));
        status_img->setMinimumSize(QSize(16, 16));
        status_img->setPixmap(QPixmap(QString::fromUtf8(":/img/success.svg")));
        status_img->setScaledContents(false);

        status_container->addWidget(status_img);

        status_label = new QLabel(status_panel);
        status_label->setObjectName(QString::fromUtf8("status_label"));

        status_container->addWidget(status_label);


        horizontalLayout_5->addWidget(status_panel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        buttonBox = new QDialogButtonBox(footer);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_5->addWidget(buttonBox);


        verticalLayout_3->addWidget(footer);


        verticalLayout_9->addLayout(verticalLayout_3);


        mainContainer->addWidget(mainPane);

        previewPlotContainer = new QFrame(CurveFittingDialog);
        previewPlotContainer->setObjectName(QString::fromUtf8("previewPlotContainer"));
        previewPlotContainer->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(208, 204, 201) "));
        previewPlotContainer->setFrameShape(QFrame::StyledPanel);
        previewPlotContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(previewPlotContainer);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 9, -1, -1);
        previewPlot = new QCustomPlot(previewPlotContainer);
        previewPlot->setObjectName(QString::fromUtf8("previewPlot"));

        verticalLayout_7->addWidget(previewPlot);


        mainContainer->addWidget(previewPlotContainer);


        verticalLayout_2->addLayout(mainContainer);

        QWidget::setTabOrder(projectLink, filePath);
        QWidget::setTabOrder(filePath, fileSelection);
        QWidget::setTabOrder(fileSelection, algorithmType);
        QWidget::setTabOrder(algorithmType, iterations);
        QWidget::setTabOrder(iterations, iterations_b);
        QWidget::setTabOrder(iterations_b, algo_de_probibound);
        QWidget::setTabOrder(algo_de_probibound, algo_chio_maxsolsurvive);
        QWidget::setTabOrder(algo_chio_maxsolsurvive, algo_chio_c0);
        QWidget::setTabOrder(algo_chio_c0, algo_chio_spreadingrate);
        QWidget::setTabOrder(algo_chio_spreadingrate, fgrid_avgbw);
        QWidget::setTabOrder(fgrid_avgbw, adv_random_seed);
        QWidget::setTabOrder(adv_random_seed, adv_prob_density_func);
        QWidget::setTabOrder(adv_prob_density_func, rnd_pop_k);
        QWidget::setTabOrder(rnd_pop_k, rnd_pop_n);

        retranslateUi(CurveFittingDialog);

        QMetaObject::connectSlotsByName(CurveFittingDialog);
    } // setupUi

    void retranslateUi(QDialog *CurveFittingDialog)
    {
        CurveFittingDialog->setWindowTitle(QCoreApplication::translate("CurveFittingDialog", "Curve fitting", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("CurveFittingDialog", "Peaking filter curve fitting algorithm", nullptr));
        label_2->setText(QCoreApplication::translate("CurveFittingDialog", "Provided by @james34602 (James Fung)", nullptr));
        projectLink->setText(QCoreApplication::translate("CurveFittingDialog", "View project", nullptr));
        label_3->setText(QCoreApplication::translate("CurveFittingDialog", "CSV dataset", nullptr));
        fileSelection->setText(QCoreApplication::translate("CurveFittingDialog", "...", nullptr));
        label_4->setText(QCoreApplication::translate("CurveFittingDialog", "Algorithm", nullptr));
        algorithmType->setItemText(0, QCoreApplication::translate("CurveFittingDialog", "Hybrid (SGD + differential evolution)", nullptr));
        algorithmType->setItemText(1, QCoreApplication::translate("CurveFittingDialog", "Hybrid (SGD + CHIO)", nullptr));
        algorithmType->setItemText(2, QCoreApplication::translate("CurveFittingDialog", "Reverse mode automatic differentiation (SGD)", nullptr));
        algorithmType->setItemText(3, QCoreApplication::translate("CurveFittingDialog", "Differential evolution", nullptr));
        algorithmType->setItemText(4, QCoreApplication::translate("CurveFittingDialog", "CHIO", nullptr));

        iteration_label_a->setText(QCoreApplication::translate("CurveFittingDialog", "Iterations", nullptr));
        iteration_label_b->setText(QCoreApplication::translate("CurveFittingDialog", "Iterations", nullptr));
        label_23->setText(QCoreApplication::translate("CurveFittingDialog", "Model complexity", nullptr));
        modelComplex->setSuffix(QCoreApplication::translate("CurveFittingDialog", "%", nullptr));
        iteration_label_c->setText(QCoreApplication::translate("CurveFittingDialog", "Iterations", nullptr));
        algo_de_container->setTitle(QString());
        label_17->setText(QCoreApplication::translate("CurveFittingDialog", "Probability of randomizing out-of-bound variables", nullptr));
        algo_chio_container->setTitle(QString());
        label_20->setText(QCoreApplication::translate("CurveFittingDialog", "Max. iterations to regenerate a variable", nullptr));
        label_21->setText(QCoreApplication::translate("CurveFittingDialog", "Initial spreading rate", nullptr));
        label_22->setText(QCoreApplication::translate("CurveFittingDialog", "Spreading rate", nullptr));
        fgrid_container->setTitle(QString());
        label_13->setText(QCoreApplication::translate("CurveFittingDialog", "Current X axis linearity:", nullptr));
        fgrid_axis_linearity->setText(QCoreApplication::translate("CurveFittingDialog", "No file loaded", nullptr));
        invert_gain->setText(QCoreApplication::translate("CurveFittingDialog", "Invert gain", nullptr));
        fgrid_force_convert->setText(QCoreApplication::translate("CurveFittingDialog", "Convert into octave/log frequency grid", nullptr));
        label_15->setText(QCoreApplication::translate("CurveFittingDialog", "Octave smoothing", nullptr));
        algo_sgd_container->setTitle(QString());
        label_24->setText(QCoreApplication::translate("CurveFittingDialog", "Learning rate (Stage 1)", nullptr));
        sgd_lr_1->setSuffix(QString());
        label_26->setText(QCoreApplication::translate("CurveFittingDialog", "Learning decay rate (Stage 1)", nullptr));
        sgd_ldr_1->setSuffix(QString());
        sgd_lr_2->setSuffix(QString());
        label_29->setText(QCoreApplication::translate("CurveFittingDialog", "Learning rate (Stage 2)", nullptr));
        label_25->setText(QCoreApplication::translate("CurveFittingDialog", "Learning decay rate (Stage 2)", nullptr));
        sgd_ldr_2->setSuffix(QString());
        label_5->setText(QCoreApplication::translate("CurveFittingDialog", "Random seed", nullptr));
        label_6->setText(QCoreApplication::translate("CurveFittingDialog", "Probability density function", nullptr));
        adv_prob_density_func->setItemText(0, QCoreApplication::translate("CurveFittingDialog", "Normal distribution", nullptr));
        adv_prob_density_func->setItemText(1, QCoreApplication::translate("CurveFittingDialog", "Triangular distribution", nullptr));
        adv_prob_density_func->setItemText(2, QCoreApplication::translate("CurveFittingDialog", "Raised-cosine distribution", nullptr));

        label_14->setText(QCoreApplication::translate("CurveFittingDialog", "K (Population)", nullptr));
        label_16->setText(QCoreApplication::translate("CurveFittingDialog", "N (Population)", nullptr));
        previewToggle->setText(QCoreApplication::translate("CurveFittingDialog", "Preview >>", nullptr));
        status_img->setText(QString());
        status_label->setText(QCoreApplication::translate("CurveFittingDialog", "364 rows loaded", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CurveFittingDialog: public Ui_CurveFittingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVEFITTINGDIALOG_H
