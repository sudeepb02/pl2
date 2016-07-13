#ifndef FORM_H
#define FORM_H
#include "qstring.h"
class student
{
    QString name,email,clg;
    static int count;
public:
    void AcceptUser(QString,QString,QString);
    student();
    friend class MainWindow;
};


#endif // FORM_H
