#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("OpenCV + Qt");

    run =false;

    connect(ui->startButton,SIGNAL(clicked()),this,SLOT(start()));
    connect(ui->stopButton,SIGNAL(clicked()),this,SLOT(stop()));
    connect(ui->pauseButton,SIGNAL(clicked()),this,SLOT(pause()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start(){

    run=true;
    cam.open(0);
    if(!cam.isOpened()){
        ui->label->setText("No webcam");
        return;
    }
    ui->label->setText("Started..");
    while(run){
        cv::Mat image;
        cam>>image;
        cv::imshow("My Image", image);
        cv::waitKey(1);
    }

}

void MainWindow::stop(){

    run=false;
    cv::destroyAllWindows();
    ui->label->setText("Stopped..");
}

void MainWindow::pause(){

    run=false;
    ui->label->setText("Pause..");
}
