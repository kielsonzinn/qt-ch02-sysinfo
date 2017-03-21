#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "sysinfo.h"

MainWindow::MainWindow( QWidget* parent ) :
    QMainWindow( parent ),
    ui( new Ui::MainWindow ),
    mCpuWidget( this ),
    mMemoryWidget( this )
{
    ui->setupUi( this );

    SysInfo::instance().init();

    ui->wdgCentral->layout()->addWidget( &mCpuWidget );
    ui->wdgCentral->layout()->addWidget( &mMemoryWidget );
}

MainWindow::~MainWindow() {
    delete ui;
}
