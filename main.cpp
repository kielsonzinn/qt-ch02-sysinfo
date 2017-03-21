#include "mainwindow.h"

#include <cmath>
#include <QDebug>
#include <QApplication>

bool hasDecimal( double value ) {
    double vlDecimal = modf( value, &value );

    return vlDecimal > 0;
}

int main( int argc, char* argv[] ) {
    QApplication app( argc, argv );
    MainWindow mainWindow;
    mainWindow.showMaximized();

    qDebug() << mainWindow.metaObject()->className();

    double vlRepeticao = double(10) / double(3);

    qDebug() << vlRepeticao;
    qDebug() << hasDecimal( vlRepeticao );
    qDebug() << vlRepeticao;

    QList<double> list;
    list << 1.25 << 1.10 << 1.90 << 0.5;

    for ( double value : list ) {
        qDebug() << value;
    }

    qSort( list.begin(), list.end(),
           []( const double a, const double b ) -> bool {
                return a < b; } );

    qDebug() << "value";

    for ( double value : list ) {
        qDebug() << value;
    }

    return app.exec();
}
