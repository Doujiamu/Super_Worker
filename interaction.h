#ifndef INTERACTION_H
#define INTERACTION_H

#define UNITLENGTH 50

#include <QObject>
#include "mainwindow.h"
#include "ui_mainwindow.h"
class MainWindow;

class Interaction : public QObject
{
    Q_OBJECT
public:
    explicit Interaction(Ui::MainWindow *p);

    void setBlockLabels();



    Ui::MainWindow *exui;

signals:

public slots:
};

#endif // INTERACTION_H
