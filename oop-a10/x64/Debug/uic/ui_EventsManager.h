/********************************************************************************
** Form generated from reading UI file 'EventsManager.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTSMANAGER_H
#define UI_EVENTSMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventsManagerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EventsManagerClass)
    {
        if (EventsManagerClass->objectName().isEmpty())
            EventsManagerClass->setObjectName("EventsManagerClass");
        EventsManagerClass->resize(600, 400);
        menuBar = new QMenuBar(EventsManagerClass);
        menuBar->setObjectName("menuBar");
        EventsManagerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EventsManagerClass);
        mainToolBar->setObjectName("mainToolBar");
        EventsManagerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(EventsManagerClass);
        centralWidget->setObjectName("centralWidget");
        EventsManagerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(EventsManagerClass);
        statusBar->setObjectName("statusBar");
        EventsManagerClass->setStatusBar(statusBar);

        retranslateUi(EventsManagerClass);

        QMetaObject::connectSlotsByName(EventsManagerClass);
    } // setupUi

    void retranslateUi(QMainWindow *EventsManagerClass)
    {
        EventsManagerClass->setWindowTitle(QCoreApplication::translate("EventsManagerClass", "EventsManager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventsManagerClass: public Ui_EventsManagerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTSMANAGER_H
