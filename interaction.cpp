#include "interaction.h"

Interaction::Interaction(Ui::MainWindow *p):
  exui(p)
{

}

void Interaction::setBlockLabels()
{
//    int block = 0;
//    block = MainWindow.block;

    switch(MainWindow.block){
    case 1:
        exui->gate1->resize(UNITLENGTH*1,UNITLENGTH*2);
        exui->gate2->resize(UNITLENGTH*2,UNITLENGTH*1);
        exui->gate1->move(UNITLENGTH*19,UNITLENGTH*3);
        exui->gate2->move(UNITLENGTH*15,UNITLENGTH*11);
    }
}
