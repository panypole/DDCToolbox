/********************************************************************************
** Form generated from reading UI file 'AutoEqSelector.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOEQSELECTOR_H
#define UI_AUTOEQSELECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AutoEQSelector
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *searchLayout;
    QLineEdit *searchInput;
    QPushButton *search;
    QListWidget *listWidget;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *title;
    QLabel *group;
    QLabel *picture;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AutoEQSelector)
    {
        if (AutoEQSelector->objectName().isEmpty())
            AutoEQSelector->setObjectName(QString::fromUtf8("AutoEQSelector"));
        AutoEQSelector->resize(936, 459);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        AutoEQSelector->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AutoEQSelector);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        searchLayout = new QHBoxLayout();
        searchLayout->setObjectName(QString::fromUtf8("searchLayout"));
        searchLayout->setContentsMargins(-1, 0, -1, -1);
        searchInput = new QLineEdit(AutoEQSelector);
        searchInput->setObjectName(QString::fromUtf8("searchInput"));

        searchLayout->addWidget(searchInput);

        search = new QPushButton(AutoEQSelector);
        search->setObjectName(QString::fromUtf8("search"));

        searchLayout->addWidget(search);


        verticalLayout_3->addLayout(searchLayout);

        listWidget = new QListWidget(AutoEQSelector);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_3->addWidget(listWidget);


        horizontalLayout->addLayout(verticalLayout_3);

        frame = new QFrame(AutoEQSelector);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        title = new QLabel(frame);
        title->setObjectName(QString::fromUtf8("title"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        title->setFont(font);

        verticalLayout_2->addWidget(title);

        group = new QLabel(frame);
        group->setObjectName(QString::fromUtf8("group"));
        group->setWordWrap(true);

        verticalLayout_2->addWidget(group);

        picture = new QLabel(frame);
        picture->setObjectName(QString::fromUtf8("picture"));
        picture->setMaximumSize(QSize(520, 16777215));
        picture->setScaledContents(false);
        picture->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(picture);

        verticalLayout_2->setStretch(2, 1);

        horizontalLayout->addWidget(frame);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(AutoEQSelector);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AutoEQSelector);
        QObject::connect(buttonBox, SIGNAL(accepted()), AutoEQSelector, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AutoEQSelector, SLOT(reject()));

        search->setDefault(true);


        QMetaObject::connectSlotsByName(AutoEQSelector);
    } // setupUi

    void retranslateUi(QDialog *AutoEQSelector)
    {
        AutoEQSelector->setWindowTitle(QCoreApplication::translate("AutoEQSelector", "AutoEQ Database", nullptr));
        search->setText(QCoreApplication::translate("AutoEQSelector", "Search", nullptr));
        title->setText(QCoreApplication::translate("AutoEQSelector", "No headphone selected", nullptr));
        group->setText(QCoreApplication::translate("AutoEQSelector", "Please select your headphone and press 'Ok' to accept.\n"
"This will override your current configuration.", nullptr));
        picture->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AutoEQSelector: public Ui_AutoEQSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOEQSELECTOR_H
