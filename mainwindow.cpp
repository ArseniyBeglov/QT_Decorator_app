#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Паттерн декоратор");

}

MainWindow::~MainWindow()
{
    delete ui;
}

Processor *decorator = new MakeProcessor();


void MainWindow::on_addButton_clicked()
{
    if (ui->comboBox->currentIndex() == 0) {
        decorator = new FormulaCalculator(decorator);
    } else if (ui->comboBox->currentIndex() == 1) {
        decorator = new FormulaMarker(decorator);
    } else if (ui->comboBox->currentIndex() == 2) {
        decorator = new HexToDecimal(decorator);
    } else if (ui->comboBox->currentIndex() == 3) {
        decorator = new DecimalToHex(decorator);
    } else if (ui->comboBox->currentIndex() == 4) {
        decorator = new RemoveDigits(decorator);
    } else if (ui->comboBox->currentIndex() == 5) {
        decorator = new ReverseText(decorator);
    }
}


void MainWindow::on_readButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Выберите файл .txt"));
    ui->textEditOutput->setText(decorator->process(filename));
    qDebug() << filename;
}


void MainWindow::on_pushButtonReset_clicked()
{
    delete(decorator);
    decorator = new MakeProcessor();
}

