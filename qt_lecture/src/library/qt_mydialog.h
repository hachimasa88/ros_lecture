#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

class MainDialog : public QDialog
{
  Q_OBJECT
public:
  MainDialog(QWidget* parent = 0);

private Q_SLOTS:
  void setLabelText(); 
private:
  QLabel* label;
  QLineEdit* lineEdit;
  QPushButton* setButton;
};
