#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QPainter>
#include <QFont>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    const int UNITLENGTH = 50;

    int map[12][20][12]; //[区块][x][y]
    int block;
    int player_x, player_y;

    QFont font;

    void setMap();//录入数字地图
    void setLabels();//初始化图像/对话框

    int matchInteraction(); //判断交互类型
    void setBlockLabels(); //设置区块内标签


    ~MainWindow();

protected:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
