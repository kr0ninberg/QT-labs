#include <QApplication>
#include <QSlider>
#include <QSpinBox>
#include <QBoxLayout>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
        QWidget *window = new QWidget;
        window -> setWindowTitle("Enter your age");
        QSpinBox *spinbox = new QSpinBox;
        QSlider *slider = new QSlider(Qt::Horizontal);
        slider -> setRange(0, 130);
        spinbox -> setRange(0, 130);

        QObject::connect(spinbox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
        QObject::connect(slider, SIGNAL(valueChanged(int)), spinbox, SLOT(setValue(int)));
        spinbox->setValue(35);

        QHBoxLayout *layout = new QHBoxLayout;
        layout->addWidget(spinbox);
        layout->addWidget(slider);

        window->setLayout(layout);

        window->show();
    return app.exec();
}
