#ifndef SETMAP_H
#define SETMAP_H

#include <QMainWindow>
#include <mainwindow.h>

class Setmap : public QMainWindow
{
    Q_OBJECT
public:
    explicit Setmap(QWidget *parent = nullptr);
    void setmap();

signals:

public slots:
};

#endif // SETMAP_H
