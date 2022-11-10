/********************************************************************************
** Form generated from reading UI file 'ControlsHolderWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLSHOLDERWIDGET_H
#define UI_CONTROLSHOLDERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlsHolderWidget
{
public:
    QGridLayout *gridLayout;
    QListWidget *m_ControlsList;
    QLabel *m_DescriptionLabel;

    void setupUi(QWidget *ControlsHolderWidget)
    {
        if (ControlsHolderWidget->objectName().isEmpty())
            ControlsHolderWidget->setObjectName(QString::fromUtf8("ControlsHolderWidget"));
        ControlsHolderWidget->resize(498, 501);
        ControlsHolderWidget->setMinimumSize(QSize(0, 0));
        ControlsHolderWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"  background-color: qlineargradient(x1:0, y1:0, x1:1, y1:6, stop: 0.9#39393b, stop:1#39393b);\n"
"  border:none;\n"
"  color:white;\n"
"}\n"
"\n"
"QListWidget{\n"
"padding:15px;\n"
"}\n"
"\n"
"QListWidget::item:selected\n"
"{\n"
"background: transparent;\n"
"border:none;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"  background: transparent;\n"
"  width: 13px;\n"
"  margin: 0px 0 0px 0;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"  background: gray;\n"
"  min-height: 13px;\n"
"  border-radius:6px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"  border: none;\n"
"  background: none;\n"
"  height: 0;\n"
"  subcontrol-position: top;\n"
"  subcontrol-origin: margin;\n"
"  }\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"  border: none;\n"
"  background: none;\n"
"  height: 0;\n"
"  subcontrol-position: top;\n"
"  subcontrol-origin: margin;\n"
"  }\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"  border: none;\n"
"  width: 0;\n"
"  height: 0;\n"
"  background: none;\n"
""
                        "}\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"  background: none;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"  background: transparent;\n"
"  height: 13px;\n"
"  margin: 0px 0 0px 0;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"  background: gray;\n"
"  min-width: 13px;\n"
"  border-radius:6px;\n"
"  }\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"  border: none;\n"
"  background: none;\n"
"  height: 0;\n"
"  subcontrol-position: left;\n"
"  subcontrol-origin: margin;\n"
"  }\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"  border: none;\n"
"  background: none;\n"
"  width: 0;\n"
"  subcontrol-position: left;\n"
"  subcontrol-origin: margin;\n"
"  }\n"
"\n"
"QScrollBar::up-arrow:horizontal, QScrollBar::down-arrow:horizontal {\n"
"  border: none;\n"
"  width: 0;\n"
"  height: 0;\n"
"  background: none;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"  background: none;\n"
"}\n"
"\n"
"QPushButton{\n"
"  color:rgb(21,21,21);\n"
"  border"
                        ": 1px solid rgb(94, 94, 94);\n"
"  background-color:rgb(125,129,133);\n"
"  min-height:30px;\n"
"  border-radius:6px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"  background-color:rgb(164, 168, 172);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"  background-color:rgb(166, 166, 166);\n"
"}\n"
"\n"
"QLineEdit {\n"
"background:transparent;\n"
"border: none;\n"
"border-radius:0px;\n"
"}\n"
"\n"
"QLineEdit::focus {\n"
"border-bottom: 1px solid gray;\n"
"}\n"
"\n"
"QLabel{\n"
"  background:none;\n"
"}\n"
"\n"
"QListWidget{\n"
"  background-color:rgb(45,45,45);\n"
"  border:1px solid rgb(25,25,25);\n"
"  border-radius:4px;\n"
"}\n"
"\n"
"QSlider{\n"
"background:transparent;\n"
"}\n"
"\n"
"QSlider::groove:horizontal{\n"
"border: none;\n"
"background: rgb(41,41,41);\n"
"height:1px;\n"
"border-bottom:1px solid rgb(51,51,51);\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: rgb(114,114,114);\n"
"width: 12px;\n"
"height: 18px;\n"
"border-radius: 2px;\n"
"margin: -5px 0; \n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
""
                        "    background: rgb(0, 100, 207);\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal::disabled{\n"
"    background: rgb(107, 155, 209);\n"
"}\n"
"\n"
"QSlider::groove:horizontal::disabled{\n"
"border: none;\n"
"background: rgb(81,81,81);\n"
"height:1px;\n"
"border-bottom:1px solid rgb(71,71,71);\n"
"}\n"
"\n"
"QComboBox {\n"
"background:transparent;\n"
"min-width:80px;\n"
"}\n"
"\n"
"QComboBox::drop-down:button {\n"
"background:transparent;\n"
"width:15px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"image: url(:/V4L2Viewer/triangle-copy-3.png);\n"
"}\n"
"\n"
"QComboBox:on { \n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
""));
        gridLayout = new QGridLayout(ControlsHolderWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        m_ControlsList = new QListWidget(ControlsHolderWidget);
        m_ControlsList->setObjectName(QString::fromUtf8("m_ControlsList"));
        m_ControlsList->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(m_ControlsList, 0, 0, 1, 1);

        m_DescriptionLabel = new QLabel(ControlsHolderWidget);
        m_DescriptionLabel->setObjectName(QString::fromUtf8("m_DescriptionLabel"));
        m_DescriptionLabel->setStyleSheet(QString::fromUtf8("background-color:rgb(45,45,45);\n"
"border:1px solid rgb(25,25,25);\n"
"border-radius:4px;\n"
"padding:5px;"));
        m_DescriptionLabel->setWordWrap(true);

        gridLayout->addWidget(m_DescriptionLabel, 1, 0, 1, 1);


        retranslateUi(ControlsHolderWidget);

        QMetaObject::connectSlotsByName(ControlsHolderWidget);
    } // setupUi

    void retranslateUi(QWidget *ControlsHolderWidget)
    {
        ControlsHolderWidget->setWindowTitle(QApplication::translate("ControlsHolderWidget", "All Features Window", nullptr));
        m_DescriptionLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ControlsHolderWidget: public Ui_ControlsHolderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLSHOLDERWIDGET_H
