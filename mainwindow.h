#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QPushButton>
#include <QComboBox>
#include "makeprocessor.h"
#include "decimaltohex.h"
#include "formulacalculator.h"
#include "formulamarker.h"
#include "hextodecimal.h"
#include "processor.h"
#include "removedigits.h"
#include "reversetext.h"
#include "textdecoder.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_addButton_clicked();

    void on_readButton_clicked();

    void on_pushButtonReset_clicked();

private:
    Ui::MainWindow *ui;
    TextDecoder *m_decoder;
};


#endif // MAINWINDOW_H
