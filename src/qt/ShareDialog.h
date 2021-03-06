#ifndef SHAREDIALOG_H
#define SHAREDIALOG_H

#include <QDialog>
namespace Ui {
class ShareDialog;
}

class ShareDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ShareDialog(QWidget *parent = 0);
    ~ShareDialog();
public Q_SLOTS:
    void sendClickedByKey();
    void sendClickedByEmail();
private:
    Ui::ShareDialog *ui;
    void resizeEvent(QResizeEvent*);

};

#endif // DIALOG_H
