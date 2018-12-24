/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QStringLiteral("Principal"));
        Principal->resize(400, 300);
        menuBar = new QMenuBar(Principal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Principal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Principal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Principal->addToolBar(mainToolBar);
        centralWidget = new QWidget(Principal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Principal->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Principal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Principal->setStatusBar(statusBar);

        retranslateUi(Principal);

        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QApplication::translate("Principal", "Principal", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
