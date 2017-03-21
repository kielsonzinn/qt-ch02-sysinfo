#ifndef CPUWIDGET_H
#define CPUWIDGET_H

#include <QtCharts>

#include "sysinfowidget.h"

class CpuWidget : public SysInfoWidget {
    Q_OBJECT
public:
    explicit CpuWidget( QWidget* parent = NULL );

protected slots:
    void updateSeries() override;

private:
    QtCharts::QPieSeries* mSeries;

};

#endif // CPUWIDGET_H
