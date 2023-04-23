/********************************************************************************
** Form generated from reading UI file 'xrandr_gui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XRANDR_GUI_H
#define UI_XRANDR_GUI_H

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
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_3;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_4;
    QFrame *labelFrame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;

    void setupUi(QMainWindow *xrandrGUI)
    {
        if (xrandrGUI->objectName().isEmpty())
            xrandrGUI->setObjectName("xrandrGUI");
        xrandrGUI->resize(800, 600);
        centralwidget = new QWidget(xrandrGUI);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(800, 0));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        displayWidget = new QWidget(centralwidget);
        displayWidget->setObjectName("displayWidget");
        horizontalLayout = new QHBoxLayout(displayWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        displayFrame = new QFrame(displayWidget);
        displayFrame->setObjectName("displayFrame");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(displayFrame->sizePolicy().hasHeightForWidth());
        displayFrame->setSizePolicy(sizePolicy);
        displayFrame->setFrameShape(QFrame::NoFrame);
        displayFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(displayFrame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(displayFrame);
        graphicsView->setObjectName("graphicsView");

        horizontalLayout_4->addWidget(graphicsView);


        horizontalLayout->addWidget(displayFrame);


        verticalLayout->addWidget(displayWidget);

        buttonWidget = new QWidget(centralwidget);
        buttonWidget->setObjectName("buttonWidget");
        verticalLayout_6 = new QVBoxLayout(buttonWidget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        buttonFrame = new QFrame(buttonWidget);
        buttonFrame->setObjectName("buttonFrame");
        buttonFrame->setFrameShape(QFrame::NoFrame);
        buttonFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(buttonFrame);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        frame = new QFrame(buttonFrame);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout_3->addWidget(frame);

        frame_2 = new QFrame(buttonFrame);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_3->addWidget(pushButton_2);


        horizontalLayout_3->addWidget(frame_2);

        frame_3 = new QFrame(buttonFrame);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        pushButton_3 = new QPushButton(frame_3);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_4->addWidget(pushButton_3);


        horizontalLayout_3->addWidget(frame_3);

        frame_4 = new QFrame(buttonFrame);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        pushButton_4 = new QPushButton(frame_4);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_5->addWidget(pushButton_4);


        horizontalLayout_3->addWidget(frame_4);


        verticalLayout_6->addWidget(buttonFrame);

        labelFrame = new QFrame(buttonWidget);
        labelFrame->setObjectName("labelFrame");
        labelFrame->setFrameShape(QFrame::NoFrame);
        labelFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(labelFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(716, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(labelFrame);
        label->setObjectName("label");

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
        pushButton->setText(QCoreApplication::translate("xrandrGUI", "Mirror Displays", nullptr));
        pushButton_2->setText(QCoreApplication::translate("xrandrGUI", "Extend Displays", nullptr));
        pushButton_3->setText(QCoreApplication::translate("xrandrGUI", "Set Position", nullptr));
        pushButton_4->setText(QCoreApplication::translate("xrandrGUI", "Detect", nullptr));
        label->setText(QCoreApplication::translate("xrandrGUI", "xrandr GUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xrandrGUI: public Ui_xrandrGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XRANDR_GUI_H
