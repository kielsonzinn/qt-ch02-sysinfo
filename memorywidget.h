#ifndef MEMORYWIDGET_H
#define MEMORYWIDGET_H

#include <QWidget>
#include <QtCharts>

#include "sysinfowidget.h"

class MemoryWidget : public SysInfoWidget {
    Q_OBJECT
public:
    explicit MemoryWidget( QWidget* parent = NULL );

protected slots:
    void updateSeries() override;

private:
    QtCharts::QLineSeries* mSeries;
    qint64 mPointPositionX;

};

#endif // MEMORYWIDGET_H
