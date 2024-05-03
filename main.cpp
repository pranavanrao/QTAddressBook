#include "widget.h"

#include <QApplication>
#include <QTableWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    QVBoxLayout *layout = new QVBoxLayout(&w);
    QTableWidget table;
    QHBoxLayout *btnLayout = new QHBoxLayout();

    table.setRowCount(6);
    table.setColumnCount(2);

    table.setHorizontalHeaderLabels({"Name", "Phone"});

    QTableWidgetItem *row1_item1 = new QTableWidgetItem("John");
    QTableWidgetItem *row1_item2 = new QTableWidgetItem("1234567890");
    QTableWidgetItem *row2_item1 = new QTableWidgetItem("Alice");
    QTableWidgetItem *row2_item2 = new QTableWidgetItem("9876543210");
    QTableWidgetItem *row3_item1 = new QTableWidgetItem("Bob");
    QTableWidgetItem *row3_item2 = new QTableWidgetItem("9876543210");
    QTableWidgetItem *row4_item1 = new QTableWidgetItem("Pranav");
    QTableWidgetItem *row4_item2 = new QTableWidgetItem("9876543210");
    QTableWidgetItem *row5_item1 = new QTableWidgetItem("Jim");
    QTableWidgetItem *row5_item2 = new QTableWidgetItem("9876543210");
    QTableWidgetItem *row6_item1 = new QTableWidgetItem("Mike");
    QTableWidgetItem *row6_item2 = new QTableWidgetItem("9876543210");

    table.setItem(0, 0, row1_item1);
    table.setItem(0, 1, row1_item2);
    table.setItem(1, 0, row2_item1);
    table.setItem(1, 1, row2_item2);
    table.setItem(2, 0, row3_item1);
    table.setItem(2, 1, row3_item2);
    table.setItem(3, 0, row4_item1);
    table.setItem(3, 1, row4_item2);
    table.setItem(4, 0, row5_item1);
    table.setItem(4, 1, row5_item2);
    table.setItem(5, 0, row6_item1);
    table.setItem(5, 1, row6_item2);

    QPushButton *addBtn = new QPushButton("Add");
    QPushButton *updateBtn = new QPushButton("Update");
    QPushButton *deleteBtn = new QPushButton("Delete");

    btnLayout->addWidget(addBtn);
    btnLayout->addWidget(updateBtn);
    btnLayout->addWidget(deleteBtn);

    layout->addWidget(&table);
    layout->addLayout(btnLayout);
    layout->addStretch();
    w.setLayout(layout);
    w.show();
    return a.exec();
}
