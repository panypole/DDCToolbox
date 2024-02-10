/********************************************************************************
** Form generated from reading UI file 'StabilityReport.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STABILITYREPORT_H
#define UI_STABILITYREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StabilityReport
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *summary;
    QTableWidget *issueTable;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *close;

    void setupUi(QDialog *StabilityReport)
    {
        if (StabilityReport->objectName().isEmpty())
            StabilityReport->setObjectName(QString::fromUtf8("StabilityReport"));
        StabilityReport->resize(631, 300);
        verticalLayout = new QVBoxLayout(StabilityReport);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        summary = new QLabel(StabilityReport);
        summary->setObjectName(QString::fromUtf8("summary"));
        QFont font;
        font.setPointSize(11);
        summary->setFont(font);

        verticalLayout->addWidget(summary);

        issueTable = new QTableWidget(StabilityReport);
        if (issueTable->columnCount() < 3)
            issueTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        issueTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        issueTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        issueTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        issueTable->setObjectName(QString::fromUtf8("issueTable"));
        issueTable->setFocusPolicy(Qt::NoFocus);
        issueTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        issueTable->setProperty("showDropIndicator", QVariant(false));
        issueTable->setSelectionMode(QAbstractItemView::NoSelection);
        issueTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        issueTable->setCornerButtonEnabled(false);
        issueTable->horizontalHeader()->setCascadingSectionResizes(false);
        issueTable->horizontalHeader()->setMinimumSectionSize(32);
        issueTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        issueTable->horizontalHeader()->setStretchLastSection(true);
        issueTable->verticalHeader()->setVisible(true);

        verticalLayout->addWidget(issueTable);

        label = new QLabel(StabilityReport);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close = new QPushButton(StabilityReport);
        close->setObjectName(QString::fromUtf8("close"));

        horizontalLayout->addWidget(close);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(StabilityReport);
        QObject::connect(close, SIGNAL(clicked()), StabilityReport, SLOT(reject()));

        close->setDefault(true);


        QMetaObject::connectSlotsByName(StabilityReport);
    } // setupUi

    void retranslateUi(QDialog *StabilityReport)
    {
        StabilityReport->setWindowTitle(QCoreApplication::translate("StabilityReport", "Stability Report", nullptr));
        summary->setText(QCoreApplication::translate("StabilityReport", "1 issue(s) found", nullptr));
        QTableWidgetItem *___qtablewidgetitem = issueTable->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QCoreApplication::translate("StabilityReport", "Filter", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = issueTable->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("StabilityReport", "Issue", nullptr));
        label->setText(QCoreApplication::translate("StabilityReport", "You cannot export VDC files with unstable filters. Please correct these errors before proceeding.", nullptr));
        close->setText(QCoreApplication::translate("StabilityReport", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StabilityReport: public Ui_StabilityReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STABILITYREPORT_H
