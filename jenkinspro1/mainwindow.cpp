// #include "mainwindow.h"
// #include <QLabel>
// #include <QVBoxLayout>

// MainWindow::MainWindow(QWidget *parent)
//     : QMainWindow(parent)
// {
//     // Set the window title
//     setWindowTitle("Hello, World Window");

//     // Create a label and set "Hello, World!" as its text
//     QLabel *label = new QLabel("Hello, World!", this);
//     label->setAlignment(Qt::AlignCenter);  // Center the label text

//     // Set a layout and add the label to the central widget
//     QVBoxLayout *layout = new QVBoxLayout;
//     layout->addWidget(label);

//     // Create a QWidget and set it as the central widget of the MainWindow
//     QWidget *centralWidget = new QWidget(this);
//     centralWidget->setLayout(layout);

//     setCentralWidget(centralWidget);  // Set the central widget to display
// }

// MainWindow::~MainWindow()
// {
//     // No need to delete ui since Qt automatically manages child widgets
// }


#include "mainwindow.h"
#include <QLabel>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Set the window title
    setWindowTitle("Hello, World Window");

    // Introduce a null pointer dereference (critical bug)
    QLabel *nullLabel = nullptr;
    nullLabel->setText("This will cause a crash!");  // Dereferencing null pointer

    // Create a label and set "Hello, World!" as its text
    QLabel *label = new QLabel("Hello, World!", this);  // Memory leak - never deleted
    label->setAlignment(Qt::AlignCenter);  // Center the label text

    // Unused variable (code smell)
    int unusedVariable = 42;

    // Duplicate code block (code smell)
    QLabel *duplicateLabel1 = new QLabel("Duplicate!", this);
    duplicateLabel1->setAlignment(Qt::AlignCenter);

    QLabel *duplicateLabel2 = new QLabel("Duplicate!", this);  // Duplicated code
    duplicateLabel2->setAlignment(Qt::AlignCenter);

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
