#ifndef SYSINFOWIDGET_H
#define SYSINFOWIDGET_H

#include <QTimer>
#include <QWidget>
#include <QChartView>

class SysInfoWidget : public QWidget {
    Q_OBJECT
public:
    explicit SysInfoWidget( QWidget* parent = NULL, int startDelayMs = 500, int updateSeriesDelayMs = 500 );
    virtual ~SysInfoWidget();

protected:
    QtCharts::QChartView& chartView();

protected slots:
    virtual void updateSeries() = 0;

private:
    QTimer mRefreshTimer;
    QtCharts::QChartView mChartView;

};

#endif // SYSINFOWIDGET_H
