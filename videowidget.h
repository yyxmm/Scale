#ifndef VIDEOWIDGET_H
#define VIDEOWIDGET_H

#include <QWidget>

class VideoWidget : public QWidget
{
    Q_OBJECT
public:
    explicit VideoWidget(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;

signals:

public slots:
};

#endif // VIDEOWIDGET_H
