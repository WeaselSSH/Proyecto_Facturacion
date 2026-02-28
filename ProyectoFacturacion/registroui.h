#ifndef REGISTROUI_H
#define REGISTROUI_H

#include <QWidget>

namespace Ui {
class RegistroUI;
}

class RegistroUI : public QWidget
{
    Q_OBJECT

public:
    explicit RegistroUI(QWidget *parent = nullptr);
    ~RegistroUI();

private:
    Ui::RegistroUI *ui;
};

#endif // REGISTROUI_H
