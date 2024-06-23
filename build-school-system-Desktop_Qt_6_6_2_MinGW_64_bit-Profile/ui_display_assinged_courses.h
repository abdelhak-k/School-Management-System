/********************************************************************************
** Form generated from reading UI file 'display_assinged_courses.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_ASSINGED_COURSES_H
#define UI_DISPLAY_ASSINGED_COURSES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Display_assinged_courses
{
public:
    QTableWidget *table;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Save;
    QPushButton *addCourse;
    QPushButton *DeleteCourse;

    void setupUi(QDialog *Display_assinged_courses)
    {
        if (Display_assinged_courses->objectName().isEmpty())
            Display_assinged_courses->setObjectName("Display_assinged_courses");
        Display_assinged_courses->resize(440, 376);
        table = new QTableWidget(Display_assinged_courses);
        if (table->columnCount() < 1)
            table->setColumnCount(1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe MDL2 Assets")});
        font.setPointSize(9);
        font.setWeight(QFont::Medium);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        table->setObjectName("table");
        table->setGeometry(QRect(150, 70, 151, 192));
        widget = new QWidget(Display_assinged_courses);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(100, 280, 259, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Save = new QPushButton(widget);
        Save->setObjectName("Save");

        horizontalLayout->addWidget(Save);

        addCourse = new QPushButton(widget);
        addCourse->setObjectName("addCourse");

        horizontalLayout->addWidget(addCourse);

        DeleteCourse = new QPushButton(widget);
        DeleteCourse->setObjectName("DeleteCourse");

        horizontalLayout->addWidget(DeleteCourse);


        retranslateUi(Display_assinged_courses);

        QMetaObject::connectSlotsByName(Display_assinged_courses);
    } // setupUi

    void retranslateUi(QDialog *Display_assinged_courses)
    {
        Display_assinged_courses->setWindowTitle(QCoreApplication::translate("Display_assinged_courses", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Display_assinged_courses", "Course Name", nullptr));
        Save->setText(QCoreApplication::translate("Display_assinged_courses", "Save", nullptr));
        addCourse->setText(QCoreApplication::translate("Display_assinged_courses", "Add", nullptr));
        DeleteCourse->setText(QCoreApplication::translate("Display_assinged_courses", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Display_assinged_courses: public Ui_Display_assinged_courses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_ASSINGED_COURSES_H
