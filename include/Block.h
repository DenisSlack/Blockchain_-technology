#pragma once
#ifndef BLOCK_H
#define BLOCK_H
#include <QString>


class Block{
public:
    QString Index;
    QString TimeStamp;
    QString Sender;
    QString Reciever;
    QString SumTrans;
    QString Sign;
    QString HashPrev;
    Block(){};
    QString toStrings()
    {
        QString all_info = this->Index+this->TimeStamp+this->Sender+this->Reciever+this->SumTrans+this->Sign+this->HashPrev;
        return all_info;
    }
};
#endif // BLOCK_H
