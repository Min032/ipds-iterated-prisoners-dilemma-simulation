#include "graphicSim.h"
#include "graphics.h"
#include "strategiesheaders.h"
#include "ui_mainwindow.h"
#include <iostream>

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

    MainWindow(const MainWindow& mw);

    MainWindow operator=(const MainWindow& mwOther);

    void plot();


private slots:
    void on_pushButtonPlay_clicked();

    void on_pushButtonStop_clicked();

    void on_pushButtonPause_clicked();


private:

    GraphicSim* m_gs;
    Ui::MainWindow* ui;
    QGraphicsView* m_view;
    QGraphicsScene* m_scene;
    bool m_playing;

    void setPlotColors();
};
#endif // MAINWINDOW_H
