/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpinBox *mySpinBox;
    QPushButton *GuessButon;
    QPushButton *startOverButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(512, 251);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 70, 131, 16));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 120, 451, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mySpinBox = new QSpinBox(widget);
        mySpinBox->setObjectName("mySpinBox");

        horizontalLayout->addWidget(mySpinBox);

        GuessButon = new QPushButton(widget);
        GuessButon->setObjectName("GuessButon");

        horizontalLayout->addWidget(GuessButon);

        startOverButton = new QPushButton(widget);
        startOverButton->setObjectName("startOverButton");

        horizontalLayout->addWidget(startOverButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "MyApp", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Guess my number", nullptr));
        GuessButon->setText(QCoreApplication::translate("Widget", "Guess", nullptr));
        startOverButton->setText(QCoreApplication::translate("Widget", "Start Over", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
