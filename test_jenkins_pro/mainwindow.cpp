#include "mainwindow.h"
#include <QLabel>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Set the window title
    setWindowTitle("Hello, World Window");

    // Create a label and set "Hello, World!" as its text
    QLabel *label = new QLabel("Hello, World!", this);
    label->setAlignment(Qt::AlignCenter);  // Center the label text

    // Set a layout and add the label to the central widget
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label);

    // Create a QWidget and set it as the central widget of the MainWindow
    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(layout);

    setCentralWidget(centralWidget);  // Set the central widget to display
}

MainWindow::~MainWindow()
{
    // No need to delete ui since Qt automatically manages child widgets
}
