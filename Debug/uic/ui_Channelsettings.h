/********************************************************************************
** Form generated from reading UI file 'Channelsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANNELSETTINGS_H
#define UI_CHANNELSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Channelsettings
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Channelsettings)
    {
        if (Channelsettings->objectName().isEmpty())
            Channelsettings->setObjectName(QString::fromUtf8("Channelsettings"));
        Channelsettings->resize(1249, 662);
        verticalLayout_2 = new QVBoxLayout(Channelsettings);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(Channelsettings);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(Channelsettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(Channelsettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(Channelsettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(Channelsettings);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(Channelsettings);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout->addWidget(label_6);

        label_7 = new QLabel(Channelsettings);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setTextFormat(Qt::AutoText);

        horizontalLayout->addWidget(label_7);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(Channelsettings);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(Channelsettings);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);


        retranslateUi(Channelsettings);

        QMetaObject::connectSlotsByName(Channelsettings);
    } // setupUi

    void retranslateUi(QWidget *Channelsettings)
    {
        Channelsettings->setWindowTitle(QApplication::translate("Channelsettings", "Channelsettings", nullptr));
        label->setText(QApplication::translate("Channelsettings", "\351\200\232\351\201\223\350\256\276\347\275\256\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Channelsettings", "\345\220\215\347\247\260\357\274\232", nullptr));
        label_3->setText(QApplication::translate("Channelsettings", "1", nullptr));
        label_4->setText(QApplication::translate("Channelsettings", "\345\234\260\345\235\200\357\274\232", nullptr));
        label_5->setText(QApplication::translate("Channelsettings", "1", nullptr));
        label_6->setText(QApplication::translate("Channelsettings", "\344\273\216\347\253\231\347\274\226\345\217\267", nullptr));
        label_7->setText(QApplication::translate("Channelsettings", "1", nullptr));
        pushButton->setText(QApplication::translate("Channelsettings", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Channelsettings: public Ui_Channelsettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNELSETTINGS_H
