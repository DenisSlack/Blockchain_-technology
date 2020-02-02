#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <QWidget>
#include <Block.h>
#include <QVector>
namespace Ui {
class blockchain;
}

class blockchain : public QWidget
{
    Q_OBJECT

public:
    explicit blockchain(QWidget *parent = nullptr);
    ~blockchain();
    int num = 0;
    QString login;
    QVector <Block> blocks;
    void ReadChain();
    void Show();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::blockchain *ui;
};

#endif // BLOCKCHAIN_H
