#ifndef SUBWINDOW_H
#define SUBWINDOW_H

#include <QMainWindow>
#include <QResizeEvent>
#include <QFileSystemModel>
#include <QDebug>
#include <QFileDialog>
#include <QTextStream>
#include <QTextDocument>
#include <QPlainTextDocumentLayout>
#include <QMap>
#include <QUrl>
#include <QWidget>
#include <QMimeData>
#include <QRegularExpression>
#include <QCompleter>
#include <QFontDialog>
#include <QStringListModel>

#include "Highlighter.h"
#include "Message.h"
#include "Search.h"
#include "Help.h"
#include "TextArea.h"

#define WORDLIST ":/resources/wordlist.txt"

class MainWindow;

namespace Ui {
    class SubWindow;
}

class SubWindow : public QWidget {
    Q_OBJECT

public:
    explicit SubWindow(MainWindow *window, QWidget *parent = nullptr);
    ~SubWindow() override;

    void addNewFile(QFile *file);
    void closeTab(const int& index);
    void resetPosition();
    QMap<QString, QPlainTextEdit *> &getFiles();
    QPlainTextEdit *getActivArea();
    void setFocusTab(int index);
    Search *getSerach();
    void showSearch();
    void setTheme(bool dark);

private:
    QAbstractItemModel *modelFromFile(const QString& fileName);

    Ui::SubWindow *ui;
    MainWindow *m_parent;
    QMap<QString, QPlainTextEdit *> m_files;
    Search *m_search {new Search(this)};
    QVector<QTextCursor> m_match;
    QVector<QTextCursor>::iterator m_searchIt{nullptr};
    QCompleter *m_completer {new QCompleter(this)};

public slots:
    void keyPressEvent(QKeyEvent *event) override;
    void textRecieve(QString text);
    void downSearch();
    void upSearch();
    void replaceBut();

protected:
    void dropEvent(QDropEvent *event) override;
    void dragEnterEvent(QDragEnterEvent *event) override;
};

#endif
