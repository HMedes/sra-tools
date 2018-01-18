#ifndef DIAGNOSTICSVIEW_H
#define DIAGNOSTICSVIEW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QVBoxLayout;
class QTreeWidget;
class QTreeWidgetItem;
QT_END_NAMESPACE

struct KDiagnoseTest;
class DiagnosticsTest;

class DiagnosticsView : public QWidget
{
    Q_OBJECT
public:
    explicit DiagnosticsView(QWidget *parent = 0);
    ~DiagnosticsView ();

signals:

public slots:
    void handle_callback ( DiagnosticsTest *test );

private slots:
    void run_diagnostics ();

private:


    void setup_view ();

    // Visual
    QVBoxLayout *self_layout;

    QTreeWidget *tree_view;
    QList < DiagnosticsTest * > testList;
    QTreeWidgetItem *currentTest;
};

#endif // DIAGNOSTICSVIEW_H