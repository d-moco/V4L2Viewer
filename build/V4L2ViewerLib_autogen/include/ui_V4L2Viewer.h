/********************************************************************************
** Form generated from reading UI file 'V4L2Viewer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_V4L2VIEWER_H
#define UI_V4L2VIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>
#include "CustomGraphicsView.h"

QT_BEGIN_NAMESPACE

class Ui_V4L2ViewerClass
{
public:
    QAction *m_MenuClose;
    QAction *m_MenuOpenNextViewer;
    QAction *actionBuffer_count;
    QAction *m_TitleNonBlockingMode;
    QAction *m_TitleClearOutputListbox;
    QAction *m_TitleLogtofile;
    QAction *m_TitleToggleStreamRandom;
    QAction *m_TitleEnableMessageListbox;
    QAction *m_TitleEnableExtendedControls;
    QAction *m_TitleCorrectIncomingRAW10Image;
    QAction *actionSave_Options;
    QAction *m_TitleLangGerman;
    QAction *m_TitleLangEnglish;
    QWidget *centralWidget;
    QGridLayout *gridLayout_14;
    QWidget *m_InfoWidget;
    QGridLayout *gridLayout_13;
    QCheckBox *m_camerasListCheckBox;
    QLabel *m_FramesPerSecondLabel;
    QLabel *m_FrameIdLabel;
    QSpacerItem *horizontalSpacer_10;
    QSplitter *m_Splitter1;
    QWidget *m_LeftPanelWidget;
    QGridLayout *gridLayout_12;
    QPushButton *m_OpenCloseButton;
    QListWidget *m_CamerasListBox;
    QSplitter *m_Splitter2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_4;
    CustomGraphicsView *m_ImageView;
    QWidget *m_ControlWidget;
    QGridLayout *gridLayout_11;
    QCheckBox *m_FlipHorizontalCheckBox;
    QCheckBox *m_FlipVerticalCheckBox;
    QLabel *m_ZoomLabel;
    QPushButton *m_SaveImageButton;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *m_ZoomFitButton;
    QPushButton *m_ZoomOutButton;
    QPushButton *m_StopButton;
    QPushButton *m_ZoomInButton;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *m_DisplayImagesCheckBox;
    QPushButton *m_StartButton;
    QFrame *m_ImageControlFrame;
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_11;
    QFrame *frameSecond;
    QGridLayout *gridLayout_16;
    QGridLayout *gridLayout_6;
    QLabel *m_labelWhiteBalanceAuto;
    QSlider *m_sliderGamma;
    QLineEdit *m_edBrightness;
    QLineEdit *m_edGamma;
    QLabel *m_labelGamma;
    QSlider *m_sliderBrightness;
    QFrame *line_9;
    QLabel *m_labelBrightness;
    QSpacerItem *verticalSpacer_6;
    QCheckBox *m_chkContWhiteBalance;
    QFrame *frameFifth;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_2;
    QPushButton *m_AllControlsButton;
    QLabel *m_labelAllFeatures;
    QSpacerItem *verticalSpacer_7;
    QFrame *frameFirst;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_5;
    QLabel *m_labelGain;
    QSlider *m_sliderExposure;
    QSlider *m_sliderGain;
    QCheckBox *m_chkAutoGain;
    QLabel *m_labelExposure;
    QLabel *m_labelExposureAuto;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *m_edGain;
    QLineEdit *m_edExposure;
    QLabel *m_labelGainAuto;
    QFrame *line_4;
    QCheckBox *m_chkAutoExposure;
    QFrame *frameThird;
    QGridLayout *gridLayout_17;
    QGridLayout *gridLayout_3;
    QLineEdit *m_edFrameRate;
    QFrame *line_6;
    QSpacerItem *verticalSpacer_8;
    QComboBox *m_pixelFormats;
    QLabel *m_labelFrameRate;
    QCheckBox *m_chkFrameRateAuto;
    QLabel *m_labelFrameRateAuto;
    QLabel *m_labelPixelFormats;
    QLabel *m_labelFrameSizes;
    QComboBox *m_frameSizes;
    QFrame *frameFourth;
    QGridLayout *gridLayout_18;
    QGridLayout *gridLayout;
    QWidget *m_cropWidget;
    QGridLayout *gridLayout_19;
    QGridLayout *gridLayout_10;
    QLabel *m_CropLabel;
    QLabel *m_labelCropXOffset;
    QLineEdit *m_edCropXOffset;
    QLabel *m_labelCropWidth;
    QLineEdit *m_edCropWidth;
    QLabel *m_labelCropHeight;
    QLineEdit *m_edCropHeight;
    QLineEdit *m_edCropYOffset;
    QLabel *m_labelCropYOffset;
    QLabel *m_labelWidth;
    QLineEdit *m_edWidth;
    QLabel *m_labelHeight;
    QLineEdit *m_edHeight;
    QSpacerItem *verticalSpacer_3;
    QFrame *line;
    QMenuBar *menuBar;
    QMenu *m_MenuFile;
    QMenu *m_MenuAbout;
    QMenu *m_MenuLang;
    QMenu *m_MenuOptions;
    QDockWidget *m_allFeaturesDockWidget;
    QWidget *dockWidgetContents_3;

    void setupUi(QMainWindow *V4L2ViewerClass)
    {
        if (V4L2ViewerClass->objectName().isEmpty())
            V4L2ViewerClass->setObjectName(QString::fromUtf8("V4L2ViewerClass"));
        V4L2ViewerClass->resize(1227, 804);
        V4L2ViewerClass->setMinimumSize(QSize(0, 480));
        V4L2ViewerClass->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/V4L2Viewer/icon_camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        V4L2ViewerClass->setWindowIcon(icon);
        V4L2ViewerClass->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color: rgb(103, 103, 103);\n"
"}\n"
"\n"
"QWidget{\n"
"background-color: rgb(49, 49, 49);\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"     background: transparent;\n"
"     width: 13px;\n"
"     margin: 0px 0 0px 0;\n"
" }\n"
" QScrollBar::handle:vertical {\n"
"     background: gray;\n"
"     min-height: 13px;\n"
"	 border-radius:6px;\n"
" }\n"
" QScrollBar::add-line:vertical {\n"
"     border: none;\n"
"     background: none;\n"
"     height: 0;\n"
"     subcontrol-position: top;\n"
"     subcontrol-origin: margin;\n"
" }\n"
"\n"
" QScrollBar::sub-line:vertical {\n"
"     border: none;\n"
"     background: none;\n"
"     height: 0;\n"
"     subcontrol-position: top;\n"
"     subcontrol-origin: margin;\n"
" }\n"
"\n"
" QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"     border: none;\n"
"     width: 0;\n"
"     height: 0;\n"
"     background: none;\n"
" }\n"
"\n"
" QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"     background: none;\n"
" }\n"
""
                        "\n"
"\n"
"QScrollBar:horizontal {\n"
"     background: transparent;\n"
"     height: 13px;\n"
"     margin: 0px 0 0px 0;\n"
" }\n"
" QScrollBar::handle:horizontal {\n"
"     background: gray;\n"
"     min-width: 13px;\n"
"	 border-radius:6px;\n"
" }\n"
" QScrollBar::add-line:horizontal {\n"
"     border: none;\n"
"     background: none;\n"
"     height: 0;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
" }\n"
"\n"
" QScrollBar::sub-line:horizontal {\n"
"     border: none;\n"
"     background: none;\n"
"     width: 0;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
" }\n"
"\n"
" QScrollBar::up-arrow:horizontal, QScrollBar::down-arrow:horizontal {\n"
"     border: none;\n"
"     width: 0;\n"
"     height: 0;\n"
"     background: none;\n"
" }\n"
"\n"
" QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"     background: none;\n"
" }\n"
"\n"
"QPushButton{\n"
"color:rgb(21,21,21);\n"
"border: 1px solid rgb(94, 94, 94);\n"
"background-color:rg"
                        "b(125,129,133);\n"
"min-height:30px;\n"
"border-radius:6px;\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
" background-color: rgba(102, 103, 105, 40%);\n"
" color: rgb(59, 59, 59);\n"
" border: 1px solid rgb(59, 59, 59);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:rgb(164, 168, 172);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:rgb(166, 166, 166);\n"
"}\n"
"\n"
"QLineEdit{\n"
"background-color:rgb(59, 59, 59);\n"
"border: 1px solid rgb(79, 79, 79);\n"
"}\n"
"\n"
"QLineEdit::disabled{\n"
"background-color:rgb(39, 39, 39);\n"
"border: 1px solid rgb(49, 49, 49);\n"
"}\n"
"\n"
"QMenuBar{\n"
"color:white;\n"
"background-color: rgb(57,57,59);\n"
"border:none;\n"
"}\n"
"\n"
"QMenuBar::item:selected{\n"
"background-color:rgb(89, 89, 89);\n"
"}\n"
"\n"
"QMenu{\n"
"background-color: rgb(57,57,59);\n"
"border:none;\n"
"color:white;\n"
"}\n"
"\n"
"QMenu::item:selected{\n"
"background-color:rgb(89, 89, 89);\n"
"}\n"
"\n"
"QMenu::separator {\n"
"height:1px;\n"
"background-color:rgb(49, 49, 49);\n"
"}\n"
"\n"
""
                        "QMenu::disabled{\n"
"background-color: rgb(59,59,59);\n"
"color:rgb(99,99,99);\n"
"}\n"
"\n"
"QToolTip {\n"
"background-color: rgb(29,29,29);\n"
"color:white;\n"
"border-radius:12px;\n"
"border:none;\n"
"}\n"
"\n"
"QSplitter {\n"
"background-color: rgb(45,45,45);\n"
"width:2px;\n"
"height:2px;\n"
"}\n"
""));
        m_MenuClose = new QAction(V4L2ViewerClass);
        m_MenuClose->setObjectName(QString::fromUtf8("m_MenuClose"));
        m_MenuOpenNextViewer = new QAction(V4L2ViewerClass);
        m_MenuOpenNextViewer->setObjectName(QString::fromUtf8("m_MenuOpenNextViewer"));
        actionBuffer_count = new QAction(V4L2ViewerClass);
        actionBuffer_count->setObjectName(QString::fromUtf8("actionBuffer_count"));
        m_TitleNonBlockingMode = new QAction(V4L2ViewerClass);
        m_TitleNonBlockingMode->setObjectName(QString::fromUtf8("m_TitleNonBlockingMode"));
        m_TitleNonBlockingMode->setCheckable(true);
        m_TitleClearOutputListbox = new QAction(V4L2ViewerClass);
        m_TitleClearOutputListbox->setObjectName(QString::fromUtf8("m_TitleClearOutputListbox"));
        m_TitleLogtofile = new QAction(V4L2ViewerClass);
        m_TitleLogtofile->setObjectName(QString::fromUtf8("m_TitleLogtofile"));
        m_TitleLogtofile->setCheckable(true);
        m_TitleLogtofile->setChecked(true);
        m_TitleToggleStreamRandom = new QAction(V4L2ViewerClass);
        m_TitleToggleStreamRandom->setObjectName(QString::fromUtf8("m_TitleToggleStreamRandom"));
        m_TitleToggleStreamRandom->setCheckable(true);
        m_TitleToggleStreamRandom->setChecked(true);
        m_TitleEnableMessageListbox = new QAction(V4L2ViewerClass);
        m_TitleEnableMessageListbox->setObjectName(QString::fromUtf8("m_TitleEnableMessageListbox"));
        m_TitleEnableMessageListbox->setCheckable(true);
        m_TitleEnableMessageListbox->setChecked(true);
        m_TitleEnableExtendedControls = new QAction(V4L2ViewerClass);
        m_TitleEnableExtendedControls->setObjectName(QString::fromUtf8("m_TitleEnableExtendedControls"));
        m_TitleEnableExtendedControls->setCheckable(true);
        m_TitleEnableExtendedControls->setChecked(false);
        m_TitleCorrectIncomingRAW10Image = new QAction(V4L2ViewerClass);
        m_TitleCorrectIncomingRAW10Image->setObjectName(QString::fromUtf8("m_TitleCorrectIncomingRAW10Image"));
        m_TitleCorrectIncomingRAW10Image->setCheckable(true);
        actionSave_Options = new QAction(V4L2ViewerClass);
        actionSave_Options->setObjectName(QString::fromUtf8("actionSave_Options"));
        m_TitleLangGerman = new QAction(V4L2ViewerClass);
        m_TitleLangGerman->setObjectName(QString::fromUtf8("m_TitleLangGerman"));
        m_TitleLangEnglish = new QAction(V4L2ViewerClass);
        m_TitleLangEnglish->setObjectName(QString::fromUtf8("m_TitleLangEnglish"));
        centralWidget = new QWidget(V4L2ViewerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_14 = new QGridLayout(centralWidget);
        gridLayout_14->setSpacing(0);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        m_InfoWidget = new QWidget(centralWidget);
        m_InfoWidget->setObjectName(QString::fromUtf8("m_InfoWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_InfoWidget->sizePolicy().hasHeightForWidth());
        m_InfoWidget->setSizePolicy(sizePolicy);
        m_InfoWidget->setMinimumSize(QSize(0, 50));
        m_InfoWidget->setStyleSheet(QString::fromUtf8("QWidget#m_InfoWidget{\n"
"background: qlineargradient(x1:0, y1:0, x1:1, y1:6, stop: 0.9#39393b, stop:1#49494b);\n"
"border-top:1px solid rgb(45,45,45);\n"
"}\n"
"\n"
"QLabel{\n"
"background:transparent;\n"
"}"));
        gridLayout_13 = new QGridLayout(m_InfoWidget);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        m_camerasListCheckBox = new QCheckBox(m_InfoWidget);
        m_camerasListCheckBox->setObjectName(QString::fromUtf8("m_camerasListCheckBox"));
        m_camerasListCheckBox->setMinimumSize(QSize(32, 32));
        m_camerasListCheckBox->setMaximumSize(QSize(32, 32));
        m_camerasListCheckBox->setCursor(QCursor(Qt::PointingHandCursor));
        m_camerasListCheckBox->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"background-color:rgb(125,129,133);\n"
"border-radius: 6px;\n"
"min-height:30px;\n"
"border: 1px solid rgb(94, 94, 94);\n"
"padding-right:5px;\n"
"color:rgb(21,21,21);\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"background-color:rgb(166, 166, 166);\n"
"}\n"
"\n"
"QCheckBox:hover {\n"
"background-color:rgb(164, 168, 172);\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"image: url(:/V4L2Viewer/g7848-scaled.ico);\n"
"border:none;\n"
"width:32;\n"
"height:32;\n"
"}\n"
"\n"
"QCheckBox::disabled {\n"
" background-color: rgba(102, 103, 105, 40%);\n"
" color: rgb(59, 59, 59);\n"
" border: 1px solid rgb(59, 59, 59);\n"
"}\n"
""));
        m_camerasListCheckBox->setIconSize(QSize(16, 16));

        gridLayout_13->addWidget(m_camerasListCheckBox, 0, 0, 1, 1);

        m_FramesPerSecondLabel = new QLabel(m_InfoWidget);
        m_FramesPerSecondLabel->setObjectName(QString::fromUtf8("m_FramesPerSecondLabel"));
        m_FramesPerSecondLabel->setEnabled(true);
        m_FramesPerSecondLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout_13->addWidget(m_FramesPerSecondLabel, 0, 1, 1, 1);

        m_FrameIdLabel = new QLabel(m_InfoWidget);
        m_FrameIdLabel->setObjectName(QString::fromUtf8("m_FrameIdLabel"));
        m_FrameIdLabel->setFocusPolicy(Qt::NoFocus);
        m_FrameIdLabel->setAcceptDrops(false);

        gridLayout_13->addWidget(m_FrameIdLabel, 0, 2, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(713, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_10, 0, 3, 1, 1);


        gridLayout_14->addWidget(m_InfoWidget, 0, 0, 1, 1);

        m_Splitter1 = new QSplitter(centralWidget);
        m_Splitter1->setObjectName(QString::fromUtf8("m_Splitter1"));
        m_Splitter1->setOrientation(Qt::Horizontal);
        m_LeftPanelWidget = new QWidget(m_Splitter1);
        m_LeftPanelWidget->setObjectName(QString::fromUtf8("m_LeftPanelWidget"));
        m_LeftPanelWidget->setMinimumSize(QSize(0, 400));
        m_LeftPanelWidget->setStyleSheet(QString::fromUtf8("QWidget#m_LeftPanelWidget{\n"
"background-color: qlineargradient(x1:0, y1:0, x1:1, y1:6, stop: 0.9#39393b, stop:1#39393b);\n"
"border-top:1px solid rgb(45,45,45);\n"
"}"));
        gridLayout_12 = new QGridLayout(m_LeftPanelWidget);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        m_OpenCloseButton = new QPushButton(m_LeftPanelWidget);
        m_OpenCloseButton->setObjectName(QString::fromUtf8("m_OpenCloseButton"));
        m_OpenCloseButton->setEnabled(true);
        m_OpenCloseButton->setMinimumSize(QSize(0, 32));
        m_OpenCloseButton->setMaximumSize(QSize(16777215, 16777215));
        m_OpenCloseButton->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_12->addWidget(m_OpenCloseButton, 1, 0, 1, 1);

        m_CamerasListBox = new QListWidget(m_LeftPanelWidget);
        m_CamerasListBox->setObjectName(QString::fromUtf8("m_CamerasListBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_CamerasListBox->sizePolicy().hasHeightForWidth());
        m_CamerasListBox->setSizePolicy(sizePolicy1);
        m_CamerasListBox->setMinimumSize(QSize(80, 200));
        m_CamerasListBox->setMaximumSize(QSize(16777215, 16777215));
        m_CamerasListBox->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"color:white;\n"
"border:none;\n"
"background:transparent;\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"background-color:rgb(98, 98, 98);\n"
"}\n"
"\n"
"QListWidget::item QWidget{\n"
"color:white;\n"
"padding:0;\n"
"margin:0;\n"
"}\n"
"\n"
""));
        m_CamerasListBox->setProperty("isWrapping", QVariant(false));

        gridLayout_12->addWidget(m_CamerasListBox, 0, 0, 1, 1);

        m_Splitter1->addWidget(m_LeftPanelWidget);
        m_Splitter2 = new QSplitter(m_Splitter1);
        m_Splitter2->setObjectName(QString::fromUtf8("m_Splitter2"));
        m_Splitter2->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(m_Splitter2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout_7 = new QGridLayout(layoutWidget);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(layoutWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea{\n"
"border:none;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 896, 297));
        horizontalLayout_4 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        m_ImageView = new CustomGraphicsView(scrollAreaWidgetContents);
        m_ImageView->setObjectName(QString::fromUtf8("m_ImageView"));
        m_ImageView->setStyleSheet(QString::fromUtf8("QGraphicsView{\n"
"background-color: rgb(19,20,21);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout_4->addWidget(m_ImageView);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_7->addWidget(scrollArea, 0, 0, 1, 1);

        m_ControlWidget = new QWidget(layoutWidget);
        m_ControlWidget->setObjectName(QString::fromUtf8("m_ControlWidget"));
        sizePolicy.setHeightForWidth(m_ControlWidget->sizePolicy().hasHeightForWidth());
        m_ControlWidget->setSizePolicy(sizePolicy);
        m_ControlWidget->setMinimumSize(QSize(0, 0));
        m_ControlWidget->setStyleSheet(QString::fromUtf8("QWidget#m_ControlWidget{\n"
"background: qlineargradient(x1:0, y1:0, x1:1, y1:6, stop: 0.9#49494b, stop:1#39393b);\n"
"}\n"
"\n"
"QLabel{\n"
"background:none;\n"
"}\n"
"\n"
"QLabel::disabled{\n"
"color:rgba(165,165,165,20%);\n"
"}\n"
"\n"
" QCheckBox{\n"
"background-color:rgb(125,129,133);\n"
"border-radius: 6px;\n"
"min-height:30px;\n"
"border: 1px solid rgb(94, 94, 94);\n"
"padding-right:5px;\n"
"color:rgb(21,21,21);\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"background-color:rgb(166, 166, 166);\n"
"}\n"
"\n"
"QCheckBox:hover {\n"
"background-color:rgb(164, 168, 172);\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"border:none;\n"
"width:0;\n"
"height:0;\n"
"}\n"
"\n"
"QCheckBox::disabled {\n"
" background-color: rgba(82, 83, 85, 10%);\n"
" color: rgb(99, 99, 99);\n"
" border: 1px solid rgb(55, 55, 55);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
" background-color: rgba(82, 83, 85, 10%);\n"
" border: 1px solid rgb(57, 57, 57);\n"
"}"));
        gridLayout_11 = new QGridLayout(m_ControlWidget);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 4, 0, 4);
        m_FlipHorizontalCheckBox = new QCheckBox(m_ControlWidget);
        m_FlipHorizontalCheckBox->setObjectName(QString::fromUtf8("m_FlipHorizontalCheckBox"));
        m_FlipHorizontalCheckBox->setEnabled(true);
        m_FlipHorizontalCheckBox->setCursor(QCursor(Qt::PointingHandCursor));
        m_FlipHorizontalCheckBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout_11->addWidget(m_FlipHorizontalCheckBox, 0, 8, 1, 1);

        m_FlipVerticalCheckBox = new QCheckBox(m_ControlWidget);
        m_FlipVerticalCheckBox->setObjectName(QString::fromUtf8("m_FlipVerticalCheckBox"));
        m_FlipVerticalCheckBox->setEnabled(true);
        m_FlipVerticalCheckBox->setCursor(QCursor(Qt::PointingHandCursor));
        m_FlipVerticalCheckBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout_11->addWidget(m_FlipVerticalCheckBox, 0, 9, 1, 1);

        m_ZoomLabel = new QLabel(m_ControlWidget);
        m_ZoomLabel->setObjectName(QString::fromUtf8("m_ZoomLabel"));
        m_ZoomLabel->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_ZoomLabel->sizePolicy().hasHeightForWidth());
        m_ZoomLabel->setSizePolicy(sizePolicy2);
        m_ZoomLabel->setMinimumSize(QSize(60, 0));
        m_ZoomLabel->setMaximumSize(QSize(40, 16777215));
        m_ZoomLabel->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(m_ZoomLabel, 0, 6, 1, 1);

        m_SaveImageButton = new QPushButton(m_ControlWidget);
        m_SaveImageButton->setObjectName(QString::fromUtf8("m_SaveImageButton"));
        m_SaveImageButton->setEnabled(false);
        m_SaveImageButton->setMinimumSize(QSize(32, 32));
        m_SaveImageButton->setMaximumSize(QSize(32, 32));
        m_SaveImageButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/V4L2Viewer/saveSingle.ico"), QSize(), QIcon::Normal, QIcon::Off);
        m_SaveImageButton->setIcon(icon1);

        gridLayout_11->addWidget(m_SaveImageButton, 0, 7, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(215, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        m_ZoomFitButton = new QPushButton(m_ControlWidget);
        m_ZoomFitButton->setObjectName(QString::fromUtf8("m_ZoomFitButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_ZoomFitButton->sizePolicy().hasHeightForWidth());
        m_ZoomFitButton->setSizePolicy(sizePolicy3);
        m_ZoomFitButton->setMinimumSize(QSize(32, 32));
        m_ZoomFitButton->setMaximumSize(QSize(32, 32));
        m_ZoomFitButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/V4L2Viewer/magnifying-glass1.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_ZoomFitButton->setIcon(icon2);
        m_ZoomFitButton->setCheckable(false);
        m_ZoomFitButton->setChecked(false);

        gridLayout_11->addWidget(m_ZoomFitButton, 0, 5, 1, 1);

        m_ZoomOutButton = new QPushButton(m_ControlWidget);
        m_ZoomOutButton->setObjectName(QString::fromUtf8("m_ZoomOutButton"));
        sizePolicy3.setHeightForWidth(m_ZoomOutButton->sizePolicy().hasHeightForWidth());
        m_ZoomOutButton->setSizePolicy(sizePolicy3);
        m_ZoomOutButton->setMinimumSize(QSize(32, 32));
        m_ZoomOutButton->setMaximumSize(QSize(32, 32));
        m_ZoomOutButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/V4L2Viewer/magnifying-glass2.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_ZoomOutButton->setIcon(icon3);
        m_ZoomOutButton->setAutoRepeat(true);

        gridLayout_11->addWidget(m_ZoomOutButton, 0, 4, 1, 1);

        m_StopButton = new QPushButton(m_ControlWidget);
        m_StopButton->setObjectName(QString::fromUtf8("m_StopButton"));
        sizePolicy3.setHeightForWidth(m_StopButton->sizePolicy().hasHeightForWidth());
        m_StopButton->setSizePolicy(sizePolicy3);
        m_StopButton->setMinimumSize(QSize(32, 32));
        m_StopButton->setMaximumSize(QSize(32, 32));
        m_StopButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/V4L2Viewer/stop4.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_StopButton->setIcon(icon4);

        gridLayout_11->addWidget(m_StopButton, 0, 2, 1, 1);

        m_ZoomInButton = new QPushButton(m_ControlWidget);
        m_ZoomInButton->setObjectName(QString::fromUtf8("m_ZoomInButton"));
        sizePolicy3.setHeightForWidth(m_ZoomInButton->sizePolicy().hasHeightForWidth());
        m_ZoomInButton->setSizePolicy(sizePolicy3);
        m_ZoomInButton->setMinimumSize(QSize(32, 32));
        m_ZoomInButton->setMaximumSize(QSize(32, 32));
        m_ZoomInButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/V4L2Viewer/zoom75.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_ZoomInButton->setIcon(icon5);
        m_ZoomInButton->setAutoRepeat(true);

        gridLayout_11->addWidget(m_ZoomInButton, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(214, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_2, 0, 11, 1, 1);

        m_DisplayImagesCheckBox = new QCheckBox(m_ControlWidget);
        m_DisplayImagesCheckBox->setObjectName(QString::fromUtf8("m_DisplayImagesCheckBox"));
        m_DisplayImagesCheckBox->setEnabled(false);
        m_DisplayImagesCheckBox->setMinimumSize(QSize(0, 32));
        m_DisplayImagesCheckBox->setMaximumSize(QSize(16777215, 16777215));
        m_DisplayImagesCheckBox->setCursor(QCursor(Qt::PointingHandCursor));
        m_DisplayImagesCheckBox->setStyleSheet(QString::fromUtf8(""));
        m_DisplayImagesCheckBox->setIconSize(QSize(16, 16));
        m_DisplayImagesCheckBox->setCheckable(true);
        m_DisplayImagesCheckBox->setChecked(true);

        gridLayout_11->addWidget(m_DisplayImagesCheckBox, 0, 10, 1, 1);

        m_StartButton = new QPushButton(m_ControlWidget);
        m_StartButton->setObjectName(QString::fromUtf8("m_StartButton"));
        m_StartButton->setEnabled(true);
        sizePolicy3.setHeightForWidth(m_StartButton->sizePolicy().hasHeightForWidth());
        m_StartButton->setSizePolicy(sizePolicy3);
        m_StartButton->setMinimumSize(QSize(32, 32));
        m_StartButton->setMaximumSize(QSize(32, 32));
        m_StartButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/V4L2Viewer/play128.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_StartButton->setIcon(icon6);

        gridLayout_11->addWidget(m_StartButton, 0, 1, 1, 1);


        gridLayout_7->addWidget(m_ControlWidget, 1, 0, 1, 1);

        m_Splitter2->addWidget(layoutWidget);
        m_ImageControlFrame = new QFrame(m_Splitter2);
        m_ImageControlFrame->setObjectName(QString::fromUtf8("m_ImageControlFrame"));
        m_ImageControlFrame->setMinimumSize(QSize(0, 0));
        m_ImageControlFrame->setStyleSheet(QString::fromUtf8("QWidget#m_ImageControlFrame{\n"
"background-color: qlineargradient(x1:0, y1:0, x1:1, y1:6, stop: 0.9#39393b, stop:1#39393b);\n"
"border:none;\n"
"}\n"
"\n"
"QWidget{\n"
"color:white;\n"
"}\n"
"\n"
"QLabel{\n"
"background:none;\n"
"}\n"
"\n"
"QLabel::disabled{\n"
"color: rgb(87,88,89);\n"
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
"QLineEdit::disabled{\n"
"color: rgb(77,78,79);\n"
"}\n"
"\n"
"Line{\n"
"border-top:1px solid rgb(66,67,68);\n"
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
"    background: rgb(0, 100, 207);\n"
"}\n"
""
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
"QScrollArea{\n"
"border:none;\n"
"}\n"
""));
        m_ImageControlFrame->setFrameShape(QFrame::StyledPanel);
        m_ImageControlFrame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(m_ImageControlFrame);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(m_ImageControlFrame);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(-349, 0, 1247, 378));
        gridLayout_8 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer, 0, 6, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_11, 0, 0, 1, 1);

        frameSecond = new QFrame(scrollAreaWidgetContents_2);
        frameSecond->setObjectName(QString::fromUtf8("frameSecond"));
        frameSecond->setMinimumSize(QSize(0, 0));
        frameSecond->setStyleSheet(QString::fromUtf8("QFrame#frameSecond{\n"
"border-radius:6px;\n"
"border: 1px solid gray;\n"
"}"));
        frameSecond->setFrameShape(QFrame::StyledPanel);
        frameSecond->setFrameShadow(QFrame::Raised);
        gridLayout_16 = new QGridLayout(frameSecond);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(2);
        gridLayout_6->setVerticalSpacing(4);
        m_labelWhiteBalanceAuto = new QLabel(frameSecond);
        m_labelWhiteBalanceAuto->setObjectName(QString::fromUtf8("m_labelWhiteBalanceAuto"));
        sizePolicy.setHeightForWidth(m_labelWhiteBalanceAuto->sizePolicy().hasHeightForWidth());
        m_labelWhiteBalanceAuto->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(m_labelWhiteBalanceAuto, 0, 0, 1, 2);

        m_sliderGamma = new QSlider(frameSecond);
        m_sliderGamma->setObjectName(QString::fromUtf8("m_sliderGamma"));
        m_sliderGamma->setMinimumSize(QSize(150, 0));
        m_sliderGamma->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(m_sliderGamma, 6, 1, 2, 1);

        m_edBrightness = new QLineEdit(frameSecond);
        m_edBrightness->setObjectName(QString::fromUtf8("m_edBrightness"));
        m_edBrightness->setMinimumSize(QSize(0, 0));
        m_edBrightness->setMaximumSize(QSize(102, 16777215));
        m_edBrightness->setStyleSheet(QString::fromUtf8(""));
        m_edBrightness->setMaxLength(10);
        m_edBrightness->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(m_edBrightness, 2, 2, 4, 1);

        m_edGamma = new QLineEdit(frameSecond);
        m_edGamma->setObjectName(QString::fromUtf8("m_edGamma"));
        m_edGamma->setMaximumSize(QSize(102, 16777215));
        m_edGamma->setStyleSheet(QString::fromUtf8(""));
        m_edGamma->setMaxLength(10);
        m_edGamma->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(m_edGamma, 6, 2, 2, 1);

        m_labelGamma = new QLabel(frameSecond);
        m_labelGamma->setObjectName(QString::fromUtf8("m_labelGamma"));

        gridLayout_6->addWidget(m_labelGamma, 6, 0, 2, 1);

        m_sliderBrightness = new QSlider(frameSecond);
        m_sliderBrightness->setObjectName(QString::fromUtf8("m_sliderBrightness"));
        m_sliderBrightness->setMinimumSize(QSize(150, 0));
        m_sliderBrightness->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(m_sliderBrightness, 2, 1, 4, 1);

        line_9 = new QFrame(frameSecond);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_9, 1, 0, 1, 3);

        m_labelBrightness = new QLabel(frameSecond);
        m_labelBrightness->setObjectName(QString::fromUtf8("m_labelBrightness"));

        gridLayout_6->addWidget(m_labelBrightness, 2, 0, 4, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_6, 8, 0, 1, 3);

        m_chkContWhiteBalance = new QCheckBox(frameSecond);
        m_chkContWhiteBalance->setObjectName(QString::fromUtf8("m_chkContWhiteBalance"));
        m_chkContWhiteBalance->setEnabled(true);
        m_chkContWhiteBalance->setMinimumSize(QSize(102, 27));
        m_chkContWhiteBalance->setMaximumSize(QSize(102, 27));
        m_chkContWhiteBalance->setCursor(QCursor(Qt::PointingHandCursor));
        m_chkContWhiteBalance->setLayoutDirection(Qt::LeftToRight);
        m_chkContWhiteBalance->setAutoFillBackground(false);
        m_chkContWhiteBalance->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"max-width:100px;\n"
"border-radius:12px;\n"
"spacing:-65;\n"
"min-width:100px;\n"
"min-height:25px;\n"
"border:1px solid rgb(89,89,89);\n"
"}\n"
"\n"
"QCheckBox:pressed{\n"
"background-color:rgb(149, 149, 149);\n"
"}\n"
"\n"
"QCheckBox:hover{\n"
"background-color:rgb(139, 140, 142);\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"background-color:rgb(149, 149, 149);\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"border:none;\n"
"width:100px;\n"
"}\n"
"\n"
"QCheckBox::disabled{\n"
" background-color: rgb(39, 39, 39);\n"
" color: rgb(79, 79, 79);\n"
" border: 1px solid rgb(59, 59, 59);\n"
"}"));
        m_chkContWhiteBalance->setChecked(false);
        m_chkContWhiteBalance->setTristate(false);

        gridLayout_6->addWidget(m_chkContWhiteBalance, 0, 2, 1, 1);


        gridLayout_16->addLayout(gridLayout_6, 0, 0, 1, 1);


        gridLayout_8->addWidget(frameSecond, 0, 2, 1, 1);

        frameFifth = new QFrame(scrollAreaWidgetContents_2);
        frameFifth->setObjectName(QString::fromUtf8("frameFifth"));
        frameFifth->setMinimumSize(QSize(200, 0));
        frameFifth->setStyleSheet(QString::fromUtf8("QFrame#frameFifth{\n"
"border-radius:6px;\n"
"border: 1px solid gray;\n"
"}"));
        frameFifth->setFrameShape(QFrame::StyledPanel);
        frameFifth->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frameFifth);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m_AllControlsButton = new QPushButton(frameFifth);
        m_AllControlsButton->setObjectName(QString::fromUtf8("m_AllControlsButton"));
        m_AllControlsButton->setMaximumSize(QSize(102, 16777215));
        m_AllControlsButton->setCursor(QCursor(Qt::PointingHandCursor));
        m_AllControlsButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_2->addWidget(m_AllControlsButton, 0, 1, 1, 1);

        m_labelAllFeatures = new QLabel(frameFifth);
        m_labelAllFeatures->setObjectName(QString::fromUtf8("m_labelAllFeatures"));

        gridLayout_2->addWidget(m_labelAllFeatures, 0, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_7, 1, 0, 1, 2);


        gridLayout_9->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_8->addWidget(frameFifth, 1, 2, 1, 1);

        frameFirst = new QFrame(scrollAreaWidgetContents_2);
        frameFirst->setObjectName(QString::fromUtf8("frameFirst"));
        frameFirst->setMinimumSize(QSize(0, 0));
        frameFirst->setStyleSheet(QString::fromUtf8("QFrame#frameFirst{\n"
"border-radius:6px;\n"
"border: 1px solid gray;\n"
"}"));
        frameFirst->setFrameShape(QFrame::StyledPanel);
        frameFirst->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(frameFirst);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(2);
        gridLayout_5->setVerticalSpacing(4);
        m_labelGain = new QLabel(frameFirst);
        m_labelGain->setObjectName(QString::fromUtf8("m_labelGain"));

        gridLayout_5->addWidget(m_labelGain, 4, 0, 2, 1);

        m_sliderExposure = new QSlider(frameFirst);
        m_sliderExposure->setObjectName(QString::fromUtf8("m_sliderExposure"));
        m_sliderExposure->setEnabled(true);
        m_sliderExposure->setMinimumSize(QSize(150, 0));
        m_sliderExposure->setMaximum(100000);
        m_sliderExposure->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(m_sliderExposure, 0, 1, 1, 1);

        m_sliderGain = new QSlider(frameFirst);
        m_sliderGain->setObjectName(QString::fromUtf8("m_sliderGain"));
        m_sliderGain->setMinimumSize(QSize(150, 0));
        m_sliderGain->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(m_sliderGain, 4, 1, 2, 1);

        m_chkAutoGain = new QCheckBox(frameFirst);
        m_chkAutoGain->setObjectName(QString::fromUtf8("m_chkAutoGain"));
        m_chkAutoGain->setMinimumSize(QSize(102, 27));
        m_chkAutoGain->setMaximumSize(QSize(102, 27));
        m_chkAutoGain->setCursor(QCursor(Qt::PointingHandCursor));
        m_chkAutoGain->setLayoutDirection(Qt::LeftToRight);
        m_chkAutoGain->setAutoFillBackground(false);
        m_chkAutoGain->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"max-width:100px;\n"
"border-radius:12px;\n"
"spacing:-65;\n"
"min-width:100px;\n"
"min-height:25px;\n"
"border:1px solid rgb(89,89,89);\n"
"}\n"
"\n"
"QCheckBox:pressed{\n"
"background-color:rgb(149, 149, 149);\n"
"}\n"
"\n"
"QCheckBox:hover{\n"
"background-color:rgb(139, 140, 142);\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"background-color:rgb(149, 149, 149);\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"border:none;\n"
"width:100px;\n"
"}\n"
"\n"
"QCheckBox::disabled{\n"
" background-color: rgb(39, 39, 39);\n"
" color: rgb(79, 79, 79);\n"
" border: 1px solid rgb(59, 59, 59);\n"
"}"));
        m_chkAutoGain->setChecked(false);
        m_chkAutoGain->setTristate(false);

        gridLayout_5->addWidget(m_chkAutoGain, 6, 2, 1, 1);

        m_labelExposure = new QLabel(frameFirst);
        m_labelExposure->setObjectName(QString::fromUtf8("m_labelExposure"));
        m_labelExposure->setEnabled(true);

        gridLayout_5->addWidget(m_labelExposure, 0, 0, 1, 1);

        m_labelExposureAuto = new QLabel(frameFirst);
        m_labelExposureAuto->setObjectName(QString::fromUtf8("m_labelExposureAuto"));

        gridLayout_5->addWidget(m_labelExposureAuto, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer, 2, 0, 1, 3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 7, 0, 1, 3);

        m_edGain = new QLineEdit(frameFirst);
        m_edGain->setObjectName(QString::fromUtf8("m_edGain"));
        m_edGain->setMinimumSize(QSize(80, 0));
        m_edGain->setMaximumSize(QSize(100, 16777215));
        m_edGain->setMaxLength(10);
        m_edGain->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(m_edGain, 4, 2, 2, 1);

        m_edExposure = new QLineEdit(frameFirst);
        m_edExposure->setObjectName(QString::fromUtf8("m_edExposure"));
        m_edExposure->setEnabled(true);
        m_edExposure->setMinimumSize(QSize(80, 0));
        m_edExposure->setMaximumSize(QSize(100, 16777215));
        m_edExposure->setStyleSheet(QString::fromUtf8(""));
        m_edExposure->setMaxLength(12);
        m_edExposure->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(m_edExposure, 0, 2, 1, 1);

        m_labelGainAuto = new QLabel(frameFirst);
        m_labelGainAuto->setObjectName(QString::fromUtf8("m_labelGainAuto"));

        gridLayout_5->addWidget(m_labelGainAuto, 6, 0, 1, 2);

        line_4 = new QFrame(frameFirst);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy4);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_4, 3, 0, 1, 3);

        m_chkAutoExposure = new QCheckBox(frameFirst);
        m_chkAutoExposure->setObjectName(QString::fromUtf8("m_chkAutoExposure"));
        m_chkAutoExposure->setEnabled(true);
        m_chkAutoExposure->setMinimumSize(QSize(102, 27));
        m_chkAutoExposure->setMaximumSize(QSize(102, 27));
        m_chkAutoExposure->setCursor(QCursor(Qt::PointingHandCursor));
        m_chkAutoExposure->setLayoutDirection(Qt::LeftToRight);
        m_chkAutoExposure->setAutoFillBackground(false);
        m_chkAutoExposure->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"max-width:100px;\n"
"border-radius:12px;\n"
"spacing:-65;\n"
"min-width:100px;\n"
"min-height:25px;\n"
"border:1px solid rgb(89,89,89);\n"
"}\n"
"\n"
"QCheckBox:pressed{\n"
"background-color:rgb(149, 149, 149);\n"
"}\n"
"\n"
"QCheckBox:hover{\n"
"background-color:rgb(139, 140, 142);\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"background-color:rgb(149, 149, 149);\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"border:none;\n"
"width:100px;\n"
"}\n"
"\n"
"QCheckBox::disabled{\n"
" background-color: rgb(39, 39, 39);\n"
" color: rgb(79, 79, 79);\n"
" border: 1px solid rgb(59, 59, 59);\n"
"}"));
        m_chkAutoExposure->setChecked(false);
        m_chkAutoExposure->setTristate(false);

        gridLayout_5->addWidget(m_chkAutoExposure, 1, 2, 1, 1);


        gridLayout_15->addLayout(gridLayout_5, 0, 0, 1, 1);


        gridLayout_8->addWidget(frameFirst, 0, 1, 2, 1);

        frameThird = new QFrame(scrollAreaWidgetContents_2);
        frameThird->setObjectName(QString::fromUtf8("frameThird"));
        frameThird->setMinimumSize(QSize(0, 0));
        frameThird->setStyleSheet(QString::fromUtf8("QFrame#frameThird{\n"
"border-radius:6px;\n"
"border: 1px solid gray;\n"
"}"));
        frameThird->setFrameShape(QFrame::StyledPanel);
        frameThird->setFrameShadow(QFrame::Raised);
        gridLayout_17 = new QGridLayout(frameThird);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        m_edFrameRate = new QLineEdit(frameThird);
        m_edFrameRate->setObjectName(QString::fromUtf8("m_edFrameRate"));
        m_edFrameRate->setMaximumSize(QSize(90, 16777215));
        m_edFrameRate->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_3->addWidget(m_edFrameRate, 0, 2, 1, 1);

        line_6 = new QFrame(frameThird);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        sizePolicy4.setHeightForWidth(line_6->sizePolicy().hasHeightForWidth());
        line_6->setSizePolicy(sizePolicy4);
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_6, 2, 0, 1, 3);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_8, 5, 0, 1, 3);

        m_pixelFormats = new QComboBox(frameThird);
        m_pixelFormats->setObjectName(QString::fromUtf8("m_pixelFormats"));
        m_pixelFormats->setEnabled(true);
        m_pixelFormats->setMaximumSize(QSize(70, 16777215));
        m_pixelFormats->setCursor(QCursor(Qt::PointingHandCursor));
        m_pixelFormats->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border:none;\n"
"}\n"
"\n"
"QComboBox{\n"
"border:none;\n"
"padding: 1px 0px 1px 3px;\n"
"}\n"
"\n"
"QComboBox::disabled{\n"
"color: rgb(77,78,79);\n"
"}\n"
"\n"
"QComboBox::drop-down{\n"
"background-image: url(:/V4L2Viewer/triangle-copy-3.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"}\n"
"\n"
"QListView{\n"
"border:none;\n"
"}\n"
"\n"
"QComboBox::item{\n"
"color:white;\n"
"}\n"
""));

        gridLayout_3->addWidget(m_pixelFormats, 3, 2, 1, 1);

        m_labelFrameRate = new QLabel(frameThird);
        m_labelFrameRate->setObjectName(QString::fromUtf8("m_labelFrameRate"));

        gridLayout_3->addWidget(m_labelFrameRate, 0, 0, 1, 2);

        m_chkFrameRateAuto = new QCheckBox(frameThird);
        m_chkFrameRateAuto->setObjectName(QString::fromUtf8("m_chkFrameRateAuto"));
        m_chkFrameRateAuto->setCursor(QCursor(Qt::PointingHandCursor));
        m_chkFrameRateAuto->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"max-width:100px;\n"
"border-radius:12px;\n"
"spacing:-65;\n"
"min-width:100px;\n"
"min-height:25px;\n"
"border:1px solid rgb(89,89,89);\n"
"}\n"
"\n"
"QCheckBox:pressed{\n"
"background-color:rgb(149, 149, 149);\n"
"}\n"
"\n"
"QCheckBox:hover{\n"
"background-color:rgb(139, 140, 142);\n"
"}\n"
"\n"
"QCheckBox:checked {\n"
"background-color:rgb(149, 149, 149);\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"border:none;\n"
"width:100px;\n"
"}\n"
"\n"
"QCheckBox::disabled{\n"
" background-color: rgb(39, 39, 39);\n"
" color: rgb(79, 79, 79);\n"
" border: 1px solid rgb(59, 59, 59);\n"
"}"));

        gridLayout_3->addWidget(m_chkFrameRateAuto, 1, 2, 1, 1);

        m_labelFrameRateAuto = new QLabel(frameThird);
        m_labelFrameRateAuto->setObjectName(QString::fromUtf8("m_labelFrameRateAuto"));

        gridLayout_3->addWidget(m_labelFrameRateAuto, 1, 0, 1, 2);

        m_labelPixelFormats = new QLabel(frameThird);
        m_labelPixelFormats->setObjectName(QString::fromUtf8("m_labelPixelFormats"));
        sizePolicy2.setHeightForWidth(m_labelPixelFormats->sizePolicy().hasHeightForWidth());
        m_labelPixelFormats->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(m_labelPixelFormats, 3, 0, 1, 2);

        m_labelFrameSizes = new QLabel(frameThird);
        m_labelFrameSizes->setObjectName(QString::fromUtf8("m_labelFrameSizes"));
        sizePolicy2.setHeightForWidth(m_labelFrameSizes->sizePolicy().hasHeightForWidth());
        m_labelFrameSizes->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(m_labelFrameSizes, 4, 0, 1, 2);

        m_frameSizes = new QComboBox(frameThird);
        m_frameSizes->setObjectName(QString::fromUtf8("m_frameSizes"));
        m_frameSizes->setMaximumSize(QSize(140, 16777215));
        m_frameSizes->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border:none;\n"
"}\n"
"\n"
"QComboBox{\n"
"border:none;\n"
"padding: 1px 0px 1px 3px;\n"
"}\n"
"\n"
"QComboBox::disabled{\n"
"color: rgb(77,78,79);\n"
"}\n"
"\n"
"QComboBox::drop-down{\n"
"background-image: url(:/V4L2Viewer/triangle-copy-3.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"}\n"
"\n"
"QListView{\n"
"border:none;\n"
"}\n"
"\n"
"QComboBox::item{\n"
"color:white;\n"
"}\n"
""));

        gridLayout_3->addWidget(m_frameSizes, 4, 2, 1, 1);


        gridLayout_17->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_8->addWidget(frameThird, 0, 4, 2, 1);

        frameFourth = new QFrame(scrollAreaWidgetContents_2);
        frameFourth->setObjectName(QString::fromUtf8("frameFourth"));
        frameFourth->setMinimumSize(QSize(0, 0));
        frameFourth->setStyleSheet(QString::fromUtf8("QFrame#frameFourth{\n"
"border-radius:6px;\n"
"border: 1px solid gray;\n"
"}"));
        frameFourth->setFrameShape(QFrame::StyledPanel);
        frameFourth->setFrameShadow(QFrame::Raised);
        gridLayout_18 = new QGridLayout(frameFourth);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(2);
        gridLayout->setVerticalSpacing(4);
        m_cropWidget = new QWidget(frameFourth);
        m_cropWidget->setObjectName(QString::fromUtf8("m_cropWidget"));
        m_cropWidget->setMinimumSize(QSize(100, 120));
        gridLayout_19 = new QGridLayout(m_cropWidget);
        gridLayout_19->setSpacing(0);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setContentsMargins(0, 0, 0, 0);
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        m_CropLabel = new QLabel(m_cropWidget);
        m_CropLabel->setObjectName(QString::fromUtf8("m_CropLabel"));
        sizePolicy.setHeightForWidth(m_CropLabel->sizePolicy().hasHeightForWidth());
        m_CropLabel->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(m_CropLabel, 0, 0, 1, 3);

        m_labelCropXOffset = new QLabel(m_cropWidget);
        m_labelCropXOffset->setObjectName(QString::fromUtf8("m_labelCropXOffset"));

        gridLayout_10->addWidget(m_labelCropXOffset, 1, 0, 1, 2);

        m_edCropXOffset = new QLineEdit(m_cropWidget);
        m_edCropXOffset->setObjectName(QString::fromUtf8("m_edCropXOffset"));
        m_edCropXOffset->setMaximumSize(QSize(70, 16777215));
        m_edCropXOffset->setMaxLength(10);
        m_edCropXOffset->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(m_edCropXOffset, 1, 2, 1, 1);

        m_labelCropWidth = new QLabel(m_cropWidget);
        m_labelCropWidth->setObjectName(QString::fromUtf8("m_labelCropWidth"));

        gridLayout_10->addWidget(m_labelCropWidth, 3, 0, 1, 2);

        m_edCropWidth = new QLineEdit(m_cropWidget);
        m_edCropWidth->setObjectName(QString::fromUtf8("m_edCropWidth"));
        m_edCropWidth->setMaximumSize(QSize(70, 16777215));
        m_edCropWidth->setMaxLength(10);
        m_edCropWidth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(m_edCropWidth, 3, 2, 1, 1);

        m_labelCropHeight = new QLabel(m_cropWidget);
        m_labelCropHeight->setObjectName(QString::fromUtf8("m_labelCropHeight"));

        gridLayout_10->addWidget(m_labelCropHeight, 4, 0, 1, 2);

        m_edCropHeight = new QLineEdit(m_cropWidget);
        m_edCropHeight->setObjectName(QString::fromUtf8("m_edCropHeight"));
        m_edCropHeight->setMaximumSize(QSize(70, 16777215));
        m_edCropHeight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(m_edCropHeight, 4, 2, 1, 1);

        m_edCropYOffset = new QLineEdit(m_cropWidget);
        m_edCropYOffset->setObjectName(QString::fromUtf8("m_edCropYOffset"));
        m_edCropYOffset->setMaximumSize(QSize(70, 16777215));
        m_edCropYOffset->setMaxLength(10);
        m_edCropYOffset->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(m_edCropYOffset, 2, 2, 1, 1);

        m_labelCropYOffset = new QLabel(m_cropWidget);
        m_labelCropYOffset->setObjectName(QString::fromUtf8("m_labelCropYOffset"));

        gridLayout_10->addWidget(m_labelCropYOffset, 2, 0, 1, 2);


        gridLayout_19->addLayout(gridLayout_10, 0, 0, 1, 1);


        gridLayout->addWidget(m_cropWidget, 4, 0, 1, 2);

        m_labelWidth = new QLabel(frameFourth);
        m_labelWidth->setObjectName(QString::fromUtf8("m_labelWidth"));

        gridLayout->addWidget(m_labelWidth, 0, 0, 1, 1);

        m_edWidth = new QLineEdit(frameFourth);
        m_edWidth->setObjectName(QString::fromUtf8("m_edWidth"));
        m_edWidth->setMinimumSize(QSize(70, 0));
        m_edWidth->setMaximumSize(QSize(70, 16777215));
        m_edWidth->setMaxLength(10);
        m_edWidth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_edWidth, 0, 1, 1, 1);

        m_labelHeight = new QLabel(frameFourth);
        m_labelHeight->setObjectName(QString::fromUtf8("m_labelHeight"));

        gridLayout->addWidget(m_labelHeight, 1, 0, 1, 1);

        m_edHeight = new QLineEdit(frameFourth);
        m_edHeight->setObjectName(QString::fromUtf8("m_edHeight"));
        m_edHeight->setMinimumSize(QSize(70, 0));
        m_edHeight->setMaximumSize(QSize(70, 16777215));
        m_edHeight->setMaxLength(10);
        m_edHeight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_edHeight, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 0, 1, 2);

        line = new QFrame(frameFourth);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 2, 2);


        gridLayout_18->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_8->addWidget(frameFourth, 0, 5, 2, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_4->addWidget(scrollArea_2, 0, 0, 1, 1);

        m_Splitter2->addWidget(m_ImageControlFrame);
        m_Splitter1->addWidget(m_Splitter2);

        gridLayout_14->addWidget(m_Splitter1, 1, 0, 1, 1);

        V4L2ViewerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(V4L2ViewerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1227, 22));
        m_MenuFile = new QMenu(menuBar);
        m_MenuFile->setObjectName(QString::fromUtf8("m_MenuFile"));
        m_MenuFile->setCursor(QCursor(Qt::PointingHandCursor));
        m_MenuAbout = new QMenu(m_MenuFile);
        m_MenuAbout->setObjectName(QString::fromUtf8("m_MenuAbout"));
        m_MenuAbout->setCursor(QCursor(Qt::PointingHandCursor));
        m_MenuLang = new QMenu(m_MenuFile);
        m_MenuLang->setObjectName(QString::fromUtf8("m_MenuLang"));
        m_MenuLang->setCursor(QCursor(Qt::PointingHandCursor));
        m_MenuOptions = new QMenu(menuBar);
        m_MenuOptions->setObjectName(QString::fromUtf8("m_MenuOptions"));
        m_MenuOptions->setCursor(QCursor(Qt::PointingHandCursor));
        V4L2ViewerClass->setMenuBar(menuBar);
        m_allFeaturesDockWidget = new QDockWidget(V4L2ViewerClass);
        m_allFeaturesDockWidget->setObjectName(QString::fromUtf8("m_allFeaturesDockWidget"));
        m_allFeaturesDockWidget->setMinimumSize(QSize(67, 58));
        m_allFeaturesDockWidget->setStyleSheet(QString::fromUtf8("QDockWidget {\n"
"titlebar-close-icon: url(:/V4L2Viewer/Cross128.png);\n"
"titlebar-normal-icon: url(:/V4L2Viewer/resize4.png);\n"
"}"));
        m_allFeaturesDockWidget->setFloating(false);
        m_allFeaturesDockWidget->setFeatures(QDockWidget::AllDockWidgetFeatures);
        m_allFeaturesDockWidget->setAllowedAreas(Qt::RightDockWidgetArea);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        m_allFeaturesDockWidget->setWidget(dockWidgetContents_3);
        V4L2ViewerClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), m_allFeaturesDockWidget);
        QWidget::setTabOrder(m_camerasListCheckBox, scrollArea);
        QWidget::setTabOrder(scrollArea, m_ImageView);
        QWidget::setTabOrder(m_ImageView, m_CamerasListBox);
        QWidget::setTabOrder(m_CamerasListBox, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, m_OpenCloseButton);
        QWidget::setTabOrder(m_OpenCloseButton, m_StartButton);
        QWidget::setTabOrder(m_StartButton, m_StopButton);
        QWidget::setTabOrder(m_StopButton, m_ZoomInButton);
        QWidget::setTabOrder(m_ZoomInButton, m_ZoomOutButton);
        QWidget::setTabOrder(m_ZoomOutButton, m_ZoomFitButton);
        QWidget::setTabOrder(m_ZoomFitButton, m_SaveImageButton);
        QWidget::setTabOrder(m_SaveImageButton, m_FlipHorizontalCheckBox);
        QWidget::setTabOrder(m_FlipHorizontalCheckBox, m_FlipVerticalCheckBox);
        QWidget::setTabOrder(m_FlipVerticalCheckBox, m_DisplayImagesCheckBox);
        QWidget::setTabOrder(m_DisplayImagesCheckBox, m_sliderExposure);
        QWidget::setTabOrder(m_sliderExposure, m_edExposure);
        QWidget::setTabOrder(m_edExposure, m_chkAutoExposure);
        QWidget::setTabOrder(m_chkAutoExposure, m_sliderGain);
        QWidget::setTabOrder(m_sliderGain, m_edGain);
        QWidget::setTabOrder(m_edGain, m_chkAutoGain);
        QWidget::setTabOrder(m_chkAutoGain, m_chkContWhiteBalance);
        QWidget::setTabOrder(m_chkContWhiteBalance, m_edBrightness);
        QWidget::setTabOrder(m_edBrightness, m_edGamma);
        QWidget::setTabOrder(m_edGamma, m_sliderBrightness);
        QWidget::setTabOrder(m_sliderBrightness, m_sliderGamma);
        QWidget::setTabOrder(m_sliderGamma, m_AllControlsButton);
        QWidget::setTabOrder(m_AllControlsButton, m_edFrameRate);
        QWidget::setTabOrder(m_edFrameRate, m_chkFrameRateAuto);
        QWidget::setTabOrder(m_chkFrameRateAuto, m_pixelFormats);
        QWidget::setTabOrder(m_pixelFormats, m_edWidth);
        QWidget::setTabOrder(m_edWidth, m_edHeight);
        QWidget::setTabOrder(m_edHeight, m_edCropXOffset);
        QWidget::setTabOrder(m_edCropXOffset, m_edCropYOffset);
        QWidget::setTabOrder(m_edCropYOffset, m_edCropWidth);
        QWidget::setTabOrder(m_edCropWidth, m_edCropHeight);

        menuBar->addAction(m_MenuFile->menuAction());
        menuBar->addAction(m_MenuOptions->menuAction());
        m_MenuFile->addAction(m_MenuAbout->menuAction());
        m_MenuFile->addAction(m_MenuLang->menuAction());
        m_MenuFile->addSeparator();
        m_MenuFile->addAction(m_MenuClose);
        m_MenuAbout->addSeparator();
        m_MenuLang->addAction(m_TitleLangEnglish);
        m_MenuLang->addAction(m_TitleLangGerman);
        m_MenuOptions->addSeparator();
        m_MenuOptions->addAction(m_TitleLogtofile);
        m_MenuOptions->addSeparator();

        retranslateUi(V4L2ViewerClass);

        QMetaObject::connectSlotsByName(V4L2ViewerClass);
    } // setupUi

    void retranslateUi(QMainWindow *V4L2ViewerClass)
    {
        V4L2ViewerClass->setWindowTitle(QString());
        m_MenuClose->setText(QApplication::translate("V4L2ViewerClass", "Close", nullptr));
#ifndef QT_NO_TOOLTIP
        m_MenuClose->setToolTip(QApplication::translate("V4L2ViewerClass", "<html><head/><body><p><span style=\" font-weight:600;\">Close Viewer</span></p><p>Close the current Viewer window.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        m_MenuOpenNextViewer->setText(QApplication::translate("V4L2ViewerClass", "Open Next Viewer ...", nullptr));
#ifndef QT_NO_TOOLTIP
        m_MenuOpenNextViewer->setToolTip(QApplication::translate("V4L2ViewerClass", "<html><head/><body><p><span style=\" font-weight:600;\">Open Next Viewer</span></p><p>Open a new Viewer window.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        actionBuffer_count->setText(QApplication::translate("V4L2ViewerClass", "Buffer count", nullptr));
        m_TitleNonBlockingMode->setText(QApplication::translate("V4L2ViewerClass", "Nonblocking-mode", nullptr));
        m_TitleClearOutputListbox->setText(QApplication::translate("V4L2ViewerClass", "Clear Message Listbox", nullptr));
#ifndef QT_NO_TOOLTIP
        m_TitleClearOutputListbox->setToolTip(QApplication::translate("V4L2ViewerClass", "<p><b>Clear Message Listbox</b></p>\n"
"<span>Clicking this button will clear log box below.</span>", nullptr));
#endif // QT_NO_TOOLTIP
        m_TitleLogtofile->setText(QApplication::translate("V4L2ViewerClass", "Log to file", nullptr));
#ifndef QT_NO_TOOLTIP
        m_TitleLogtofile->setToolTip(QApplication::translate("V4L2ViewerClass", "<p><b>Log to file</b></p>\n"
"<span>Clicking this button will turn on/off logging into the file.</span>", nullptr));
#endif // QT_NO_TOOLTIP
        m_TitleToggleStreamRandom->setText(QApplication::translate("V4L2ViewerClass", "Toggle Stream On/Off with random delay", nullptr));
        m_TitleEnableMessageListbox->setText(QApplication::translate("V4L2ViewerClass", "Enable Message Listbox", nullptr));
#ifndef QT_NO_TOOLTIP
        m_TitleEnableMessageListbox->setToolTip(QApplication::translate("V4L2ViewerClass", "<p><b>Enable Message Listbox</b></p>\n"
"<span>Clicking this button will enable/disable printing into the log box below.</span>", nullptr));
#endif // QT_NO_TOOLTIP
        m_TitleEnableExtendedControls->setText(QApplication::translate("V4L2ViewerClass", "Enable Extended Controls", nullptr));
        m_TitleCorrectIncomingRAW10Image->setText(QApplication::translate("V4L2ViewerClass", "Correct incoming RAW10 image", nullptr));
        actionSave_Options->setText(QApplication::translate("V4L2ViewerClass", "Save Options", nullptr));
        m_TitleLangGerman->setText(QApplication::translate("V4L2ViewerClass", "German", nullptr));
        m_TitleLangEnglish->setText(QApplication::translate("V4L2ViewerClass", "English", nullptr));
        m_camerasListCheckBox->setText(QString());
        m_FramesPerSecondLabel->setText(QApplication::translate("V4L2ViewerClass", "- fps", nullptr));
        m_FrameIdLabel->setText(QApplication::translate("V4L2ViewerClass", "FrameID: -", nullptr));
#ifndef QT_NO_TOOLTIP
        m_OpenCloseButton->setToolTip(QApplication::translate("V4L2ViewerClass", "<html><head/><body><p><span style=\" font-weight:600;\">Open/Close Camera</span></p><p>Open/close selected camera.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        m_OpenCloseButton->setText(QApplication::translate("V4L2ViewerClass", "Open Camera", nullptr));
#ifndef QT_NO_TOOLTIP
        m_FlipHorizontalCheckBox->setToolTip(QApplication::translate("V4L2ViewerClass", "<html><head/><body><p><span style=\" font-weight:600;\">Flip Horizontal</span></p><p>Flip image area horizontally.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        m_FlipHorizontalCheckBox->setText(QApplication::translate("V4L2ViewerClass", "Flip X", nullptr));
#ifndef QT_NO_TOOLTIP
        m_FlipVerticalCheckBox->setToolTip(QApplication::translate("V4L2ViewerClass", "<html><head/><body><p><span style=\" font-weight:600;\">Flip Vertical</span></p><p>Flip image area vertically.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        m_FlipVerticalCheckBox->setText(QApplication::translate("V4L2ViewerClass", "Flip Y", nullptr));
        m_ZoomLabel->setText(QApplication::translate("V4L2ViewerClass", "100%", nullptr));
#ifndef QT_NO_TOOLTIP
        m_SaveImageButton->setToolTip(QApplication::translate("V4L2ViewerClass", "<html><head/><body><p><span style=\" font-weight:600;\">Save one frame</span></p><p>Save one frame as image with format set in Settings under given path.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        m_SaveImageButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_ZoomFitButton->setToolTip(QApplication::translate("V4L2ViewerClass", "<html><head/><body><p><span style=\" font-weight:600;\">Fit to window</span></p><p>Fit image area to window.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        m_ZoomFitButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_ZoomOutButton->setToolTip(QApplication::translate("V4L2ViewerClass", "<p><b>Zoom out</b></p>\n"
"<span>Zoom out</span>", nullptr));
#endif // QT_NO_TOOLTIP
        m_ZoomOutButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_StopButton->setToolTip(QApplication::translate("V4L2ViewerClass", "<html><head/><body><p><span style=\" font-weight:600;\">Stop acquisition</span></p><p>Stop image acquisition.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        m_StopButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_ZoomInButton->setToolTip(QApplication::translate("V4L2ViewerClass", "<p><b>Zoom in</b></p>\n"
"<span>Zoom in </span>", nullptr));
#endif // QT_NO_TOOLTIP
        m_ZoomInButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_DisplayImagesCheckBox->setToolTip(QApplication::translate("V4L2ViewerClass", "<html><head/><body><p><span style=\" font-weight:600;\">Display on/off</span></p><p>Switch displaying images on or off.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        m_DisplayImagesCheckBox->setText(QApplication::translate("V4L2ViewerClass", "Display Images", nullptr));
#ifndef QT_NO_TOOLTIP
        m_StartButton->setToolTip(QApplication::translate("V4L2ViewerClass", "<html><head/><body><p><span style=\" font-weight:600;\">Start acquisition</span></p><p>Start image acquisition.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        m_StartButton->setText(QString());
        m_labelWhiteBalanceAuto->setText(QApplication::translate("V4L2ViewerClass", "White Balance Auto", nullptr));
        m_labelGamma->setText(QApplication::translate("V4L2ViewerClass", "Gamma:", nullptr));
        m_labelBrightness->setText(QApplication::translate("V4L2ViewerClass", "Brightness:", nullptr));
#ifndef QT_NO_TOOLTIP
        m_chkContWhiteBalance->setToolTip(QApplication::translate("V4L2ViewerClass", "<html><head/><body><p><span style=\" font-weight:600;\">Auto White Balance</span></p><p>Switch auto white balance on/off.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        m_chkContWhiteBalance->setText(QApplication::translate("V4L2ViewerClass", "Auto", nullptr));
#ifndef QT_NO_TOOLTIP
        m_AllControlsButton->setToolTip(QApplication::translate("V4L2ViewerClass", "<html><head/><body><p><span style=\" font-weight:600;\">All features</span></p><p>Open to access all features.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        m_AllControlsButton->setText(QApplication::translate("V4L2ViewerClass", "Open", nullptr));
        m_labelAllFeatures->setText(QApplication::translate("V4L2ViewerClass", "All Features", nullptr));
        m_labelGain->setText(QApplication::translate("V4L2ViewerClass", "Gain [1/100dB]:", nullptr));
#ifndef QT_NO_TOOLTIP
        m_chkAutoGain->setToolTip(QApplication::translate("V4L2ViewerClass", "<html><head/><body><p><span style=\" font-weight:600;\">Auto Gain</span></p><p>Switch auto gain on/off.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        m_chkAutoGain->setText(QApplication::translate("V4L2ViewerClass", "Auto", nullptr));
        m_labelExposure->setText(QApplication::translate("V4L2ViewerClass", "Exposure [ns]:", nullptr));
        m_labelExposureAuto->setText(QApplication::translate("V4L2ViewerClass", "Exposure Auto", nullptr));
        m_labelGainAuto->setText(QApplication::translate("V4L2ViewerClass", "Gain Auto", nullptr));
#ifndef QT_NO_TOOLTIP
        m_chkAutoExposure->setToolTip(QApplication::translate("V4L2ViewerClass", "<html><head/><body><p><span style=\" font-weight:600;\">Auto Exposure</span></p><p>Switch auto exposure on/off.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        m_chkAutoExposure->setText(QApplication::translate("V4L2ViewerClass", "Auto", nullptr));
#ifndef QT_NO_TOOLTIP
        m_pixelFormats->setToolTip(QApplication::translate("V4L2ViewerClass", "<p><b>Pixel Formats</b></p>\n"
"<span>Clicking this button will show all available pixel formats.</span>", nullptr));
#endif // QT_NO_TOOLTIP
        m_labelFrameRate->setText(QApplication::translate("V4L2ViewerClass", "Framerate [Hz]:", nullptr));
#ifndef QT_NO_TOOLTIP
        m_chkFrameRateAuto->setToolTip(QApplication::translate("V4L2ViewerClass", "<html><head/><body><p><span style=\" font-weight:600;\">Auto maximum frame rate</span></p><p>Automatically apply the maximum frame rate, ignore the manually set value.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        m_chkFrameRateAuto->setText(QApplication::translate("V4L2ViewerClass", "Auto", nullptr));
        m_labelFrameRateAuto->setText(QApplication::translate("V4L2ViewerClass", "Framerate Auto", nullptr));
        m_labelPixelFormats->setText(QApplication::translate("V4L2ViewerClass", "Pixel Format:", nullptr));
        m_labelFrameSizes->setText(QApplication::translate("V4L2ViewerClass", "Framesize:", nullptr));
        m_CropLabel->setText(QApplication::translate("V4L2ViewerClass", "Crop", nullptr));
        m_labelCropXOffset->setText(QApplication::translate("V4L2ViewerClass", "Left:", nullptr));
        m_labelCropWidth->setText(QApplication::translate("V4L2ViewerClass", "Width:", nullptr));
        m_labelCropHeight->setText(QApplication::translate("V4L2ViewerClass", "Height:", nullptr));
        m_labelCropYOffset->setText(QApplication::translate("V4L2ViewerClass", "Top:", nullptr));
        m_labelWidth->setText(QApplication::translate("V4L2ViewerClass", "Width:", nullptr));
        m_labelHeight->setText(QApplication::translate("V4L2ViewerClass", "Height:", nullptr));
#ifndef QT_NO_TOOLTIP
        m_MenuFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        m_MenuFile->setTitle(QApplication::translate("V4L2ViewerClass", "File", nullptr));
        m_MenuAbout->setTitle(QApplication::translate("V4L2ViewerClass", "About", nullptr));
        m_MenuLang->setTitle(QApplication::translate("V4L2ViewerClass", "Language", nullptr));
        m_MenuOptions->setTitle(QApplication::translate("V4L2ViewerClass", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class V4L2ViewerClass: public Ui_V4L2ViewerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_V4L2VIEWER_H
