/********************************************************************************
** Form generated from reading UI file 'CustomDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMDIALOG_H
#define UI_CUSTOMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_OkButton;
    QLabel *m_Content;
    QLabel *m_Title;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QWidget *CustomDialog)
    {
        if (CustomDialog->objectName().isEmpty())
            CustomDialog->setObjectName(QString::fromUtf8("CustomDialog"));
        CustomDialog->resize(279, 418);
        CustomDialog->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x1:1, y1:6, stop: 0.9#39393b, stop:1#49494b);\n"
"color:white;"));
        gridLayout_2 = new QGridLayout(CustomDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        m_OkButton = new QPushButton(CustomDialog);
        m_OkButton->setObjectName(QString::fromUtf8("m_OkButton"));
        m_OkButton->setMinimumSize(QSize(70, 32));
        m_OkButton->setCursor(QCursor(Qt::PointingHandCursor));
        m_OkButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(21,21,21);\n"
"border: 1px solid rgb(94, 94, 94);\n"
"background-color:rgb(125,129,133);\n"
"min-height:30px;\n"
"border-radius:6px;\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
" background-color: rgba(92, 93, 95, 80%);\n"
" color: rgb(49, 49, 49);\n"
" border: 1px solid rgb(59, 59, 59);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:rgb(164, 168, 172);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:rgb(166, 166, 166);\n"
"}"));

        gridLayout->addWidget(m_OkButton, 4, 1, 1, 1);

        m_Content = new QLabel(CustomDialog);
        m_Content->setObjectName(QString::fromUtf8("m_Content"));
        m_Content->setStyleSheet(QString::fromUtf8("background:transparent;"));
        m_Content->setAlignment(Qt::AlignCenter);
        m_Content->setWordWrap(true);

        gridLayout->addWidget(m_Content, 2, 0, 1, 3);

        m_Title = new QLabel(CustomDialog);
        m_Title->setObjectName(QString::fromUtf8("m_Title"));
        m_Title->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font-weight:bold;"));
        m_Title->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Title, 0, 0, 1, 3);

        line = new QFrame(CustomDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setStyleSheet(QString::fromUtf8("background-color:rgb(99,99,99);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 3);

        line_2 = new QFrame(CustomDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setStyleSheet(QString::fromUtf8("background-color:rgb(99,99,99);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 0, 1, 3);

        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setRowStretch(4, 1);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(CustomDialog);

        QMetaObject::connectSlotsByName(CustomDialog);
    } // setupUi

    void retranslateUi(QWidget *CustomDialog)
    {
        CustomDialog->setWindowTitle(QApplication::translate("CustomDialog", "CustomDialog", nullptr));
        m_OkButton->setText(QApplication::translate("CustomDialog", "OK", nullptr));
        m_Content->setText(QApplication::translate("CustomDialog", "Content", nullptr));
        m_Title->setText(QApplication::translate("CustomDialog", "Title", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomDialog: public Ui_CustomDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMDIALOG_H
