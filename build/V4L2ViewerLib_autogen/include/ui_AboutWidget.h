/********************************************************************************
** Form generated from reading UI file 'AboutWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWIDGET_H
#define UI_ABOUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWidget
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *m_versionLabel;
    QFrame *line;

    void setupUi(QWidget *AboutWidget)
    {
        if (AboutWidget->objectName().isEmpty())
            AboutWidget->setObjectName(QString::fromUtf8("AboutWidget"));
        AboutWidget->resize(450, 650);
        AboutWidget->setMinimumSize(QSize(450, 650));
        AboutWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background: transparent;\n"
"border:none;\n"
"color:rgb(190,190,190);\n"
"font-size:14px;\n"
"}\n"
"QAbstractScrollArea::corner {\n"
"background: transparent;\n"
"}\n"
"QScrollBar:vertical {\n"
"background: transparent;\n"
"width: 13px;\n"
"margin: 0px 0 0px 0;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"background: gray;\n"
"min-height: 13px;\n"
"border-radius:6px;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"border: none;\n"
"background: none;\n"
"height: 0;\n"
"subcontrol-position: top;\n"
"subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"border: none;\n"
"background: none;\n"
"height: 0;\n"
"subcontrol-position: top;\n"
"subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"border: none;\n"
"width: 0;\n"
"height: 0;\n"
"background: none;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"background: none;\n"
"}\n"
"QScrollBar:horizontal {\n"
"background: transparent;\n"
"height: 13px;\n"
"mar"
                        "gin: 0px 0 0px 0;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"background: gray;\n"
"min-width: 13px;\n"
"border-radius:6px;\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"border: none;\n"
"background: none;\n"
"height: 0;\n"
"subcontrol-position: left;\n"
"subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:horizontal {\n"
"border: none;\n"
"background: none;\n"
"width: 0;\n"
"subcontrol-position: left;\n"
"subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::up-arrow:horizontal, QScrollBar::down-arrow:horizontal {\n"
"border: none;\n"
"width: 0;\n"
"height: 0;\n"
"background: none;\n"
"}\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"background: none;\n"
"}"));
        gridLayout = new QGridLayout(AboutWidget);
        gridLayout->setSpacing(1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(1, 1, 1, 1);
        scrollArea = new QScrollArea(AboutWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 435, 925));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8(""));
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);
        label->setTextInteractionFlags(Qt::TextBrowserInteraction);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame_2, 2, 0, 1, 1);

        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        gridLayout_5->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        m_versionLabel = new QLabel(frame);
        m_versionLabel->setObjectName(QString::fromUtf8("m_versionLabel"));
        m_versionLabel->setWordWrap(true);
        m_versionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(m_versionLabel, 2, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName(QString::fromUtf8("line"));
        line->setStyleSheet(QString::fromUtf8("border-bottom:1px solid grey;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(AboutWidget);

        QMetaObject::connectSlotsByName(AboutWidget);
    } // setupUi

    void retranslateUi(QWidget *AboutWidget)
    {
        AboutWidget->setWindowTitle(QApplication::translate("AboutWidget", "Form", nullptr));
        label->setText(QApplication::translate("AboutWidget", "<img src=\":/V4L2Viewer/Qt_logo_2016.png\" width=\"128\" height=\"94\" />This program uses Qt version 5.13.2 <br><br>\n"
"Qt is a C++ toolkit for cross-platform application development. <br><br>\n"
"Qt provides single-source portability across all major desktop operating systems. \n"
"It is also available for embedded Linux and other embedded and mobile operating systems. <br><br>\n"
"Qt is available under multiple licensing options designed to accommodate the needs of our various users. <br><br>\n"
"Qt licensed under our commercial license agreement is appropriate for development of proprietary/commercial \n"
"software where you do not want to share any source code with third parties or otherwise cannot comply \n"
"with the terms of GNU (L)GPL.<br><br>\n"
"Qt licensed under GNU (L)GPL is appropriate for the development of Qt applications provided you can comply \n"
"with the terms and conditions of the respective licenses.<br><br>\n"
"Please see <a href=\"https://www.qt.io/licensing/\">qt.io/licensing</a> for"
                        " and overview of Qt licensing.<br><br>\n"
"Copyright (C) 2020 The Qt Company Ltd and other contributors.<br><br>\n"
"Qt and the Qt logo are trademarks of The Qt Company Ltd.<br><br>\n"
"Qt is The Qt Company Ltd product developed as an open source project. See <a href=\"https://www.qt.io/\">qt.io</a> for more information.", nullptr));
        label_4->setText(QApplication::translate("AboutWidget", "Copyright (c) Allied Vision Technologies 2012-2022", nullptr));
        label_2->setText(QApplication::translate("AboutWidget", "<img src=\":/V4L2Viewer/icon_camera_256.png\" width=\"128\" height=\"130\"/><br>V4L2 Viewer is an example application using the V4L2 interface.\n"
"", nullptr));
        m_versionLabel->setText(QApplication::translate("AboutWidget", "<br>Version: 0.0.0.0<br>\n"
"Git Commit: 0000<br>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutWidget: public Ui_AboutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWIDGET_H
