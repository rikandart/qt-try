#include "mainwindow.h"

#include <QApplication>

//#define _TEST_INHERITANCE

#ifdef _TEST_INHERITANCE
class first{
public:
    int height = 0;
    first();
    first(int i);
    ~first();

};

first::first(){

}

first::first(int i){
    height = i;
}

class second : public first{
public:
    second(int y);
    first *h;
    int k(int p);
};

second::second(int y) : first(y), h(new first(y)){

}
#endif

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
	// comment from another-branch
    w.show();
    return a.exec();
}
