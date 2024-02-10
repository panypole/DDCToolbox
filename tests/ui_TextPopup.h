/********************************************************************************
** Form generated from reading UI file 'TextPopup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTPOPUP_H
#define UI_TEXTPOPUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextPopup
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *textBrowser;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TextPopup)
    {
        if (TextPopup->objectName().isEmpty())
            TextPopup->setObjectName(QString::fromUtf8("TextPopup"));
        TextPopup->resize(390, 255);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        TextPopup->setWindowIcon(icon);
        TextPopup->setModal(true);
        verticalLayout = new QVBoxLayout(TextPopup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(TextPopup);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(1);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 370, 208));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: rgb(250, 250, 250)\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 6, -1, 6);
        textBrowser = new QLabel(scrollAreaWidgetContents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setTextFormat(Qt::RichText);
        textBrowser->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        textBrowser->setWordWrap(true);

        verticalLayout_2->addWidget(textBrowser);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(TextPopup);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TextPopup);
        QObject::connect(buttonBox, SIGNAL(accepted()), TextPopup, SLOT(accept()));

        QMetaObject::connectSlotsByName(TextPopup);
    } // setupUi

    void retranslateUi(QDialog *TextPopup)
    {
        TextPopup->setWindowTitle(QCoreApplication::translate("TextPopup", "DDC Toolbox", nullptr));
        textBrowser->setText(QCoreApplication::translate("TextPopup", "Content unavailable", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextPopup: public Ui_TextPopup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTPOPUP_H
