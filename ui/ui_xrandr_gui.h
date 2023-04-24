/********************************************************************************
** Form generated from reading UI file 'xrandr_guiBwSdlQ.ui'
**
** Created by: Qt User Interface Compiler version 5.15.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef XRANDR_GUIBWSDLQ_H
#define XRANDR_GUIBWSDLQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xrandrGUI
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *displayWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *displayFrame;
    QHBoxLayout *horizontalLayout_4;
    QGraphicsView *graphicsView;
    QWidget *buttonWidget;
    QVBoxLayout *verticalLayout_6;
    QFrame *buttonFrame;
    QHBoxLayout *horizontalLayout_3;
    QFrame *mirrorButtonFrame;
    QVBoxLayout *verticalLayout_2;
    QPushButton *mirrorButton;
    QFrame *extendButtonFrame;
    QVBoxLayout *verticalLayout_3;
    QPushButton *extendButton;
    QFrame *setposButtonFrame;
    QVBoxLayout *verticalLayout_4;
    QPushButton *setposButton;
    QFrame *detectButtonFrame;
    QVBoxLayout *verticalLayout_5;
    QPushButton *detectButton;
    QFrame *labelFrame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;

    void setupUi(QMainWindow *xrandrGUI)
    {
        if (xrandrGUI->objectName().isEmpty())
            xrandrGUI->setObjectName(QString::fromUtf8("xrandrGUI"));
        xrandrGUI->resize(800, 600);
        xrandrGUI->setMinimumSize(QSize(800, 600));
        xrandrGUI->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(xrandrGUI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(800, 0));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        displayWidget = new QWidget(centralwidget);
        displayWidget->setObjectName(QString::fromUtf8("displayWidget"));
        horizontalLayout = new QHBoxLayout(displayWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        displayFrame = new QFrame(displayWidget);
        displayFrame->setObjectName(QString::fromUtf8("displayFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(displayFrame->sizePolicy().hasHeightForWidth());
        displayFrame->setSizePolicy(sizePolicy);
        displayFrame->setFrameShape(QFrame::NoFrame);
        displayFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(displayFrame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(displayFrame);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setFrameShape(QFrame::NoFrame);

        horizontalLayout_4->addWidget(graphicsView);


        horizontalLayout->addWidget(displayFrame);


        verticalLayout->addWidget(displayWidget);

        buttonWidget = new QWidget(centralwidget);
        buttonWidget->setObjectName(QString::fromUtf8("buttonWidget"));
        verticalLayout_6 = new QVBoxLayout(buttonWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        buttonFrame = new QFrame(buttonWidget);
        buttonFrame->setObjectName(QString::fromUtf8("buttonFrame"));
        buttonFrame->setFrameShape(QFrame::NoFrame);
        buttonFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(buttonFrame);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mirrorButtonFrame = new QFrame(buttonFrame);
        mirrorButtonFrame->setObjectName(QString::fromUtf8("mirrorButtonFrame"));
        mirrorButtonFrame->setFrameShape(QFrame::NoFrame);
        mirrorButtonFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mirrorButtonFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mirrorButton = new QPushButton(mirrorButtonFrame);
        mirrorButton->setObjectName(QString::fromUtf8("mirrorButton"));

        verticalLayout_2->addWidget(mirrorButton);


        horizontalLayout_3->addWidget(mirrorButtonFrame);

        extendButtonFrame = new QFrame(buttonFrame);
        extendButtonFrame->setObjectName(QString::fromUtf8("extendButtonFrame"));
        extendButtonFrame->setFrameShape(QFrame::NoFrame);
        extendButtonFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(extendButtonFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        extendButton = new QPushButton(extendButtonFrame);
        extendButton->setObjectName(QString::fromUtf8("extendButton"));

        verticalLayout_3->addWidget(extendButton);


        horizontalLayout_3->addWidget(extendButtonFrame);

        setposButtonFrame = new QFrame(buttonFrame);
        setposButtonFrame->setObjectName(QString::fromUtf8("setposButtonFrame"));
        setposButtonFrame->setFrameShape(QFrame::NoFrame);
        setposButtonFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(setposButtonFrame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        setposButton = new QPushButton(setposButtonFrame);
        setposButton->setObjectName(QString::fromUtf8("setposButton"));

        verticalLayout_4->addWidget(setposButton);


        horizontalLayout_3->addWidget(setposButtonFrame);

        detectButtonFrame = new QFrame(buttonFrame);
        detectButtonFrame->setObjectName(QString::fromUtf8("detectButtonFrame"));
        detectButtonFrame->setFrameShape(QFrame::NoFrame);
        detectButtonFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(detectButtonFrame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        detectButton = new QPushButton(detectButtonFrame);
        detectButton->setObjectName(QString::fromUtf8("detectButton"));

        verticalLayout_5->addWidget(detectButton);


        horizontalLayout_3->addWidget(detectButtonFrame);


        verticalLayout_6->addWidget(buttonFrame);

        labelFrame = new QFrame(buttonWidget);
        labelFrame->setObjectName(QString::fromUtf8("labelFrame"));
        labelFrame->setFrameShape(QFrame::NoFrame);
        labelFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(labelFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(716, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(labelFrame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        verticalLayout_6->addWidget(labelFrame);


        verticalLayout->addWidget(buttonWidget);

        xrandrGUI->setCentralWidget(centralwidget);

        retranslateUi(xrandrGUI);

        QMetaObject::connectSlotsByName(xrandrGUI);
    } // setupUi

    void retranslateUi(QMainWindow *xrandrGUI)
    {
        xrandrGUI->setWindowTitle(QCoreApplication::translate("xrandrGUI", "MainWindow", nullptr));
        mirrorButton->setText(QCoreApplication::translate("xrandrGUI", "Mirror Displays", nullptr));
        extendButton->setText(QCoreApplication::translate("xrandrGUI", "Extend Displays", nullptr));
        setposButton->setText(QCoreApplication::translate("xrandrGUI", "Set Position", nullptr));
        detectButton->setText(QCoreApplication::translate("xrandrGUI", "Detect", nullptr));
        label->setText(QCoreApplication::translate("xrandrGUI", "xrandr GUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xrandrGUI: public Ui_xrandrGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // XRANDR_GUIBWSDLQ_H
