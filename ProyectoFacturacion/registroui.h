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

private slots:
    void on_txtUsuario_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::RegistroUI *ui;
};

#endif // REGISTROUI_H
